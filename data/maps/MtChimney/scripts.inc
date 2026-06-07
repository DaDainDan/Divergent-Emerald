MtChimney_MapScripts::
# 2 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MtChimney_MapScripts_MAP_SCRIPT_ON_RESUME
# 6 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtChimney_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MtChimney_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/MtChimney/scripts.pory"
	setstepcallback STEP_CB_ASH
	end

MtChimney_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/MtChimney/scripts.pory"
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 1
	end


MtChimney_EventScript_Archie::
# 13 "data/maps/MtChimney/scripts.pory"
	lock_faceplayer
# 14 "data/maps/MtChimney/scripts.pory"
	goto_if_unset FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_Archie_2
# 17 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieIHaveMyHandsFull, MSGBOX_DEFAULT
MtChimney_EventScript_Archie_1:
# 19 "data/maps/MtChimney/scripts.pory"
	closemessage
# 20 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, Common_Movement_FaceOriginalDirection
# 21 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 22 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_EVIL_LEADER_PLEASE_STOP
	release_end

MtChimney_EventScript_Archie_2:
# 15 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieGoStopTeamMagma, MSGBOX_DEFAULT
	goto MtChimney_EventScript_Archie_1


MtChimney_EventScript_Maxie::
# 27 "data/maps/MtChimney/scripts.pory"
	lockall
# 28 "data/maps/MtChimney/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 29 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoriteWillActivateVolcano, MSGBOX_DEFAULT
# 30 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_MAXIE, Common_Movement_FacePlayer
# 31 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 32 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 33 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_MAXIE, Common_Movement_ExclamationMark
# 34 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 35 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_MAXIE, Common_Movement_Delay48
# 36 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 37 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieIntro, MSGBOX_DEFAULT
# 38 "data/maps/MtChimney/scripts.pory"
	trainerbattle_no_intro TRAINER_MAXIE_MT_CHIMNEY, MtChimney_Text_MaxieDefeat
# 39 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieYouHaventSeenLastOfMagma, MSGBOX_DEFAULT
# 40 "data/maps/MtChimney/scripts.pory"
	closemessage
# 41 "data/maps/MtChimney/scripts.pory"
	delay 30
# 42 "data/maps/MtChimney/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 43 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_MAXIE
# 44 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_MAGMA_GRUNT_1
# 45 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_TABITHA
# 46 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_MAGMA_GRUNT_2
# 47 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 48 "data/maps/MtChimney/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 49 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_MT_CHIMNEY_ARCHIE, 10, 12
# 50 "data/maps/MtChimney/scripts.pory"
	addobject LOCALID_MT_CHIMNEY_ARCHIE
# 51 "data/maps/MtChimney/scripts.pory"
	switch VAR_FACING
# 52 "data/maps/MtChimney/scripts.pory"
	case DIR_EAST, MtChimney_EventScript_Maxie_3
# 53 "data/maps/MtChimney/scripts.pory"
	case DIR_NORTH, MtChimney_EventScript_Maxie_4
MtChimney_EventScript_Maxie_1:
# 55 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 56 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterLeft
# 57 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 58 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieThankYou, MSGBOX_DEFAULT
# 59 "data/maps/MtChimney/scripts.pory"
	closemessage
# 60 "data/maps/MtChimney/scripts.pory"
	switch VAR_FACING
# 61 "data/maps/MtChimney/scripts.pory"
	case DIR_EAST, MtChimney_EventScript_Maxie_7
# 62 "data/maps/MtChimney/scripts.pory"
	case DIR_NORTH, MtChimney_EventScript_Maxie_8
MtChimney_EventScript_Maxie_5:
# 64 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 65 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MT_CHIMNEY_ARCHIE
# 66 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
# 67 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY
# 68 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_FALLARBOR_HOUSE_PROF_COZMO
# 69 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO
# 70 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY
# 71 "data/maps/MtChimney/scripts.pory"
	releaseall
	end

MtChimney_EventScript_Maxie_3:
# 52 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, MtChimney_EventScript_Maxie_Movement_0
	goto MtChimney_EventScript_Maxie_1

MtChimney_EventScript_Maxie_4:
# 53 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, MtChimney_EventScript_Maxie_Movement_1
	goto MtChimney_EventScript_Maxie_1

MtChimney_EventScript_Maxie_7:
# 61 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, MtChimney_EventScript_Maxie_Movement_2
	goto MtChimney_EventScript_Maxie_5

MtChimney_EventScript_Maxie_8:
# 62 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, MtChimney_EventScript_Maxie_Movement_3
	goto MtChimney_EventScript_Maxie_5


# 75 "data/maps/MtChimney/scripts.pory"

# 76 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LavaCookieLady::
# 77 "data/maps/MtChimney/scripts.pory"
	lock
# 78 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 79 "data/maps/MtChimney/scripts.pory"
	showmoneybox 0, 0
# 80 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LavaCookiesJust200, MSGBOX_YESNO
# 81 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_DeclineLavaCookie
# 82 "data/maps/MtChimney/scripts.pory"
	checkmoney 200
# 83 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_NotEnoughMoney
# 84 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ThankYouDear, MSGBOX_DEFAULT
# 85 "data/maps/MtChimney/scripts.pory"
	checkitemspace ITEM_LAVA_COOKIE
