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


MtChimney_EventScript_LavaCookieLady::
# 76 "data/maps/MtChimney/scripts.pory"
	lock
# 77 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 78 "data/maps/MtChimney/scripts.pory"
	showmoneybox 0, 0
# 79 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LavaCookiesJust200, MSGBOX_YESNO
# 80 "data/maps/MtChimney/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MtChimney_EventScript_LavaCookieLady_2
	checkmoney 200
# 0 "data/maps/MtChimney/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MtChimney_EventScript_LavaCookieLady_5
# 90 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ThankYouDear, MSGBOX_DEFAULT
	checkitemspace ITEM_LAVA_COOKIE
# 0 "data/maps/MtChimney/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MtChimney_EventScript_LavaCookieLady_8
MtChimney_EventScript_LavaCookieLady_7:
# 95 "data/maps/MtChimney/scripts.pory"
	goto MtChimney_EventScript_LavaCookieLady_GiveItem
	end

MtChimney_EventScript_LavaCookieLady_2:
# 81 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_OhFineThen, MSGBOX_DEFAULT
# 82 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
	release_end

MtChimney_EventScript_LavaCookieLady_5:
# 86 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouveNotGotTheMoney, MSGBOX_DEFAULT
# 87 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
	release_end

MtChimney_EventScript_LavaCookieLady_8:
# 92 "data/maps/MtChimney/scripts.pory"
	removemoney 200
# 93 "data/maps/MtChimney/scripts.pory"
	updatemoneybox
	goto MtChimney_EventScript_LavaCookieLady_7


# 99 "data/maps/MtChimney/scripts.pory"

# 100 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LavaCookieLady_GiveItem::
# 101 "data/maps/MtChimney/scripts.pory"
.if OW_SHOW_ITEM_DESCRIPTIONS == OW_ITEM_DESCRIPTIONS_OFF
# 102 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 103 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_BagIsFull
# 104 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 105 "data/maps/MtChimney/scripts.pory"
	release
# 106 "data/maps/MtChimney/scripts.pory"
	end
# 107 "data/maps/MtChimney/scripts.pory"

# 108 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BagIsFull::
# 109 "data/maps/MtChimney/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 110 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 111 "data/maps/MtChimney/scripts.pory"
	release
# 112 "data/maps/MtChimney/scripts.pory"
	end
# 113 "data/maps/MtChimney/scripts.pory"
.else
# 114 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 115 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 116 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_BagIsFull
# 117 "data/maps/MtChimney/scripts.pory"
	release
# 118 "data/maps/MtChimney/scripts.pory"
	end
# 119 "data/maps/MtChimney/scripts.pory"

# 120 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BagIsFull::
# 121 "data/maps/MtChimney/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 122 "data/maps/MtChimney/scripts.pory"
	release
# 123 "data/maps/MtChimney/scripts.pory"
	end
# 124 "data/maps/MtChimney/scripts.pory"
.endif @ OW_SHOW_ITEM_DESCRIPTIONS

# 127 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused1:
# 129 "data/maps/MtChimney/scripts.pory"
	walk_down
# 129 "data/maps/MtChimney/scripts.pory"
	walk_down
# 129 "data/maps/MtChimney/scripts.pory"
	walk_down
# 129 "data/maps/MtChimney/scripts.pory"
	walk_down
# 129 "data/maps/MtChimney/scripts.pory"
	walk_down
# 130 "data/maps/MtChimney/scripts.pory"
	walk_left
# 130 "data/maps/MtChimney/scripts.pory"
	walk_left
# 131 "data/maps/MtChimney/scripts.pory"
	walk_down
# 131 "data/maps/MtChimney/scripts.pory"
	walk_down
# 131 "data/maps/MtChimney/scripts.pory"
	walk_down
# 131 "data/maps/MtChimney/scripts.pory"
	walk_down
# 132 "data/maps/MtChimney/scripts.pory"
	walk_left
# 132 "data/maps/MtChimney/scripts.pory"
	walk_left
# 132 "data/maps/MtChimney/scripts.pory"
	walk_left
# 132 "data/maps/MtChimney/scripts.pory"
	walk_left
# 132 "data/maps/MtChimney/scripts.pory"
	walk_left
# 133 "data/maps/MtChimney/scripts.pory"
	walk_down
	step_end

# 136 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused2:
# 138 "data/maps/MtChimney/scripts.pory"
	walk_down
