Route110_TrickHousePuzzle5_MapScripts::
# 2 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_TrickHousePuzzle5_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route110_TrickHousePuzzle5_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_1, 0
# 4 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_2, 0
# 5 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_3, 0
# 6 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_4, 0
# 7 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_5, 0
# 8 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_8, 0
	end


Route110_TrickHousePuzzle5_EventScript_Scroll::
# 14 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 15 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TRICK_HOUSE_PUZZLE_5_STATE, 0
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_Scroll_2
Route110_TrickHousePuzzle5_EventScript_Scroll_1:
# 19 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_ReadScrollAgain
	end

Route110_TrickHousePuzzle5_EventScript_Scroll_2:
# 16 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_5_STATE, 1
# 17 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_FoundScroll
	goto Route110_TrickHousePuzzle5_EventScript_Scroll_1


Route110_TrickHousePuzzle5_EventScript_Mechadoll1::
# 24 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 25 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_1, Common_Movement_FacePlayer
# 26 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 27 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_Mechadoll1_2
Route110_TrickHousePuzzle5_EventScript_Mechadoll1_1:
# 30 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 0
# 31 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll1_2:
# 28 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_CorrectGoThrough
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1_1


Route110_TrickHousePuzzle5_EventScript_Mechadoll2::
# 36 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 37 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_2, Common_Movement_FacePlayer
# 38 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 39 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_2, 1
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_Mechadoll2_2
Route110_TrickHousePuzzle5_EventScript_Mechadoll2_1:
# 42 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 0
# 43 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll2_2:
# 40 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_CorrectGoThrough
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2_1


Route110_TrickHousePuzzle5_EventScript_Mechadoll3::
# 48 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 49 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_3, Common_Movement_FacePlayer
# 50 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 51 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_3, 1
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_Mechadoll3_2
Route110_TrickHousePuzzle5_EventScript_Mechadoll3_1:
# 54 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 0
# 55 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll3_2:
# 52 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_CorrectGoThrough
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3_1


Route110_TrickHousePuzzle5_EventScript_Mechadoll4::
# 60 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 61 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_4, Common_Movement_FacePlayer
# 62 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 63 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_4, 1
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_Mechadoll4_2
Route110_TrickHousePuzzle5_EventScript_Mechadoll4_1:
# 66 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 0
# 67 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll4_2:
# 64 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_CorrectGoThrough
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4_1


Route110_TrickHousePuzzle5_EventScript_Mechadoll5::
# 72 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 73 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_5, Common_Movement_FacePlayer
# 74 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 75 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	compare VAR_TEMP_5, 1
	goto_if_eq Route110_TrickHousePuzzle5_EventScript_Mechadoll5_2
Route110_TrickHousePuzzle5_EventScript_Mechadoll5_1:
# 78 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 0
# 79 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll5Activate
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll5_2:
# 76 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_CorrectGoThrough
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll5_1


Route110_TrickHousePuzzle5_EventScript_Mechadoll1Trigger0::
# 84 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 85 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 0
# 86 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate
	end


Route110_TrickHousePuzzle5_EventScript_Mechadoll1Trigger1::
# 91 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 92 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 1
# 93 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate
	end


Route110_TrickHousePuzzle5_EventScript_Mechadoll1Trigger2::
# 98 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 99 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 2
# 100 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate
	end


Route110_TrickHousePuzzle5_EventScript_Mechadoll1Trigger3::
# 105 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 106 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 3
# 107 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate
	end


Route110_TrickHousePuzzle5_EventScript_Mechadoll1Trigger4::
# 112 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 113 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 4
# 114 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate
	end


Route110_TrickHousePuzzle5_EventScript_Mechadoll2Trigger0::
# 119 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 120 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 0
# 121 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate
	end


Route110_TrickHousePuzzle5_EventScript_Mechadoll2Trigger1::
# 126 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 127 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 1
# 128 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate
	end


Route110_TrickHousePuzzle5_EventScript_Mechadoll2Trigger2::
# 133 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 134 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 2
# 135 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate
	end


Route110_TrickHousePuzzle5_EventScript_Mechadoll2Trigger3::
# 140 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 141 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 3
# 142 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate
	end