# 86 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RemoveMoney
# 87 "data/maps/MtChimney/scripts.pory"
.if OW_SHOW_ITEM_DESCRIPTIONS == OW_ITEM_DESCRIPTIONS_OFF
# 88 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 89 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_BagIsFull
# 90 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 91 "data/maps/MtChimney/scripts.pory"
	release
# 92 "data/maps/MtChimney/scripts.pory"
	end
# 93 "data/maps/MtChimney/scripts.pory"

# 94 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BagIsFull::
# 95 "data/maps/MtChimney/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 96 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 97 "data/maps/MtChimney/scripts.pory"
	release
# 98 "data/maps/MtChimney/scripts.pory"
	end
# 99 "data/maps/MtChimney/scripts.pory"
.else
# 100 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 101 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 102 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_BagIsFull
# 103 "data/maps/MtChimney/scripts.pory"
	release
# 104 "data/maps/MtChimney/scripts.pory"
	end
# 105 "data/maps/MtChimney/scripts.pory"

# 106 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BagIsFull::
# 107 "data/maps/MtChimney/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 108 "data/maps/MtChimney/scripts.pory"
	release
# 109 "data/maps/MtChimney/scripts.pory"
	end
# 110 "data/maps/MtChimney/scripts.pory"
.endif @ OW_SHOW_ITEM_DESCRIPTIONS

MtChimney_EventScript_RemoveMoney::
# 114 "data/maps/MtChimney/scripts.pory"
	removemoney 200
# 115 "data/maps/MtChimney/scripts.pory"
	updatemoneybox
	return


MtChimney_EventScript_DeclineLavaCookie::
# 120 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_OhFineThen, MSGBOX_DEFAULT
# 121 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
	release_end


MtChimney_EventScript_NotEnoughMoney::
# 126 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouveNotGotTheMoney, MSGBOX_DEFAULT
# 127 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
	release_end


# 131 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused1:
# 133 "data/maps/MtChimney/scripts.pory"
	walk_down
# 133 "data/maps/MtChimney/scripts.pory"
	walk_down
# 133 "data/maps/MtChimney/scripts.pory"
	walk_down
# 133 "data/maps/MtChimney/scripts.pory"
	walk_down
# 133 "data/maps/MtChimney/scripts.pory"
	walk_down
# 134 "data/maps/MtChimney/scripts.pory"
	walk_left
# 134 "data/maps/MtChimney/scripts.pory"
	walk_left
# 135 "data/maps/MtChimney/scripts.pory"
	walk_down
# 135 "data/maps/MtChimney/scripts.pory"
	walk_down
# 135 "data/maps/MtChimney/scripts.pory"
	walk_down
# 135 "data/maps/MtChimney/scripts.pory"
	walk_down
# 136 "data/maps/MtChimney/scripts.pory"
	walk_left
# 136 "data/maps/MtChimney/scripts.pory"
	walk_left
# 136 "data/maps/MtChimney/scripts.pory"
	walk_left
# 136 "data/maps/MtChimney/scripts.pory"
	walk_left
# 136 "data/maps/MtChimney/scripts.pory"
	walk_left
# 137 "data/maps/MtChimney/scripts.pory"
	walk_down
	step_end

# 140 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused2:
# 142 "data/maps/MtChimney/scripts.pory"
	walk_down
# 142 "data/maps/MtChimney/scripts.pory"
	walk_down
# 142 "data/maps/MtChimney/scripts.pory"
	walk_down
# 142 "data/maps/MtChimney/scripts.pory"
	walk_down
# 143 "data/maps/MtChimney/scripts.pory"
	walk_left
# 143 "data/maps/MtChimney/scripts.pory"
	walk_left
# 143 "data/maps/MtChimney/scripts.pory"
	walk_left
# 144 "data/maps/MtChimney/scripts.pory"
	walk_down
	step_end

# 147 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused3:
# 149 "data/maps/MtChimney/scripts.pory"
	walk_right
# 150 "data/maps/MtChimney/scripts.pory"
	walk_down
# 150 "data/maps/MtChimney/scripts.pory"
	walk_down
# 150 "data/maps/MtChimney/scripts.pory"
	walk_down
# 150 "data/maps/MtChimney/scripts.pory"
	walk_down
# 151 "data/maps/MtChimney/scripts.pory"
	walk_left
# 151 "data/maps/MtChimney/scripts.pory"
	walk_left
# 151 "data/maps/MtChimney/scripts.pory"
	walk_left
# 151 "data/maps/MtChimney/scripts.pory"
	walk_left
# 151 "data/maps/MtChimney/scripts.pory"
	walk_left
# 152 "data/maps/MtChimney/scripts.pory"
	walk_down
# 152 "data/maps/MtChimney/scripts.pory"
	walk_down
# 152 "data/maps/MtChimney/scripts.pory"
	walk_down
# 152 "data/maps/MtChimney/scripts.pory"
	walk_down
	step_end

# 155 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused4:
# 157 "data/maps/MtChimney/scripts.pory"
	run_down
# 157 "data/maps/MtChimney/scripts.pory"
	run_down
# 157 "data/maps/MtChimney/scripts.pory"
	run_down
# 157 "data/maps/MtChimney/scripts.pory"
	run_down
# 157 "data/maps/MtChimney/scripts.pory"
	run_down
# 157 "data/maps/MtChimney/scripts.pory"
	run_down
# 157 "data/maps/MtChimney/scripts.pory"
	run_down