# 138 "data/maps/MtChimney/scripts.pory"
	walk_down
# 138 "data/maps/MtChimney/scripts.pory"
	walk_down
# 138 "data/maps/MtChimney/scripts.pory"
	walk_down
# 139 "data/maps/MtChimney/scripts.pory"
	walk_left
# 139 "data/maps/MtChimney/scripts.pory"
	walk_left
# 139 "data/maps/MtChimney/scripts.pory"
	walk_left
# 140 "data/maps/MtChimney/scripts.pory"
	walk_down
	step_end

# 143 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused3:
# 145 "data/maps/MtChimney/scripts.pory"
	walk_right
# 146 "data/maps/MtChimney/scripts.pory"
	walk_down
# 146 "data/maps/MtChimney/scripts.pory"
	walk_down
# 146 "data/maps/MtChimney/scripts.pory"
	walk_down
# 146 "data/maps/MtChimney/scripts.pory"
	walk_down
# 147 "data/maps/MtChimney/scripts.pory"
	walk_left
# 147 "data/maps/MtChimney/scripts.pory"
	walk_left
# 147 "data/maps/MtChimney/scripts.pory"
	walk_left
# 147 "data/maps/MtChimney/scripts.pory"
	walk_left
# 147 "data/maps/MtChimney/scripts.pory"
	walk_left
# 148 "data/maps/MtChimney/scripts.pory"
	walk_down
# 148 "data/maps/MtChimney/scripts.pory"
	walk_down
# 148 "data/maps/MtChimney/scripts.pory"
	walk_down
# 148 "data/maps/MtChimney/scripts.pory"
	walk_down
	step_end

# 151 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused4:
# 153 "data/maps/MtChimney/scripts.pory"
	run_down
# 153 "data/maps/MtChimney/scripts.pory"
	run_down
# 153 "data/maps/MtChimney/scripts.pory"
	run_down
# 153 "data/maps/MtChimney/scripts.pory"
	run_down
# 153 "data/maps/MtChimney/scripts.pory"
	run_down
# 153 "data/maps/MtChimney/scripts.pory"
	run_down
# 153 "data/maps/MtChimney/scripts.pory"
	run_down
# 153 "data/maps/MtChimney/scripts.pory"
	run_down
# 153 "data/maps/MtChimney/scripts.pory"
	run_down
# 154 "data/maps/MtChimney/scripts.pory"
	walk_left
# 154 "data/maps/MtChimney/scripts.pory"
	walk_left
# 155 "data/maps/MtChimney/scripts.pory"
	walk_down
# 155 "data/maps/MtChimney/scripts.pory"
	walk_down
# 155 "data/maps/MtChimney/scripts.pory"
	walk_down
# 156 "data/maps/MtChimney/scripts.pory"
	walk_left
# 156 "data/maps/MtChimney/scripts.pory"
	walk_left
# 157 "data/maps/MtChimney/scripts.pory"
	walk_down
# 157 "data/maps/MtChimney/scripts.pory"
	walk_down
# 158 "data/maps/MtChimney/scripts.pory"
	walk_left
# 158 "data/maps/MtChimney/scripts.pory"
	walk_left
# 158 "data/maps/MtChimney/scripts.pory"
	walk_left
# 158 "data/maps/MtChimney/scripts.pory"
	walk_left
# 158 "data/maps/MtChimney/scripts.pory"
	walk_left
# 159 "data/maps/MtChimney/scripts.pory"
	walk_down
	step_end

# 162 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused5:
# 164 "data/maps/MtChimney/scripts.pory"
	delay_16
# 164 "data/maps/MtChimney/scripts.pory"
	delay_16
# 164 "data/maps/MtChimney/scripts.pory"
	delay_16
# 165 "data/maps/MtChimney/scripts.pory"
	walk_down
# 165 "data/maps/MtChimney/scripts.pory"
	walk_down
# 165 "data/maps/MtChimney/scripts.pory"
	walk_down
# 166 "data/maps/MtChimney/scripts.pory"
	walk_left
# 166 "data/maps/MtChimney/scripts.pory"
	walk_left
# 166 "data/maps/MtChimney/scripts.pory"
	walk_left
# 167 "data/maps/MtChimney/scripts.pory"
	walk_down
	step_end

# 170 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused6:
# 172 "data/maps/MtChimney/scripts.pory"
	delay_16