Route110_TrickHousePuzzle5_EventScript_Mechadoll2Trigger4::
# 147 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 148 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 4
# 149 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate
	end


Route110_TrickHousePuzzle5_EventScript_Mechadoll2Trigger5::
# 154 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 155 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 5
# 156 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate
	end


Route110_TrickHousePuzzle5_EventScript_Mechadoll3Trigger0::
# 161 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 162 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 0
# 163 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate
	end


Route110_TrickHousePuzzle5_EventScript_Mechadoll3Trigger1::
# 168 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 169 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 1
# 170 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate
	end


Route110_TrickHousePuzzle5_EventScript_Mechadoll3Trigger2::
# 175 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 176 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 2
# 177 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate
	end


Route110_TrickHousePuzzle5_EventScript_Mechadoll3Trigger3::
# 182 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 183 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 3
# 184 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate
	end


Route110_TrickHousePuzzle5_EventScript_Mechadoll3Trigger4::
# 189 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 190 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 4
# 191 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate
	end


Route110_TrickHousePuzzle5_EventScript_Mechadoll4Trigger0::
# 196 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 197 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 0
# 198 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate
	end


Route110_TrickHousePuzzle5_EventScript_Mechadoll4Trigger1::
# 203 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 204 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 1
# 205 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate
	end


Route110_TrickHousePuzzle5_EventScript_Mechadoll4Trigger2::
# 210 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 211 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 2
# 212 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate
	end


Route110_TrickHousePuzzle5_EventScript_Mechadoll4Trigger3::
# 217 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 218 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 3
# 219 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate
	end


Route110_TrickHousePuzzle5_EventScript_Mechadoll4Trigger4::
# 224 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 225 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 4
# 226 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate
	end


Route110_TrickHousePuzzle5_EventScript_Mechadoll4Trigger5::
# 232 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 233 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 5
# 234 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate
	end


Route110_TrickHousePuzzle5_EventScript_Mechadoll5Trigger0::
# 239 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 240 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 0
# 241 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll5Activate
	end


Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate::
# 246 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_1, 1
# 247 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_8, LOCALID_MECHADOLL_1
# 248 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_MechadollAlert
# 249 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_TEMP_9
# 250 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 1, Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate_3
# 251 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 2, Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate_4
# 252 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 3, Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate_5
# 253 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 4, Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate_6
Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate_1:
# 255 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll1Intro, MSGBOX_DEFAULT
# 256 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	random 3
# 257 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 258 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 0, Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate_9
# 259 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 1, Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate_10
# 260 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 2, Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate_11
Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate_7:
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate_3:
# 250 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft1
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate_1

Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate_4:
# 251 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft2
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate_1

Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate_5:
# 252 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft3
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate_1

Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate_6:
# 253 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft4
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate_1

Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate_9:
# 258 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1Quiz1
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate_7

Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate_10:
# 259 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1Quiz2
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate_7

Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate_11:
# 260 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1Quiz3
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate_7


Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate::
# 266 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_2, 1
# 267 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_8, LOCALID_MECHADOLL_2
# 268 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_MechadollAlert
# 269 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_TEMP_9
# 270 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 1, Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate_3
# 271 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 2, Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate_4
# 272 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 3, Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate_5
# 273 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 4, Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate_6
# 274 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 5, Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate_7
Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate_1:
# 276 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll2Intro, MSGBOX_DEFAULT
# 277 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	random 3
# 278 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 279 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 0, Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate_10
# 280 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 1, Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate_11
# 281 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 2, Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate_12
Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate_8:
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate_3:
# 270 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight1
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate_1

Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate_4:
# 271 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight2
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate_1

Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate_5:
# 272 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight3
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate_1

Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate_6:
# 273 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight4
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate_1

Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate_7:
# 274 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight5
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate_1

Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate_10:
# 279 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Quiz1
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate_8

Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate_11:
# 280 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Quiz2
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate_8

Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate_12:
# 281 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Quiz3
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate_8


Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate::
# 287 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_3, 1
# 288 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_8, LOCALID_MECHADOLL_3
# 289 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_MechadollAlert
# 290 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight5
# 291 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_TEMP_9
# 292 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 1, Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate_3
# 293 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 2, Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate_4
# 294 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 3, Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate_5
# 295 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 4, Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate_6
Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate_1:
# 297 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll3Intro, MSGBOX_DEFAULT
# 298 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	random 3
# 299 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 300 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 0, Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate_9
# 301 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 1, Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate_10
# 302 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 2, Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate_11
Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate_7:
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate_3:
# 292 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft1
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate_1

Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate_4:
# 293 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft2
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate_1

Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate_5:
# 294 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft3
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate_1

Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate_6:
# 295 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft4
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate_1

Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate_9:
# 300 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3Quiz1
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate_7

Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate_10:
# 301 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3Quiz2
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate_7

Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate_11:
# 302 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3Quiz3
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate_7


Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate::
# 308 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_4, 1
# 309 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_8, LOCALID_MECHADOLL_4
# 310 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_MechadollAlert
# 311 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_TEMP_9
# 312 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 1, Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate_3
# 313 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 2, Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate_4
# 314 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 3, Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate_5
# 315 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 4, Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate_6
Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate_1:
# 317 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll4Intro, MSGBOX_DEFAULT
# 318 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	random 3
# 319 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 320 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 0, Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate_9
# 321 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 1, Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate_10
# 322 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 2, Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate_11
Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate_7:
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate_3:
# 312 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft1
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate_1

Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate_4:
# 313 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft2
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate_1

Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate_5:
# 314 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft3
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate_1

Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate_6:
# 315 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft4
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate_1

Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate_9:
# 320 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Quiz1
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate_7

Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate_10:
# 321 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Quiz2
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate_7

Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate_11:
# 322 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Quiz3
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate_7