# 157 "data/maps/MtChimney/scripts.pory"
	run_down
# 157 "data/maps/MtChimney/scripts.pory"
	run_down
# 158 "data/maps/MtChimney/scripts.pory"
	walk_left
# 158 "data/maps/MtChimney/scripts.pory"
	walk_left
# 159 "data/maps/MtChimney/scripts.pory"
	walk_down
# 159 "data/maps/MtChimney/scripts.pory"
	walk_down
# 159 "data/maps/MtChimney/scripts.pory"
	walk_down
# 160 "data/maps/MtChimney/scripts.pory"
	walk_left
# 160 "data/maps/MtChimney/scripts.pory"
	walk_left
# 161 "data/maps/MtChimney/scripts.pory"
	walk_down
# 161 "data/maps/MtChimney/scripts.pory"
	walk_down
# 162 "data/maps/MtChimney/scripts.pory"
	walk_left
# 162 "data/maps/MtChimney/scripts.pory"
	walk_left
# 162 "data/maps/MtChimney/scripts.pory"
	walk_left
# 162 "data/maps/MtChimney/scripts.pory"
	walk_left
# 162 "data/maps/MtChimney/scripts.pory"
	walk_left
# 163 "data/maps/MtChimney/scripts.pory"
	walk_down
	step_end

# 166 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused5:
# 168 "data/maps/MtChimney/scripts.pory"
	delay_16
# 168 "data/maps/MtChimney/scripts.pory"
	delay_16
# 168 "data/maps/MtChimney/scripts.pory"
	delay_16
# 169 "data/maps/MtChimney/scripts.pory"
	walk_down
# 169 "data/maps/MtChimney/scripts.pory"
	walk_down
# 169 "data/maps/MtChimney/scripts.pory"
	walk_down
# 170 "data/maps/MtChimney/scripts.pory"
	walk_left
# 170 "data/maps/MtChimney/scripts.pory"
	walk_left
# 170 "data/maps/MtChimney/scripts.pory"
	walk_left
# 171 "data/maps/MtChimney/scripts.pory"
	walk_down
	step_end

# 174 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused6:
# 176 "data/maps/MtChimney/scripts.pory"
	delay_16
# 177 "data/maps/MtChimney/scripts.pory"
	walk_left
# 178 "data/maps/MtChimney/scripts.pory"
	walk_down
# 178 "data/maps/MtChimney/scripts.pory"
	walk_down
# 178 "data/maps/MtChimney/scripts.pory"
	walk_down
# 178 "data/maps/MtChimney/scripts.pory"
	walk_down
# 179 "data/maps/MtChimney/scripts.pory"
	walk_left
# 179 "data/maps/MtChimney/scripts.pory"
	walk_left
# 179 "data/maps/MtChimney/scripts.pory"
	walk_left
# 179 "data/maps/MtChimney/scripts.pory"
	walk_left
# 179 "data/maps/MtChimney/scripts.pory"
	walk_left
# 180 "data/maps/MtChimney/scripts.pory"
	walk_down
# 180 "data/maps/MtChimney/scripts.pory"
	walk_down
# 180 "data/maps/MtChimney/scripts.pory"
	walk_down
# 180 "data/maps/MtChimney/scripts.pory"
	walk_down
	step_end

# 183 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused7:
# 185 "data/maps/MtChimney/scripts.pory"
	delay_16
# 186 "data/maps/MtChimney/scripts.pory"
	walk_left
# 186 "data/maps/MtChimney/scripts.pory"
	walk_left
# 187 "data/maps/MtChimney/scripts.pory"
	walk_down
# 187 "data/maps/MtChimney/scripts.pory"
	walk_down
# 187 "data/maps/MtChimney/scripts.pory"
	walk_down
# 188 "data/maps/MtChimney/scripts.pory"
	walk_left
# 188 "data/maps/MtChimney/scripts.pory"
	walk_left
# 189 "data/maps/MtChimney/scripts.pory"
	walk_down
# 189 "data/maps/MtChimney/scripts.pory"
	walk_down
# 190 "data/maps/MtChimney/scripts.pory"
	walk_left
# 190 "data/maps/MtChimney/scripts.pory"
	walk_left
# 190 "data/maps/MtChimney/scripts.pory"
	walk_left
# 190 "data/maps/MtChimney/scripts.pory"
	walk_left
# 190 "data/maps/MtChimney/scripts.pory"
	walk_left
# 191 "data/maps/MtChimney/scripts.pory"
	walk_down
	step_end

# 194 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused8:
# 196 "data/maps/MtChimney/scripts.pory"
	delay_16
# 197 "data/maps/MtChimney/scripts.pory"
	walk_down
# 198 "data/maps/MtChimney/scripts.pory"
	walk_left
# 198 "data/maps/MtChimney/scripts.pory"
	walk_left
# 198 "data/maps/MtChimney/scripts.pory"
	walk_left
# 198 "data/maps/MtChimney/scripts.pory"
	walk_left
# 199 "data/maps/MtChimney/scripts.pory"
	step_faster_down
	step_end

# 202 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused9:
# 204 "data/maps/MtChimney/scripts.pory"
	walk_down
# 204 "data/maps/MtChimney/scripts.pory"
	walk_down
# 204 "data/maps/MtChimney/scripts.pory"
	walk_down
# 204 "data/maps/MtChimney/scripts.pory"
	walk_down