# 173 "data/maps/MtChimney/scripts.pory"
	walk_left
# 174 "data/maps/MtChimney/scripts.pory"
	walk_down
# 174 "data/maps/MtChimney/scripts.pory"
	walk_down
# 174 "data/maps/MtChimney/scripts.pory"
	walk_down
# 174 "data/maps/MtChimney/scripts.pory"
	walk_down
# 175 "data/maps/MtChimney/scripts.pory"
	walk_left
# 175 "data/maps/MtChimney/scripts.pory"
	walk_left
# 175 "data/maps/MtChimney/scripts.pory"
	walk_left
# 175 "data/maps/MtChimney/scripts.pory"
	walk_left
# 175 "data/maps/MtChimney/scripts.pory"
	walk_left
# 176 "data/maps/MtChimney/scripts.pory"
	walk_down
# 176 "data/maps/MtChimney/scripts.pory"
	walk_down
# 176 "data/maps/MtChimney/scripts.pory"
	walk_down
# 176 "data/maps/MtChimney/scripts.pory"
	walk_down
	step_end

# 179 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused7:
# 181 "data/maps/MtChimney/scripts.pory"
	delay_16
# 182 "data/maps/MtChimney/scripts.pory"
	walk_left
# 182 "data/maps/MtChimney/scripts.pory"
	walk_left
# 183 "data/maps/MtChimney/scripts.pory"
	walk_down
# 183 "data/maps/MtChimney/scripts.pory"
	walk_down
# 183 "data/maps/MtChimney/scripts.pory"
	walk_down
# 184 "data/maps/MtChimney/scripts.pory"
	walk_left
# 184 "data/maps/MtChimney/scripts.pory"
	walk_left
# 185 "data/maps/MtChimney/scripts.pory"
	walk_down
# 185 "data/maps/MtChimney/scripts.pory"
	walk_down
# 186 "data/maps/MtChimney/scripts.pory"
	walk_left
# 186 "data/maps/MtChimney/scripts.pory"
	walk_left
# 186 "data/maps/MtChimney/scripts.pory"
	walk_left
# 186 "data/maps/MtChimney/scripts.pory"
	walk_left
# 186 "data/maps/MtChimney/scripts.pory"
	walk_left
# 187 "data/maps/MtChimney/scripts.pory"
	walk_down
	step_end

# 190 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused8:
# 192 "data/maps/MtChimney/scripts.pory"
	delay_16
# 193 "data/maps/MtChimney/scripts.pory"
	walk_down
# 194 "data/maps/MtChimney/scripts.pory"
	walk_left
# 194 "data/maps/MtChimney/scripts.pory"
	walk_left
# 194 "data/maps/MtChimney/scripts.pory"
	walk_left
# 194 "data/maps/MtChimney/scripts.pory"
	walk_left
# 195 "data/maps/MtChimney/scripts.pory"
	step_faster_down
	step_end

# 198 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused9:
# 200 "data/maps/MtChimney/scripts.pory"
	walk_down
# 200 "data/maps/MtChimney/scripts.pory"
	walk_down
# 200 "data/maps/MtChimney/scripts.pory"
	walk_down
# 200 "data/maps/MtChimney/scripts.pory"
	walk_down
# 201 "data/maps/MtChimney/scripts.pory"
	walk_left
# 201 "data/maps/MtChimney/scripts.pory"
	walk_left
# 201 "data/maps/MtChimney/scripts.pory"
	walk_left
# 201 "data/maps/MtChimney/scripts.pory"
	walk_left
# 201 "data/maps/MtChimney/scripts.pory"
	walk_left
# 202 "data/maps/MtChimney/scripts.pory"
	walk_down
# 202 "data/maps/MtChimney/scripts.pory"
	walk_down
# 202 "data/maps/MtChimney/scripts.pory"
	walk_down
# 202 "data/maps/MtChimney/scripts.pory"
	walk_down
	step_end

# 205 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused10:
# 207 "data/maps/MtChimney/scripts.pory"
	walk_down
	step_end

# 210 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused11:
# 212 "data/maps/MtChimney/scripts.pory"
	walk_down
# 212 "data/maps/MtChimney/scripts.pory"
	walk_down
# 212 "data/maps/MtChimney/scripts.pory"
	walk_down
# 212 "data/maps/MtChimney/scripts.pory"
	walk_down
# 212 "data/maps/MtChimney/scripts.pory"
	walk_down