Route110_TrickHousePuzzle5_EventScript_Mechadoll5Activate::
# 328 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_5, 1
# 329 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_8, LOCALID_MECHADOLL_5
# 330 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call Route110_TrickHousePuzzle5_EventScript_MechadollAlert
# 331 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll5Intro, MSGBOX_DEFAULT
# 332 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	random 3
# 333 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 334 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 0, Route110_TrickHousePuzzle5_EventScript_Mechadoll5Activate_3
# 335 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 1, Route110_TrickHousePuzzle5_EventScript_Mechadoll5Activate_4
# 336 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 2, Route110_TrickHousePuzzle5_EventScript_Mechadoll5Activate_5
Route110_TrickHousePuzzle5_EventScript_Mechadoll5Activate_1:
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll5Activate_3:
# 334 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll5Quiz1
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll5Activate_1

Route110_TrickHousePuzzle5_EventScript_Mechadoll5Activate_4:
# 335 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll5Quiz2
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll5Activate_1

Route110_TrickHousePuzzle5_EventScript_Mechadoll5Activate_5:
# 336 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll5Quiz3
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll5Activate_1


Route110_TrickHousePuzzle5_EventScript_MechadollAlert::
# 342 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	playse SE_PIN
# 343 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement VAR_TEMP_8, Common_Movement_ExclamationMark
# 344 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 345 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement VAR_TEMP_8, Common_Movement_Delay48
# 346 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
	return


Route110_TrickHousePuzzle5_EventScript_Mechadoll1Quiz1::
# 351 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll1Quiz1, MSGBOX_DEFAULT
# 352 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL1_Q1, TRUE
# 353 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 354 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 2, Route110_TrickHousePuzzle5_EventScript_Mechadoll1Quiz1_3
Route110_TrickHousePuzzle5_EventScript_Mechadoll1Quiz1_1:
# 356 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll1Quiz1_3:
# 354 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1Quiz1_1


Route110_TrickHousePuzzle5_EventScript_Mechadoll1Quiz2::
# 361 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll1Quiz2, MSGBOX_DEFAULT
# 362 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL1_Q2, TRUE
# 363 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 364 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 0, Route110_TrickHousePuzzle5_EventScript_Mechadoll1Quiz2_3
Route110_TrickHousePuzzle5_EventScript_Mechadoll1Quiz2_1:
# 366 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll1Quiz2_3:
# 364 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1Quiz2_1