# 205 "data/maps/MtChimney/scripts.pory"
	walk_left
# 205 "data/maps/MtChimney/scripts.pory"
	walk_left
# 205 "data/maps/MtChimney/scripts.pory"
	walk_left
# 205 "data/maps/MtChimney/scripts.pory"
	walk_left
# 205 "data/maps/MtChimney/scripts.pory"
	walk_left
# 206 "data/maps/MtChimney/scripts.pory"
	walk_down
# 206 "data/maps/MtChimney/scripts.pory"
	walk_down
# 206 "data/maps/MtChimney/scripts.pory"
	walk_down
# 206 "data/maps/MtChimney/scripts.pory"
	walk_down
	step_end

# 209 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused10:
# 211 "data/maps/MtChimney/scripts.pory"
	walk_down
	step_end

# 214 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused11:
# 216 "data/maps/MtChimney/scripts.pory"
	walk_down
# 216 "data/maps/MtChimney/scripts.pory"
	walk_down
# 216 "data/maps/MtChimney/scripts.pory"
	walk_down
# 216 "data/maps/MtChimney/scripts.pory"
	walk_down
# 216 "data/maps/MtChimney/scripts.pory"
	walk_down
# 216 "data/maps/MtChimney/scripts.pory"
	walk_down
# 216 "data/maps/MtChimney/scripts.pory"
	walk_down
	step_end

# 219 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused12:
# 221 "data/maps/MtChimney/scripts.pory"
	delay_16
# 221 "data/maps/MtChimney/scripts.pory"
	delay_16
# 222 "data/maps/MtChimney/scripts.pory"
	step_faster_left
# 223 "data/maps/MtChimney/scripts.pory"
	delay_16
# 224 "data/maps/MtChimney/scripts.pory"
	walk_down
# 224 "data/maps/MtChimney/scripts.pory"
	walk_down
# 224 "data/maps/MtChimney/scripts.pory"
	walk_down
# 224 "data/maps/MtChimney/scripts.pory"
	walk_down
# 224 "data/maps/MtChimney/scripts.pory"
	walk_down
	step_end

# 227 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused13:
# 229 "data/maps/MtChimney/scripts.pory"
	delay_16
# 229 "data/maps/MtChimney/scripts.pory"
	delay_16
# 229 "data/maps/MtChimney/scripts.pory"
	delay_16
# 229 "data/maps/MtChimney/scripts.pory"
	delay_16
# 229 "data/maps/MtChimney/scripts.pory"
	delay_16
# 229 "data/maps/MtChimney/scripts.pory"
	delay_16
# 230 "data/maps/MtChimney/scripts.pory"
	step_faster_left
# 231 "data/maps/MtChimney/scripts.pory"
	delay_16
# 232 "data/maps/MtChimney/scripts.pory"
	walk_down
# 232 "data/maps/MtChimney/scripts.pory"
	walk_down
	step_end

# 235 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused14:
# 237 "data/maps/MtChimney/scripts.pory"
	lock_look
# 238 "data/maps/MtChimney/scripts.pory"
	run_left
# 239 "data/maps/MtChimney/scripts.pory"
	unlock_look
# 240 "data/maps/MtChimney/scripts.pory"
	face_right
	step_end

# 243 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused15:
# 245 "data/maps/MtChimney/scripts.pory"
	walk_left
# 246 "data/maps/MtChimney/scripts.pory"
	step_faster_right
# 247 "data/maps/MtChimney/scripts.pory"
	delay_16
	step_end

MtChimney_EventScript_BusyAquaGrunt1::
# 251 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmaOutnumbersUs, MSGBOX_SIGN
	end


MtChimney_EventScript_BusyAquaGrunt2::
# 256 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LessHabitatForWaterPokemon, MSGBOX_SIGN
	end


MtChimney_EventScript_BusyAquaGrunt3::
# 261 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmasNameSimilar, MSGBOX_SIGN
	end


MtChimney_EventScript_Tabitha::
# 266 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_TABITHA_MT_CHIMNEY, MtChimney_Text_TabithaIntro, MtChimney_Text_TabithaDefeat
# 267 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
	end


MtChimney_EventScript_Grunt2::
# 272 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_2, MtChimney_Text_Grunt2Intro, MtChimney_Text_Grunt2Defeat
# 273 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end


MtChimney_EventScript_BusyMagmaGrunt1::
# 278 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TeamAquaAlwaysMessingWithPlans, MSGBOX_SIGN
	end


MtChimney_EventScript_BusyMagmaGrunt2::
# 283 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoritesPackAmazingPower, MSGBOX_SIGN
	end


MtChimney_EventScript_BusyMagmaGrunt3::
# 288 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouBetterNotMessWithUs, MSGBOX_SIGN
	end


MtChimney_EventScript_BusyMagmaGrunt4::
# 293 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_AquasNameSimilar, MSGBOX_SIGN
	end


MtChimney_EventScript_BusyMagmaGrunt5::
# 298 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_DouseThemInFire, MSGBOX_SIGN
	end


MtChimney_EventScript_BusyMagmaGrunt6::
# 303 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_KeepMakingMoreLand, MSGBOX_SIGN
	end


MtChimney_EventScript_MagmaPoochyena::
# 308 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bufoh, MSGBOX_SIGN
	end


MtChimney_EventScript_AquaPoochyena::
# 313 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bushaa, MSGBOX_SIGN
	end