# 212 "data/maps/MtChimney/scripts.pory"
	walk_down
# 212 "data/maps/MtChimney/scripts.pory"
	walk_down
	step_end

# 215 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused12:
# 217 "data/maps/MtChimney/scripts.pory"
	delay_16
# 217 "data/maps/MtChimney/scripts.pory"
	delay_16
# 218 "data/maps/MtChimney/scripts.pory"
	step_faster_left
# 219 "data/maps/MtChimney/scripts.pory"
	delay_16
# 220 "data/maps/MtChimney/scripts.pory"
	walk_down
# 220 "data/maps/MtChimney/scripts.pory"
	walk_down
# 220 "data/maps/MtChimney/scripts.pory"
	walk_down
# 220 "data/maps/MtChimney/scripts.pory"
	walk_down
# 220 "data/maps/MtChimney/scripts.pory"
	walk_down
	step_end

# 223 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused13:
# 225 "data/maps/MtChimney/scripts.pory"
	delay_16
# 225 "data/maps/MtChimney/scripts.pory"
	delay_16
# 225 "data/maps/MtChimney/scripts.pory"
	delay_16
# 225 "data/maps/MtChimney/scripts.pory"
	delay_16
# 225 "data/maps/MtChimney/scripts.pory"
	delay_16
# 225 "data/maps/MtChimney/scripts.pory"
	delay_16
# 226 "data/maps/MtChimney/scripts.pory"
	step_faster_left
# 227 "data/maps/MtChimney/scripts.pory"
	delay_16
# 228 "data/maps/MtChimney/scripts.pory"
	walk_down
# 228 "data/maps/MtChimney/scripts.pory"
	walk_down
	step_end

# 231 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused14:
# 233 "data/maps/MtChimney/scripts.pory"
	lock_look
# 234 "data/maps/MtChimney/scripts.pory"
	run_left
# 235 "data/maps/MtChimney/scripts.pory"
	unlock_look
# 236 "data/maps/MtChimney/scripts.pory"
	face_right
	step_end

# 239 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused15:
# 241 "data/maps/MtChimney/scripts.pory"
	walk_left
# 242 "data/maps/MtChimney/scripts.pory"
	step_faster_right
# 243 "data/maps/MtChimney/scripts.pory"
	delay_16
	step_end

MtChimney_EventScript_BusyAquaGrunt1::
# 247 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmaOutnumbersUs, MSGBOX_SIGN
	end


MtChimney_EventScript_BusyAquaGrunt2::
# 252 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LessHabitatForWaterPokemon, MSGBOX_SIGN
	end


MtChimney_EventScript_BusyAquaGrunt3::
# 257 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmasNameSimilar, MSGBOX_SIGN
	end


MtChimney_EventScript_Tabitha::
# 262 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_TABITHA_MT_CHIMNEY, MtChimney_Text_TabithaIntro, MtChimney_Text_TabithaDefeat
# 263 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
	end


MtChimney_EventScript_Grunt2::
# 268 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_2, MtChimney_Text_Grunt2Intro, MtChimney_Text_Grunt2Defeat
# 269 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end


MtChimney_EventScript_BusyMagmaGrunt1::
# 274 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TeamAquaAlwaysMessingWithPlans, MSGBOX_SIGN
	end


MtChimney_EventScript_BusyMagmaGrunt2::
# 279 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoritesPackAmazingPower, MSGBOX_SIGN
	end


MtChimney_EventScript_BusyMagmaGrunt3::
# 284 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouBetterNotMessWithUs, MSGBOX_SIGN
	end


MtChimney_EventScript_BusyMagmaGrunt4::
# 289 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_AquasNameSimilar, MSGBOX_SIGN
	end


MtChimney_EventScript_BusyMagmaGrunt5::
# 294 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_DouseThemInFire, MSGBOX_SIGN
	end


MtChimney_EventScript_BusyMagmaGrunt6::
# 299 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_KeepMakingMoreLand, MSGBOX_SIGN
	end


MtChimney_EventScript_MagmaPoochyena::
# 304 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bufoh, MSGBOX_SIGN
	end


MtChimney_EventScript_AquaPoochyena::
# 309 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bushaa, MSGBOX_SIGN
	end


MtChimney_EventScript_MeteoriteMachine::
# 314 "data/maps/MtChimney/scripts.pory"
	lockall