Route110_TrickHousePuzzle5_EventScript_Mechadoll1Quiz3::
# 371 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll1Quiz3, MSGBOX_DEFAULT
# 372 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL1_Q3, TRUE
# 373 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 374 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 0, Route110_TrickHousePuzzle5_EventScript_Mechadoll1Quiz3_3
Route110_TrickHousePuzzle5_EventScript_Mechadoll1Quiz3_1:
# 376 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll1Quiz3_3:
# 374 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1Quiz3_1


Route110_TrickHousePuzzle5_EventScript_Mechadoll2Quiz1::
# 381 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll2Quiz1, MSGBOX_DEFAULT
# 382 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL2_Q1, TRUE
# 383 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 384 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 1, Route110_TrickHousePuzzle5_EventScript_Mechadoll2Quiz1_3
Route110_TrickHousePuzzle5_EventScript_Mechadoll2Quiz1_1:
# 386 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll2Quiz1_3:
# 384 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Quiz1_1


Route110_TrickHousePuzzle5_EventScript_Mechadoll2Quiz2::
# 391 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll2Quiz2, MSGBOX_DEFAULT
# 392 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL2_Q2, TRUE
# 393 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 394 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 2, Route110_TrickHousePuzzle5_EventScript_Mechadoll2Quiz2_3
Route110_TrickHousePuzzle5_EventScript_Mechadoll2Quiz2_1:
# 396 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll2Quiz2_3:
# 394 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Quiz2_1


Route110_TrickHousePuzzle5_EventScript_Mechadoll2Quiz3::
# 401 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll2Quiz3, MSGBOX_DEFAULT
# 402 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL2_Q3, TRUE
# 403 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 404 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 0, Route110_TrickHousePuzzle5_EventScript_Mechadoll2Quiz3_3
Route110_TrickHousePuzzle5_EventScript_Mechadoll2Quiz3_1:
# 406 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll2Quiz3_3:
# 404 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Quiz3_1


Route110_TrickHousePuzzle5_EventScript_Mechadoll3Quiz1::
# 411 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll3Quiz1, MSGBOX_DEFAULT
# 412 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL3_Q1, TRUE
# 413 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 414 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 0, Route110_TrickHousePuzzle5_EventScript_Mechadoll3Quiz1_3
Route110_TrickHousePuzzle5_EventScript_Mechadoll3Quiz1_1:
# 416 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll3Quiz1_3:
# 414 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3Quiz1_1


Route110_TrickHousePuzzle5_EventScript_Mechadoll3Quiz2::
# 421 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll3Quiz2, MSGBOX_DEFAULT
# 422 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL3_Q2, TRUE
# 423 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 424 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 2, Route110_TrickHousePuzzle5_EventScript_Mechadoll3Quiz2_3
Route110_TrickHousePuzzle5_EventScript_Mechadoll3Quiz2_1:
# 426 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll3Quiz2_3:
# 424 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3Quiz2_1


Route110_TrickHousePuzzle5_EventScript_Mechadoll3Quiz3::
# 431 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll3Quiz3, MSGBOX_DEFAULT
# 432 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL3_Q3, TRUE
# 433 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 434 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 1, Route110_TrickHousePuzzle5_EventScript_Mechadoll3Quiz3_3
Route110_TrickHousePuzzle5_EventScript_Mechadoll3Quiz3_1:
# 436 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll3Quiz3_3:
# 434 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3Quiz3_1


Route110_TrickHousePuzzle5_EventScript_Mechadoll4Quiz1::
# 441 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll4Quiz1, MSGBOX_DEFAULT
# 442 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL4_Q1, TRUE
# 443 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 444 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 0, Route110_TrickHousePuzzle5_EventScript_Mechadoll4Quiz1_3
Route110_TrickHousePuzzle5_EventScript_Mechadoll4Quiz1_1:
# 446 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll4Quiz1_3:
# 444 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Quiz1_1