MtChimney_EventScript_MeteoriteMachine::
# 318 "data/maps/MtChimney/scripts.pory"
	lockall
# 319 "data/maps/MtChimney/scripts.pory"
	goto_if_unset FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, MtChimney_EventScript_MeteoriteMachine_2
# 322 "data/maps/MtChimney/scripts.pory"
	goto_if_set FLAG_RECEIVED_METEORITE, MtChimney_EventScript_MeteoriteMachine_3
# 326 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RemoveTheMeteorite, MSGBOX_YESNO
# 327 "data/maps/MtChimney/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MtChimney_EventScript_MeteoriteMachine_7
# 330 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerRemovedMeteorite, MSGBOX_DEFAULT
	giveitem ITEM_METEORITE
# 0 "data/maps/MtChimney/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MtChimney_EventScript_MeteoriteMachine_11
MtChimney_EventScript_MeteoriteMachine_10:
# 334 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_RECEIVED_METEORITE
MtChimney_EventScript_MeteoriteMachine_1:
# 337 "data/maps/MtChimney/scripts.pory"
	releaseall
	end

MtChimney_EventScript_MeteoriteMachine_2:
# 320 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MetoriteFittedOnMachine, MSGBOX_DEFAULT
	goto MtChimney_EventScript_MeteoriteMachine_1

MtChimney_EventScript_MeteoriteMachine_3:
# 323 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MachineMakesNoResponse, MSGBOX_DEFAULT
	goto MtChimney_EventScript_MeteoriteMachine_1

MtChimney_EventScript_MeteoriteMachine_7:
# 328 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerLeftMeteorite, MSGBOX_DEFAULT
	goto MtChimney_EventScript_MeteoriteMachine_1

MtChimney_EventScript_MeteoriteMachine_11:
# 332 "data/maps/MtChimney/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto MtChimney_EventScript_MeteoriteMachine_10


MtChimney_EventScript_RouteSign::
# 342 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RouteSign, MSGBOX_SIGN
	end


MtChimney_EventScript_Shelby::
# 347 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHELBY_1, MtChimney_Text_ShelbyIntro, MtChimney_Text_ShelbyDefeat, MtChimney_EventScript_DefeatedShelby
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/MtChimney/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MtChimney_EventScript_Shelby_2
# 353 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostBattle, MSGBOX_DEFAULT
	release_end

MtChimney_EventScript_Shelby_2:
# 349 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SHELBY_1, MtChimney_Text_ShelbyRematchIntro, MtChimney_Text_ShelbyRematchDefeat
# 350 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostRematch, MSGBOX_AUTOCLOSE
	end


MtChimney_EventScript_DefeatedShelby::
# 358 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 359 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 360 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyRegister, MSGBOX_DEFAULT
# 361 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SHELBY_1
	release_end


MtChimney_EventScript_Melissa::
# 366 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_MELISSA, MtChimney_Text_MelissaIntro, MtChimney_Text_MelissaDefeat
# 367 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MelissaPostBattle, MSGBOX_AUTOCLOSE
	end


MtChimney_EventScript_Sheila::
# 372 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHEILA, MtChimney_Text_SheilaIntro, MtChimney_Text_SheilaDefeat
# 373 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SheilaPostBattle, MSGBOX_AUTOCLOSE
	end


MtChimney_EventScript_Shirley::
# 378 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHIRLEY, MtChimney_Text_ShirleyIntro, MtChimney_Text_ShirleyDefeat
# 379 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShirleyPostBattle, MSGBOX_AUTOCLOSE
	end


MtChimney_EventScript_Grunt1::
# 384 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_1, MtChimney_Text_Grunt1Intro, MtChimney_Text_Grunt1Defeat
# 385 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end


MtChimney_EventScript_Sawyer::
# 390 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SAWYER_1, MtChimney_Text_SawyerIntro, MtChimney_Text_SawyerDefeat, MtChimney_EventScript_SawyerDefeated
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/MtChimney/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MtChimney_EventScript_Sawyer_2
# 396 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostBattle, MSGBOX_DEFAULT
	release_end

MtChimney_EventScript_Sawyer_2:
# 392 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SAWYER_1, MtChimney_Text_SawyerRematchIntro, MtChimney_Text_SawyerRematchDefeat
# 393 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostRematch, MSGBOX_AUTOCLOSE
	end


MtChimney_EventScript_SawyerDefeated::
# 401 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 402 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 403 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerRegister, MSGBOX_DEFAULT
# 404 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SAWYER_1
	release_end


# 52 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Maxie_Movement_0:
# 52 "data/maps/MtChimney/scripts.pory"
	walk_up
# 52 "data/maps/MtChimney/scripts.pory"
	walk_up
# 52 "data/maps/MtChimney/scripts.pory"
	walk_up
# 52 "data/maps/MtChimney/scripts.pory"
	walk_up
# 52 "data/maps/MtChimney/scripts.pory"
	walk_up
# 52 "data/maps/MtChimney/scripts.pory"
	walk_up
# 52 "data/maps/MtChimney/scripts.pory"
	walk_right
	step_end

# 53 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Maxie_Movement_1:
# 53 "data/maps/MtChimney/scripts.pory"
	walk_up
# 53 "data/maps/MtChimney/scripts.pory"
	walk_up
# 53 "data/maps/MtChimney/scripts.pory"
	walk_up