# 315 "data/maps/MtChimney/scripts.pory"
	goto_if_unset FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, MtChimney_EventScript_MeteoriteMachine_2
# 318 "data/maps/MtChimney/scripts.pory"
	goto_if_set FLAG_RECEIVED_METEORITE, MtChimney_EventScript_MeteoriteMachine_3
# 322 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RemoveTheMeteorite, MSGBOX_YESNO
# 323 "data/maps/MtChimney/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MtChimney_EventScript_MeteoriteMachine_7
# 326 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerRemovedMeteorite, MSGBOX_DEFAULT
	giveitem ITEM_METEORITE
# 0 "data/maps/MtChimney/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MtChimney_EventScript_MeteoriteMachine_11
MtChimney_EventScript_MeteoriteMachine_10:
# 330 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_RECEIVED_METEORITE
MtChimney_EventScript_MeteoriteMachine_1:
# 333 "data/maps/MtChimney/scripts.pory"
	releaseall
	end

MtChimney_EventScript_MeteoriteMachine_2:
# 316 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoriteFittedOnMachine, MSGBOX_DEFAULT
	goto MtChimney_EventScript_MeteoriteMachine_1

MtChimney_EventScript_MeteoriteMachine_3:
# 319 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MachineMakesNoResponse, MSGBOX_DEFAULT
	goto MtChimney_EventScript_MeteoriteMachine_1

MtChimney_EventScript_MeteoriteMachine_7:
# 324 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerLeftMeteorite, MSGBOX_DEFAULT
	goto MtChimney_EventScript_MeteoriteMachine_1

MtChimney_EventScript_MeteoriteMachine_11:
# 328 "data/maps/MtChimney/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto MtChimney_EventScript_MeteoriteMachine_10


MtChimney_EventScript_RouteSign::
# 338 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RouteSign, MSGBOX_SIGN
	end


MtChimney_EventScript_Shelby::
# 343 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHELBY_1, MtChimney_Text_ShelbyIntro, MtChimney_Text_ShelbyDefeat, MtChimney_EventScript_DefeatedShelby
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/MtChimney/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MtChimney_EventScript_Shelby_2
# 349 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostBattle, MSGBOX_DEFAULT
	release_end

MtChimney_EventScript_Shelby_2:
# 345 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SHELBY_1, MtChimney_Text_ShelbyRematchIntro, MtChimney_Text_ShelbyRematchDefeat
# 346 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostRematch, MSGBOX_AUTOCLOSE
	end


MtChimney_EventScript_DefeatedShelby::
# 354 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 355 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 356 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyRegister, MSGBOX_DEFAULT
# 357 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SHELBY_1
	release_end


MtChimney_EventScript_Melissa::
# 362 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_MELISSA, MtChimney_Text_MelissaIntro, MtChimney_Text_MelissaDefeat
# 363 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MelissaPostBattle, MSGBOX_AUTOCLOSE
	end


MtChimney_EventScript_Sheila::
# 368 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHEILA, MtChimney_Text_SheilaIntro, MtChimney_Text_SheilaDefeat
# 369 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SheilaPostBattle, MSGBOX_AUTOCLOSE
	end


MtChimney_EventScript_Shirley::
# 374 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHIRLEY, MtChimney_Text_ShirleyIntro, MtChimney_Text_ShirleyDefeat
# 375 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShirleyPostBattle, MSGBOX_AUTOCLOSE
	end


MtChimney_EventScript_Grunt1::
# 380 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_1, MtChimney_Text_Grunt1Intro, MtChimney_Text_Grunt1Defeat
# 381 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end


MtChimney_EventScript_Sawyer::
# 386 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SAWYER_1, MtChimney_Text_SawyerIntro, MtChimney_Text_SawyerDefeat, MtChimney_EventScript_SawyerDefeated
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/MtChimney/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MtChimney_EventScript_Sawyer_2
# 392 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostBattle, MSGBOX_DEFAULT
	release_end

MtChimney_EventScript_Sawyer_2:
# 388 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SAWYER_1, MtChimney_Text_SawyerRematchIntro, MtChimney_Text_SawyerRematchDefeat
# 389 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostRematch, MSGBOX_AUTOCLOSE
	end