Route110_TrickHousePuzzle5_EventScript_Mechadoll4Quiz2::
# 451 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll4Quiz2, MSGBOX_DEFAULT
# 452 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL4_Q2, TRUE
# 453 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 454 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 0, Route110_TrickHousePuzzle5_EventScript_Mechadoll4Quiz2_3
Route110_TrickHousePuzzle5_EventScript_Mechadoll4Quiz2_1:
# 456 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll4Quiz2_3:
# 454 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Quiz2_1


Route110_TrickHousePuzzle5_EventScript_Mechadoll4Quiz3::
# 461 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll4Quiz3, MSGBOX_DEFAULT
# 462 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL4_Q3, TRUE
# 463 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 464 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 1, Route110_TrickHousePuzzle5_EventScript_Mechadoll4Quiz3_3
Route110_TrickHousePuzzle5_EventScript_Mechadoll4Quiz3_1:
# 466 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll4Quiz3_3:
# 464 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Quiz3_1


Route110_TrickHousePuzzle5_EventScript_Mechadoll5Quiz1::
# 471 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll5Quiz1, MSGBOX_DEFAULT
# 472 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL5_Q1, TRUE
# 473 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 474 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 1, Route110_TrickHousePuzzle5_EventScript_Mechadoll5Quiz1_3
Route110_TrickHousePuzzle5_EventScript_Mechadoll5Quiz1_1:
# 476 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll5Quiz1_3:
# 474 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll5Quiz1_1


Route110_TrickHousePuzzle5_EventScript_Mechadoll5Quiz2::
# 481 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll5Quiz2, MSGBOX_DEFAULT
# 482 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL5_Q2, TRUE
# 483 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 484 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 0, Route110_TrickHousePuzzle5_EventScript_Mechadoll5Quiz2_3
Route110_TrickHousePuzzle5_EventScript_Mechadoll5Quiz2_1:
# 486 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll5Quiz2_3:
# 484 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll5Quiz2_1


Route110_TrickHousePuzzle5_EventScript_Mechadoll5Quiz3::
# 491 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll5Quiz3, MSGBOX_DEFAULT
# 492 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL5_Q3, TRUE
# 493 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 494 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 2, Route110_TrickHousePuzzle5_EventScript_Mechadoll5Quiz3_3
Route110_TrickHousePuzzle5_EventScript_Mechadoll5Quiz3_1:
# 496 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
	end

Route110_TrickHousePuzzle5_EventScript_Mechadoll5Quiz3_3:
# 494 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll5Quiz3_1


Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer::
# 501 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitse
# 502 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	playse SE_FAILURE
# 503 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_DisappointmentError, MSGBOX_DEFAULT
# 504 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_Movement_MechadollShake
# 505 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_Movement_MechadollShake
# 506 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_Movement_MechadollShake
# 507 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_Movement_MechadollShake
# 508 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_5, Route110_TrickHousePuzzle5_Movement_MechadollShake
# 509 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Wahahahaha, MSGBOX_DEFAULT
# 510 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 511 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_WaitForNextChallenge, MSGBOX_DEFAULT
# 512 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	closemessage
# 513 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	warp MAP_ROUTE110_TRICK_HOUSE_PUZZLE5, 0, 21
# 514 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitstate
# 515 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	releaseall
	end


Route110_TrickHousePuzzle5_EventScript_CorrectAnswer::
# 520 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitse
# 521 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	playse SE_SUCCESS
# 522 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_CorrectGoThrough
	end


Route110_TrickHousePuzzle5_EventScript_CorrectGoThrough::
# 527 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_CorrectGoThrough, MSGBOX_DEFAULT
# 528 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	releaseall
	end


Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft1::
# 538 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement VAR_TEMP_8, Common_Movement_WalkLeft
# 539 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
	return


Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft2::
# 544 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement VAR_TEMP_8, Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft2_Movement_0
# 545 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
	return


Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft3::
# 550 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement VAR_TEMP_8, Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft3_Movement_0
# 551 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
	return


Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft4::
# 556 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement VAR_TEMP_8, Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft4_Movement_0
# 557 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
	return


Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft5::
# 562 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement VAR_TEMP_8, Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft5_Movement_0
# 563 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
	return


Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight1::
# 568 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement VAR_TEMP_8, Common_Movement_WalkRight
# 569 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
	return


Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight2::
# 574 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement VAR_TEMP_8, Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight2_Movement_0
# 575 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
	return


Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight3::
# 580 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement VAR_TEMP_8, Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight3_Movement_0
# 581 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
	return


Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight4::
# 586 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement VAR_TEMP_8, Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight4_Movement_0
# 587 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
	return


Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight5::
# 592 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement VAR_TEMP_8, Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight5_Movement_0
# 593 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
	return