# 53 "data/maps/MtChimney/scripts.pory"
	walk_up
# 53 "data/maps/MtChimney/scripts.pory"
	walk_up
# 53 "data/maps/MtChimney/scripts.pory"
	walk_right
# 53 "data/maps/MtChimney/scripts.pory"
	walk_right
	step_end

# 61 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Maxie_Movement_2:
# 61 "data/maps/MtChimney/scripts.pory"
	walk_left
# 61 "data/maps/MtChimney/scripts.pory"
	walk_down
# 61 "data/maps/MtChimney/scripts.pory"
	walk_down
# 61 "data/maps/MtChimney/scripts.pory"
	walk_down
# 61 "data/maps/MtChimney/scripts.pory"
	walk_down
# 61 "data/maps/MtChimney/scripts.pory"
	walk_down
# 61 "data/maps/MtChimney/scripts.pory"
	walk_down
# 61 "data/maps/MtChimney/scripts.pory"
	walk_down
	step_end

# 62 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Maxie_Movement_3:
# 62 "data/maps/MtChimney/scripts.pory"
	walk_left
# 62 "data/maps/MtChimney/scripts.pory"
	walk_left
# 62 "data/maps/MtChimney/scripts.pory"
	walk_down
# 62 "data/maps/MtChimney/scripts.pory"
	walk_down
# 62 "data/maps/MtChimney/scripts.pory"
	walk_down
# 62 "data/maps/MtChimney/scripts.pory"
	walk_down
# 62 "data/maps/MtChimney/scripts.pory"
	walk_down
# 62 "data/maps/MtChimney/scripts.pory"
	walk_down
# 62 "data/maps/MtChimney/scripts.pory"
	walk_down
	step_end

MtChimney_Text_MeteoriteWillActivateVolcano::
# 408 "data/maps/MtChimney/scripts.pory"
	.string "The power contained in the METEORITE…\p"
	.string "By amplifying its power with this\n"
	.string "machine, MT. CHIMNEY's volcanic\l"
	.string "activity will instantly intensify…\p"
	.string "Its energy will grow deep inside\n"
	.string "the crater and…\l"
	.string "Fufufu…$"

MtChimney_Text_MaxieIntro::
# 420 "data/maps/MtChimney/scripts.pory"
	.string "MAXIE: Hm?\n"
	.string "Who are you?\p"
	.string "… … … … … …\n"
	.string "… … … … … …\p"
	.string "I'd heard ARCHIE bemoaning a child\n"
	.string "who's been meddling in TEAM AQUA's\l"
	.string "affairs.\p"
	.string "It must be you he meant.\p"
	.string "Humph! So you're thinking of\n"
	.string "interfering with us, TEAM MAGMA?\p"
	.string "Now you listen.\n"
	.string "Long ago, living things used the\l"
	.string "land to live and grow.\p"
	.string "That is why land is all important!\n"
	.string "It is the cradle of all!\p"
	.string "That is why TEAM MAGMA is dedicated\n"
	.string "to the expansion of the land mass.\p"
	.string "It is for further advancement of\n"
	.string "humankind and POKéMON!\p"
	.string "And for that, we need the power of\n"
	.string "what sleeps within this mountain…\p"
	.string "Oh! There was no need for you to\n"
	.string "learn that much.\p"
	.string "But, no matter!\n"
	.string "I'll teach you the consequences of\l"
	.string "meddling in our grand design!$"

MtChimney_Text_MaxieDefeat::
# 460 "data/maps/MtChimney/scripts.pory"
	.string "What?!\p"
	.string "I, MAXIE, was caught off guard?!$"

MtChimney_Text_MaxieYouHaventSeenLastOfMagma::
# 466 "data/maps/MtChimney/scripts.pory"
	.string "MAXIE: But, enough.\n"
	.string "I will back off this time.\p"
	.string "But don't think that this is the last\n"
	.string "you've seen of TEAM MAGMA.\p"
	.string "Fufufu…\p"
	.string "Even without the METEORITE, if we\n"
	.string "obtain that ORB… Fufufu…$"

MtChimney_Text_TabithaIntro::
# 479 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe!\p"
	.string "So you've come all the way here!\p"
	.string "But you're too late!\n"
	.string "I've already delivered the METEORITE\l"
	.string "from METEOR FALLS to the BOSS!$"

MtChimney_Text_TabithaDefeat::
# 489 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…\p"
	.string "Even though I've lost, if our leader\n"
	.string "awakens that thing…$"

MtChimney_Text_TabithaPostBattle::
# 496 "data/maps/MtChimney/scripts.pory"
	.string "BOSS, hurry!\n"
	.string "Give it the METEORITE's energy!\p"
	.string "Hehehe…$"

MtChimney_Text_Grunt2Intro::
# 503 "data/maps/MtChimney/scripts.pory"
	.string "We of TEAM MAGMA are working hard for\n"
	.string "everyone's sake.\p"
	.string "Like, if that thing's power made more\n"
	.string "land, there'd be more places to live.\p"
	.string "Everyone'd be happy!$"

MtChimney_Text_Grunt2Defeat::
# 513 "data/maps/MtChimney/scripts.pory"
	.string "Hunh?\n"
	.string "What do you mean I lost?$"

MtChimney_Text_Grunt2PostBattle::
# 518 "data/maps/MtChimney/scripts.pory"
	.string "Our BOSS says, “It will make everyone\n"
	.string "happy.”\p"
	.string "But why does everyone keep getting\n"
	.string "in our way?$"