MtChimney_EventScript_SawyerDefeated::
# 397 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 398 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 399 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerRegister, MSGBOX_DEFAULT
# 400 "data/maps/MtChimney/scripts.pory"
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
# 404 "data/maps/MtChimney/scripts.pory"
	.string "The power contained in the METEORITE…\p"
	.string "By amplifying its power with this\n"
	.string "machine, MT. CHIMNEY's volcanic\l"
	.string "activity will instantly intensify…\p"
	.string "Its energy will grow deep inside\n"
	.string "the crater and…\l"
	.string "Fufufu…$"

MtChimney_Text_MaxieIntro::
# 416 "data/maps/MtChimney/scripts.pory"
	.string "{SPEAKER NAME_MAXIE}Hm?\n"
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
# 456 "data/maps/MtChimney/scripts.pory"
	.string "What?!\p"
	.string "I, MAXIE, was caught off guard?!$"

MtChimney_Text_MaxieYouHaventSeenLastOfMagma::
# 462 "data/maps/MtChimney/scripts.pory"
	.string "{SPEAKER NAME_MAXIE}But, enough.\n"
	.string "I will back off this time.\p"
	.string "But don't think that this is the last\n"
	.string "you've seen of TEAM MAGMA.\p"
	.string "Fufufu…\p"
	.string "Even without the METEORITE, if we\n"
	.string "obtain that ORB… Fufufu…$"

MtChimney_Text_TabithaIntro::
# 475 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe!\p"
	.string "So you've come all the way here!\p"
	.string "But you're too late!\n"
	.string "I've already delivered the METEORITE\l"
	.string "from METEOR FALLS to the BOSS!$"

MtChimney_Text_TabithaDefeat::
# 485 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…\p"
	.string "Even though I've lost, if our leader\n"
	.string "awakens that thing…$"

MtChimney_Text_TabithaPostBattle::
# 492 "data/maps/MtChimney/scripts.pory"
	.string "BOSS, hurry!\n"
	.string "Give it the METEORITE's energy!\p"
	.string "Hehehe…$"

MtChimney_Text_Grunt2Intro::
# 499 "data/maps/MtChimney/scripts.pory"
	.string "We of TEAM MAGMA are working hard for\n"
	.string "everyone's sake.\p"
	.string "Like, if that thing's power made more\n"
	.string "land, there'd be more places to live.\p"
	.string "Everyone'd be happy!$"

MtChimney_Text_Grunt2Defeat::
# 509 "data/maps/MtChimney/scripts.pory"
	.string "Hunh?\n"
	.string "What do you mean I lost?$"

MtChimney_Text_Grunt2PostBattle::
# 514 "data/maps/MtChimney/scripts.pory"
	.string "Our BOSS says, “It will make everyone\n"
	.string "happy.”\p"
	.string "But why does everyone keep getting\n"
	.string "in our way?$"

MtChimney_Text_Grunt1Intro::
# 522 "data/maps/MtChimney/scripts.pory"
	.string "If there were more land, I'd be able\n"
	.string "to get a big house of my own!\p"
	.string "I'm going to build it on hardened lava!$"

MtChimney_Text_Grunt1Defeat::
# 529 "data/maps/MtChimney/scripts.pory"
	.string "My dream of a big house…$"

MtChimney_Text_Grunt1PostBattle::
# 533 "data/maps/MtChimney/scripts.pory"
	.string "A kid like you, you ought to be\n"
	.string "splashing about in the waves!$"

MtChimney_Text_TeamAquaAlwaysMessingWithPlans::
# 538 "data/maps/MtChimney/scripts.pory"
	.string "That annoying TEAM AQUA…\n"
	.string "They always mess with our plans!$"

MtChimney_Text_MeteoritesPackAmazingPower::
# 543 "data/maps/MtChimney/scripts.pory"
	.string "METEORITES pack amazing power!$"

MtChimney_Text_YouBetterNotMessWithUs::
# 547 "data/maps/MtChimney/scripts.pory"
	.string "You'd better not mess with us!\p"
	.string "We're trying to awaken that thing\n"
	.string "for the benefit of everyone!$"

MtChimney_Text_AquasNameSimilar::
# 554 "data/maps/MtChimney/scripts.pory"
	.string "We're TEAM MAGMA!\p"
	.string "They're TEAM AQUA!\p"
	.string "It totally annoys me that they'd\n"
	.string "use a name like ours!$"

MtChimney_Text_DouseThemInFire::
# 563 "data/maps/MtChimney/scripts.pory"
	.string "Yeah!\n"
	.string "Douse them in fire!$"