# 597 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Movement_MechadollShake:
# 599 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_left
# 600 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 601 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_right
# 602 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 603 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_left
# 604 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 605 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_right
# 606 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 607 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_left
# 608 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 609 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_right
# 610 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 611 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_left
# 612 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 613 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_right
# 614 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 615 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_left
# 616 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 617 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_right
# 618 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 619 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_left
# 620 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 621 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_right
# 622 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 623 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_left
# 624 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 625 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_right
# 626 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 627 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_left
# 628 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 629 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_right
# 630 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 631 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_left
# 632 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 633 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_right
# 634 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 635 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_left
# 636 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 637 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_right
# 638 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 639 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_left
# 640 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 641 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_right
# 642 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 643 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_down
	step_end

# 544 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft2_Movement_0:
# 544 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
# 544 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
	step_end

# 550 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft3_Movement_0:
# 550 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
# 550 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
# 550 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
	step_end

# 556 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft4_Movement_0:
# 556 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
# 556 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
# 556 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
# 556 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
	step_end

# 562 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft5_Movement_0:
# 562 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
# 562 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
# 562 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
# 562 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
# 562 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
	step_end

# 574 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight2_Movement_0:
# 574 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
# 574 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
	step_end

# 580 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight3_Movement_0:
# 580 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
# 580 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
# 580 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
	step_end

# 586 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight4_Movement_0:
# 586 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
# 586 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
# 586 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
# 586 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
	step_end

# 592 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight5_Movement_0:
# 592 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
# 592 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
# 592 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
# 592 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
# 592 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
	step_end

Route110_TrickHousePuzzle5_Text_WroteSecretCodeLockOpened::
# 646 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "{PLAYER} wrote down the secret code\n"
	.string "on the door.\p"
	.string "“TRICK MASTER is a genius.”\n"
	.string "… … … … … … … …\p"
	.string "The lock clicked open!$"

Route110_TrickHousePuzzle5_Text_Mechadoll1Intro::
# 656 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "CLICKETY-CLACK…\n"
	.string "MECHADOLL 1 AM I!\p"
	.string "IF YOU ANSWER QUIZZES CORRECTLY,\n"
	.string "THEN YOU WILL GO TO MECHADOLL 5.\l"
	.string "THEN YOU CAN OBTAIN THE SECRET CODE.$"

Route110_TrickHousePuzzle5_Text_Mechadoll1Quiz1::
# 665 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 1 QUIZ.\p"
	.string "One of these POKéMON is not found\n"
	.string "on ROUTE 110. Which one is it?$"

Route110_TrickHousePuzzle5_Text_Mechadoll1Quiz2::
# 672 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 1 QUIZ.\p"
	.string "One of these POKéMON is not of the\n"
	.string "WATER type. Which one is it?$"

Route110_TrickHousePuzzle5_Text_Mechadoll1Quiz3::
# 679 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 1 QUIZ.\p"
	.string "One of these POKéMON does not use\n"
	.string "LEECH LIFE. Which one is it?$"

Route110_TrickHousePuzzle5_Text_CorrectGoThrough::
# 686 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "CONGRATULATIONS. CORRECT YOU ARE.\n"
	.string "GO THROUGH. PLEASE.$"

Route110_TrickHousePuzzle5_Text_DisappointmentError::
# 691 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "BZZZT. DISAPPOINTMENT.\n"
	.string "ERROR.$"

Route110_TrickHousePuzzle5_Text_Wahahahaha::
# 696 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "WAHAHAHAHA! WAHAHAHAHA!\n"
	.string "CLICKETY-CLACK!$"