MtChimney_Text_Grunt1Intro::
# 526 "data/maps/MtChimney/scripts.pory"
	.string "If there were more land, I'd be able\n"
	.string "to get a big house of my own!\p"
	.string "I'm going to build it on hardened lava!$"

MtChimney_Text_Grunt1Defeat::
# 533 "data/maps/MtChimney/scripts.pory"
	.string "My dream of a big house…$"

MtChimney_Text_Grunt1PostBattle::
# 537 "data/maps/MtChimney/scripts.pory"
	.string "A kid like you, you ought to be\n"
	.string "splashing about in the waves!$"

MtChimney_Text_TeamAquaAlwaysMessingWithPlans::
# 542 "data/maps/MtChimney/scripts.pory"
	.string "That annoying TEAM AQUA…\n"
	.string "They always mess with our plans!$"

MtChimney_Text_MeteoritesPackAmazingPower::
# 547 "data/maps/MtChimney/scripts.pory"
	.string "METEORITES pack amazing power!$"

MtChimney_Text_YouBetterNotMessWithUs::
# 551 "data/maps/MtChimney/scripts.pory"
	.string "You'd better not mess with us!\p"
	.string "We're trying to awaken that thing\n"
	.string "for the benefit of everyone!$"

MtChimney_Text_AquasNameSimilar::
# 558 "data/maps/MtChimney/scripts.pory"
	.string "We're TEAM MAGMA!\p"
	.string "They're TEAM AQUA!\p"
	.string "It totally annoys me that they'd\n"
	.string "use a name like ours!$"

MtChimney_Text_DouseThemInFire::
# 567 "data/maps/MtChimney/scripts.pory"
	.string "Yeah!\n"
	.string "Douse them in fire!$"

MtChimney_Text_KeepMakingMoreLand::
# 572 "data/maps/MtChimney/scripts.pory"
	.string "We're going to keep making more land!$"

MtChimney_Text_Bufoh::
# 576 "data/maps/MtChimney/scripts.pory"
	.string "Bufoh!$"

MtChimney_Text_ArchieGoStopTeamMagma::
# 580 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: Grr, {PLAYER}!\n"
	.string "I should've guessed you'd show up!\p"
	.string "See for yourself what the fanatics\n"
	.string "of TEAM MAGMA are up to!\p"
	.string "They're trying to inject the stolen\n"
	.string "METEORITE's power into the volcano!\p"
	.string "Doing something like that will cause\n"
	.string "the volcano's eruption!$"

MtChimney_Text_ArchieIHaveMyHandsFull::
# 594 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: Grrr…\p"
	.string "I want to stop that MAXIE,\n"
	.string "but I can't!\p"
	.string "Not when I have my hands full battling\n"
	.string "three opponents at once!$"

MtChimney_Text_ArchieThankYou::
# 604 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: {PLAYER}!\n"
	.string "Thank you!\p"
	.string "With your help, we thwarted TEAM\n"
	.string "MAGMA's destructive plan!\p"
	.string "But… You…\n"
	.string "Whose side are you on?\p"
	.string "Ah, it doesn't matter.\p"
	.string "We will remain vigilant and keep up\n"
	.string "our pursuit of TEAM MAGMA.\p"
	.string "{PLAYER}, we shall meet again!$"

MtChimney_Text_MagmaOutnumbersUs::
# 622 "data/maps/MtChimney/scripts.pory"
	.string "Darn… TEAM MAGMA outnumbers us!\n"
	.string "We can't keep up with them!$"

MtChimney_Text_LessHabitatForWaterPokemon::
# 627 "data/maps/MtChimney/scripts.pory"
	.string "If they expand the land, there'll be\n"
	.string "less habitats for WATER POKéMON!$"

MtChimney_Text_MagmasNameSimilar::
# 632 "data/maps/MtChimney/scripts.pory"
	.string "We're TEAM AQUA!\p"
	.string "They're TEAM MAGMA!\p"
	.string "It burns me up that they'd use such\n"
	.string "a confusing name!$"

MtChimney_Text_Bushaa::
# 641 "data/maps/MtChimney/scripts.pory"
	.string "Bushaa!$"

MtChimney_Text_LavaCookiesJust200::
# 645 "data/maps/MtChimney/scripts.pory"
	.string "LAVA COOKIES are MT. CHIMNEY's local\n"
	.string "specialty.\p"
	.string "Try one. It's just ¥200.$"

MtChimney_Text_ThankYouDear::
# 652 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, dear!$"

MtChimney_Text_YouveNotGotTheMoney::
# 656 "data/maps/MtChimney/scripts.pory"
	.string "Oh, dear. You can't buy a thing if\n"
	.string "you've not got the money.$"

MtChimney_Text_OhFineThen::
# 661 "data/maps/MtChimney/scripts.pory"
	.string "Oh, fine then.$"

MtChimney_Text_MetoriteFittedOnMachine::
# 665 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
	.string "machine…\p"
	.string "The machine seems to be storing\n"
	.string "energy in the METEORITE.$"

MtChimney_Text_RemoveTheMeteorite::
# 673 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
	.string "machine…\p"
	.string "Do you want to remove the METEORITE?$"

MtChimney_Text_PlayerRemovedMeteorite::
# 680 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} removed the METEORITE from\n"
	.string "the mysterious machine.$"