MtChimney_Text_KeepMakingMoreLand::
# 568 "data/maps/MtChimney/scripts.pory"
	.string "We're going to keep making more land!$"

MtChimney_Text_Bufoh::
# 572 "data/maps/MtChimney/scripts.pory"
	.string "Bufoh!$"

MtChimney_Text_ArchieGoStopTeamMagma::
# 576 "data/maps/MtChimney/scripts.pory"
	.string "{SPEAKER NAME_ARCHIE}Grr, {PLAYER}!\n"
	.string "I should've guessed you'd show up!\p"
	.string "See for yourself what the fanatics\n"
	.string "of TEAM MAGMA are up to!\p"
	.string "They're trying to inject the stolen\n"
	.string "METEORITE's power into the volcano!\p"
	.string "Doing something like that will cause\n"
	.string "the volcano's eruption!$"

MtChimney_Text_ArchieIHaveMyHandsFull::
# 590 "data/maps/MtChimney/scripts.pory"
	.string "{SPEAKER NAME_ARCHIE}Grrr…\p"
	.string "I want to stop that MAXIE,\n"
	.string "but I can't!\p"
	.string "Not when I have my hands full battling\n"
	.string "three opponents at once!$"

MtChimney_Text_ArchieThankYou::
# 600 "data/maps/MtChimney/scripts.pory"
	.string "{SPEAKER NAME_ARCHIE}{PLAYER}!\n"
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
# 618 "data/maps/MtChimney/scripts.pory"
	.string "Darn… TEAM MAGMA outnumbers us!\n"
	.string "We can't keep up with them!$"

MtChimney_Text_LessHabitatForWaterPokemon::
# 623 "data/maps/MtChimney/scripts.pory"
	.string "If they expand the land, there'll be\n"
	.string "less habitats for WATER POKéMON!$"

MtChimney_Text_MagmasNameSimilar::
# 628 "data/maps/MtChimney/scripts.pory"
	.string "We're TEAM AQUA!\p"
	.string "They're TEAM MAGMA!\p"
	.string "It burns me up that they'd use such\n"
	.string "a confusing name!$"

MtChimney_Text_Bushaa::
# 637 "data/maps/MtChimney/scripts.pory"
	.string "Bushaa!$"

MtChimney_Text_LavaCookiesJust200::
# 641 "data/maps/MtChimney/scripts.pory"
	.string "LAVA COOKIES are MT. CHIMNEY's local\n"
	.string "specialty.\p"
	.string "Try one. It's just ¥200.$"

MtChimney_Text_ThankYouDear::
# 648 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, dear!$"

MtChimney_Text_YouveNotGotTheMoney::
# 652 "data/maps/MtChimney/scripts.pory"
	.string "Oh, dear. You can't buy a thing if\n"
	.string "you've not got the money.$"

MtChimney_Text_OhFineThen::
# 657 "data/maps/MtChimney/scripts.pory"
	.string "Oh, fine then.$"

MtChimney_Text_MeteoriteFittedOnMachine::
# 661 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
	.string "machine…\p"
	.string "The machine seems to be storing\n"
	.string "energy in the METEORITE.$"

MtChimney_Text_RemoveTheMeteorite::
# 669 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
	.string "machine…\p"
	.string "Do you want to remove the METEORITE?$"

MtChimney_Text_PlayerRemovedMeteorite::
# 676 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} removed the METEORITE from\n"
	.string "the mysterious machine.$"

MtChimney_Text_PlayerLeftMeteorite::
# 681 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} left the METEORITE where\n"
	.string "it was.$"

MtChimney_Text_MachineMakesNoResponse::
# 686 "data/maps/MtChimney/scripts.pory"
	.string "This mysterious machine…\n"
	.string "It makes no response whatsoever.$"

MtChimney_Text_RouteSign::
# 691 "data/maps/MtChimney/scripts.pory"
	.string "{DOWN_ARROW} JAGGED PATH\n"
	.string "LAVARIDGE TOWN AHEAD$"

MtChimney_Text_ShelbyIntro::
# 696 "data/maps/MtChimney/scripts.pory"
	.string "I've been to the hot springs and\n"
	.string "refreshed my tired bones.\l"
	.string "Right now I'm feeling strong!$"

MtChimney_Text_ShelbyDefeat::
# 702 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
	.string "Now, aren't you something!$"