Route110_TrickHousePuzzle5_Text_WaitForNextChallenge::
# 701 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "YOUR NEXT CHALLENGE WE WAIT FOR.$"

Route110_TrickHousePuzzle5_Text_Mechadoll2Intro::
# 705 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "CLICKETY-CLACK…\n"
	.string "MECHADOLL 2 AM I!\p"
	.string "MECHADOLL 1'S QUIZ DIFFICULTY LEVEL\n"
	.string "IS SET TOO LOW.$"

Route110_TrickHousePuzzle5_Text_Mechadoll2Quiz1::
# 713 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 2 QUIZ.\p"
	.string "Which of these POKéMON did WALLY\n"
	.string "borrow from your father?$"

Route110_TrickHousePuzzle5_Text_Mechadoll2Quiz2::
# 720 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 2 QUIZ.\p"
	.string "Which of these POKéMON was chasing\n"
	.string "PROF. BIRCH?$"

Route110_TrickHousePuzzle5_Text_Mechadoll2Quiz3::
# 727 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 2 QUIZ.\p"
	.string "Which of these POKéMON did TEAM AQUA\n"
	.string "use in PETALBURG FOREST?$"

Route110_TrickHousePuzzle5_Text_Mechadoll3Intro::
# 734 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "CLICKETY-CLACK…\n"
	.string "MECHADOLL 3 AM I!\p"
	.string "MATTERS OF MONEY ARE MY SOLE FOCUS.$"

Route110_TrickHousePuzzle5_Text_Mechadoll3Quiz1::
# 741 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 3 QUIZ.\p"
	.string "Which costs more?\n"
	.string "Three HARBOR MAILS or one BURN HEAL?$"

Route110_TrickHousePuzzle5_Text_Mechadoll3Quiz2::
# 748 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 3 QUIZ.\p"
	.string "Sell one GREAT BALL and buy\n"
	.string "one POTION. How much money remains?$"

Route110_TrickHousePuzzle5_Text_Mechadoll3Quiz3::
# 755 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 3 QUIZ.\p"
	.string "Do one REPEL and SODA POP cost\n"
	.string "more than one SUPER POTION?$"

Route110_TrickHousePuzzle5_Text_Mechadoll4Intro::
# 762 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "CLICKETY-CLACK…\n"
	.string "MECHADOLL 4 THAT IS ME!\p"
	.string "MY QUIZ IS AN OBJECT OF BEAUTY.$"

Route110_TrickHousePuzzle5_Text_Mechadoll4Quiz1::
# 769 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 4 QUIZ.\p"
	.string "In SEASHORE HOUSE, were there more men\n"
	.string "or women?$"

Route110_TrickHousePuzzle5_Text_Mechadoll4Quiz2::
# 776 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 4 QUIZ.\p"
	.string "In LAVARIDGE TOWN, were there more\n"
	.string "elderly men or elderly women?$"

Route110_TrickHousePuzzle5_Text_Mechadoll4Quiz3::
# 783 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 4 QUIZ.\p"
	.string "In the TRAINER'S SCHOOL, how many\n"
	.string "girl students were there?$"

Route110_TrickHousePuzzle5_Text_Mechadoll5Intro::
# 790 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "CLICKETY-CLACK…\n"
	.string "MECHADOLL 5 AM I!\p"
	.string "THE MASTER'S BEST AND PROUDEST\n"
	.string "ACHIEVEMENT AM I.$"

Route110_TrickHousePuzzle5_Text_Mechadoll5Quiz1::
# 798 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 5 QUIZ.\p"
	.string "In SLATEPORT's POKéMON FAN CLUB,\n"
	.string "how many POKéMON were there?$"

Route110_TrickHousePuzzle5_Text_Mechadoll5Quiz2::
# 805 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 5 QUIZ.\p"
	.string "In FORTREE CITY, how many\n"
	.string "tree houses were there?$"

Route110_TrickHousePuzzle5_Text_Mechadoll5Quiz3::
# 812 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 5 QUIZ.\p"
	.string "On the CYCLING ROAD, how many\n"
	.string "TRIATHLETES were there?$"