MtChimney_Text_PlayerLeftMeteorite::
# 685 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} left the METEORITE where\n"
	.string "it was.$"

MtChimney_Text_MachineMakesNoResponse::
# 690 "data/maps/MtChimney/scripts.pory"
	.string "This mysterious machine…\n"
	.string "It makes no response whatsoever.$"

MtChimney_Text_RouteSign::
# 695 "data/maps/MtChimney/scripts.pory"
	.string "{DOWN_ARROW} JAGGED PATH\n"
	.string "LAVARIDGE TOWN AHEAD$"

MtChimney_Text_ShelbyIntro::
# 700 "data/maps/MtChimney/scripts.pory"
	.string "I've been to the hot springs and\n"
	.string "refreshed my tired bones.\l"
	.string "Right now I'm feeling strong!$"

MtChimney_Text_ShelbyDefeat::
# 706 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
	.string "Now, aren't you something!$"

MtChimney_Text_ShelbyPostBattle::
# 711 "data/maps/MtChimney/scripts.pory"
	.string "Well, well, I've lost. I can't call\n"
	.string "myself an EXPERT now, can I?$"

MtChimney_Text_ShelbyRegister::
# 716 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, child. It was fun, as if\n"
	.string "I were battling my own grandchild.\p"
	.string "Please, come see me again for\n"
	.string "a rematch.$"

MtChimney_Text_ShelbyRematchIntro::
# 724 "data/maps/MtChimney/scripts.pory"
	.string "If you can mesh your heart with those\n"
	.string "of your POKéMON, why, you should be\l"
	.string "able to achieve great things.$"

MtChimney_Text_ShelbyRematchDefeat::
# 730 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
	.string "Now, aren't you something!$"

MtChimney_Text_ShelbyPostRematch::
# 735 "data/maps/MtChimney/scripts.pory"
	.string "Perhaps your heart has become one\n"
	.string "with the hearts of your POKéMON.$"

MtChimney_Text_MelissaIntro::
# 740 "data/maps/MtChimney/scripts.pory"
	.string "I've got the fire in me, baby.\n"
	.string "I can't stand it! I have to battle!$"

MtChimney_Text_MelissaDefeat::
# 745 "data/maps/MtChimney/scripts.pory"
	.string "Ooh, that was a scorching-hot match!$"

MtChimney_Text_MelissaPostBattle::
# 749 "data/maps/MtChimney/scripts.pory"
	.string "The heat of MT. CHIMNEY warms\n"
	.string "me up, baby!$"

MtChimney_Text_SheilaIntro::
# 754 "data/maps/MtChimney/scripts.pory"
	.string "I've finally made it to MT. CHIMNEY.\n"
	.string "I want to make my POKéMON battle!$"

MtChimney_Text_SheilaDefeat::
# 759 "data/maps/MtChimney/scripts.pory"
	.string "The way you battle…\n"
	.string "It's like a MT. CHIMNEY eruption!$"

MtChimney_Text_SheilaPostBattle::
# 764 "data/maps/MtChimney/scripts.pory"
	.string "Like I said, I've finally made it to\n"
	.string "MT. CHIMNEY. It would be a shame if\l"
	.string "I only do a little sightseeing…\p"
	.string "I want to get in some battles and buy\n"
	.string "COOKIES as souvenirs.$"

MtChimney_Text_ShirleyIntro::
# 773 "data/maps/MtChimney/scripts.pory"
	.string "Since I bathed in the hot springs,\n"
	.string "I've been feeling great!\l"
	.string "I'm sure I'm going to win!$"

MtChimney_Text_ShirleyDefeat::
# 779 "data/maps/MtChimney/scripts.pory"
	.string "Yowch!\n"
	.string "I'm getting a chill out of the water.$"

MtChimney_Text_ShirleyPostBattle::
# 784 "data/maps/MtChimney/scripts.pory"
	.string "I'll have to take another dip in the\n"
	.string "hot springs. Want to join me?\p"
	.string "Just joking!$"

MtChimney_Text_SawyerIntro::
# 791 "data/maps/MtChimney/scripts.pory"
	.string "This is one fine mountain! Plenty of\n"
	.string "hot people around for company!$"

MtChimney_Text_SawyerDefeat::
# 796 "data/maps/MtChimney/scripts.pory"
	.string "Oh, you're a real firebrand, too!$"

MtChimney_Text_SawyerPostBattle::
# 800 "data/maps/MtChimney/scripts.pory"
	.string "I think I need a dip in LAVARIDGE\n"
	.string "HOT SPRING with the locals!$"

MtChimney_Text_SawyerRegister::
# 805 "data/maps/MtChimney/scripts.pory"
	.string "I like little fireballs like you.\n"
	.string "Let me register you in my POKéNAV.$"

MtChimney_Text_SawyerRematchIntro::
# 810 "data/maps/MtChimney/scripts.pory"
	.string "I'm happily surrounded by hot people\n"
	.string "around these parts. I won't lose!$"

MtChimney_Text_SawyerRematchDefeat::
# 815 "data/maps/MtChimney/scripts.pory"
	.string "Gosh, you're still the same\n"
	.string "firebrand as before!$"

MtChimney_Text_SawyerPostRematch::
# 820 "data/maps/MtChimney/scripts.pory"
	.string "Actually, it really is hot here.\n"
	.string "I'm overdressed for these parts.$"