MtChimney_Text_ShelbyPostBattle::
# 707 "data/maps/MtChimney/scripts.pory"
	.string "Well, well, I've lost. I can't call\n"
	.string "myself an EXPERT now, can I?$"

MtChimney_Text_ShelbyRegister::
# 712 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, child. It was fun, as if\n"
	.string "I were battling my own grandchild.\p"
	.string "Please, come see me again for\n"
	.string "a rematch.$"

MtChimney_Text_ShelbyRematchIntro::
# 720 "data/maps/MtChimney/scripts.pory"
	.string "If you can mesh your heart with those\n"
	.string "of your POKéMON, why, you should be\l"
	.string "able to achieve great things.$"

MtChimney_Text_ShelbyRematchDefeat::
# 726 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
	.string "Now, aren't you something!$"

MtChimney_Text_ShelbyPostRematch::
# 731 "data/maps/MtChimney/scripts.pory"
	.string "Perhaps your heart has become one\n"
	.string "with the hearts of your POKéMON.$"

MtChimney_Text_MelissaIntro::
# 736 "data/maps/MtChimney/scripts.pory"
	.string "I've got the fire in me, baby.\n"
	.string "I can't stand it! I have to battle!$"

MtChimney_Text_MelissaDefeat::
# 741 "data/maps/MtChimney/scripts.pory"
	.string "Ooh, that was a scorching-hot match!$"

MtChimney_Text_MelissaPostBattle::
# 745 "data/maps/MtChimney/scripts.pory"
	.string "The heat of MT. CHIMNEY warms\n"
	.string "me up, baby!$"

MtChimney_Text_SheilaIntro::
# 750 "data/maps/MtChimney/scripts.pory"
	.string "I've finally made it to MT. CHIMNEY.\n"
	.string "I want to make my POKéMON battle!$"

MtChimney_Text_SheilaDefeat::
# 755 "data/maps/MtChimney/scripts.pory"
	.string "The way you battle…\n"
	.string "It's like a MT. CHIMNEY eruption!$"

MtChimney_Text_SheilaPostBattle::
# 760 "data/maps/MtChimney/scripts.pory"
	.string "Like I said, I've finally made it to\n"
	.string "MT. CHIMNEY. It would be a shame if\l"
	.string "I only do a little sightseeing…\p"
	.string "I want to get in some battles and buy\n"
	.string "COOKIES as souvenirs.$"

MtChimney_Text_ShirleyIntro::
# 769 "data/maps/MtChimney/scripts.pory"
	.string "Since I bathed in the hot springs,\n"
	.string "I've been feeling great!\l"
	.string "I'm sure I'm going to win!$"

MtChimney_Text_ShirleyDefeat::
# 775 "data/maps/MtChimney/scripts.pory"
	.string "Yowch!\n"
	.string "I'm getting a chill out of the water.$"

MtChimney_Text_ShirleyPostBattle::
# 780 "data/maps/MtChimney/scripts.pory"
	.string "I'll have to take another dip in the\n"
	.string "hot springs. Want to join me?\p"
	.string "Just joking!$"

MtChimney_Text_SawyerIntro::
# 787 "data/maps/MtChimney/scripts.pory"
	.string "This is one fine mountain! Plenty of\n"
	.string "hot people around for company!$"

MtChimney_Text_SawyerDefeat::
# 792 "data/maps/MtChimney/scripts.pory"
	.string "Oh, you're a real firebrand, too!$"

MtChimney_Text_SawyerPostBattle::
# 796 "data/maps/MtChimney/scripts.pory"
	.string "I think I need a dip in LAVARIDGE\n"
	.string "HOT SPRING with the locals!$"

MtChimney_Text_SawyerRegister::
# 801 "data/maps/MtChimney/scripts.pory"
	.string "I like little fireballs like you.\n"
	.string "Let me register you in my POKéNAV.$"

MtChimney_Text_SawyerRematchIntro::
# 806 "data/maps/MtChimney/scripts.pory"
	.string "I'm happily surrounded by hot people\n"
	.string "around these parts. I won't lose!$"

MtChimney_Text_SawyerRematchDefeat::
# 811 "data/maps/MtChimney/scripts.pory"
	.string "Gosh, you're still the same\n"
	.string "firebrand as before!$"

MtChimney_Text_SawyerPostRematch::
# 816 "data/maps/MtChimney/scripts.pory"
	.string "Actually, it really is hot here.\n"
	.string "I'm overdressed for these parts.$"
