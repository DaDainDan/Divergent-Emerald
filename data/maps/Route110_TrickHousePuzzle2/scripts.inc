Route110_TrickHousePuzzle2_MapScripts::
# 2 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route110_TrickHousePuzzle2_MapScripts_MAP_SCRIPT_ON_RESUME
# 17 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_TrickHousePuzzle2_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route110_TrickHousePuzzle2_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq Route110_TrickHousePuzzle2_MapScripts_MAP_SCRIPT_ON_RESUME_2
Route110_TrickHousePuzzle2_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 6 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	compare VAR_TEMP_2, 1
	goto_if_eq Route110_TrickHousePuzzle2_MapScripts_MAP_SCRIPT_ON_RESUME_5
Route110_TrickHousePuzzle2_MapScripts_MAP_SCRIPT_ON_RESUME_4:
# 9 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	compare VAR_TEMP_3, 1
	goto_if_eq Route110_TrickHousePuzzle2_MapScripts_MAP_SCRIPT_ON_RESUME_8
Route110_TrickHousePuzzle2_MapScripts_MAP_SCRIPT_ON_RESUME_7:
# 12 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	compare VAR_TEMP_4, 1
	goto_if_eq Route110_TrickHousePuzzle2_MapScripts_MAP_SCRIPT_ON_RESUME_11
Route110_TrickHousePuzzle2_MapScripts_MAP_SCRIPT_ON_RESUME_10:
	end

Route110_TrickHousePuzzle2_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 4 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	call Route110_TrickHousePuzzle2_EventScript_PressButton1
	goto Route110_TrickHousePuzzle2_MapScripts_MAP_SCRIPT_ON_RESUME_1

Route110_TrickHousePuzzle2_MapScripts_MAP_SCRIPT_ON_RESUME_5:
# 7 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	call Route110_TrickHousePuzzle2_EventScript_PressButton2
	goto Route110_TrickHousePuzzle2_MapScripts_MAP_SCRIPT_ON_RESUME_4

Route110_TrickHousePuzzle2_MapScripts_MAP_SCRIPT_ON_RESUME_8:
# 10 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	call Route110_TrickHousePuzzle2_EventScript_PressButton3
	goto Route110_TrickHousePuzzle2_MapScripts_MAP_SCRIPT_ON_RESUME_7

Route110_TrickHousePuzzle2_MapScripts_MAP_SCRIPT_ON_RESUME_11:
# 13 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	call Route110_TrickHousePuzzle2_EventScript_PressButton4
	goto Route110_TrickHousePuzzle2_MapScripts_MAP_SCRIPT_ON_RESUME_10

Route110_TrickHousePuzzle2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 18 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	setvar VAR_TEMP_1, 0
# 19 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	setvar VAR_TEMP_2, 0
# 20 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	setvar VAR_TEMP_3, 0
# 21 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	setvar VAR_TEMP_4, 0
	end


Route110_TrickHousePuzzle2_EventScript_Scroll::
# 27 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	lockall
# 28 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	compare VAR_TRICK_HOUSE_PUZZLE_2_STATE, 0
	goto_if_eq Route110_TrickHousePuzzle2_EventScript_Scroll_2
Route110_TrickHousePuzzle2_EventScript_Scroll_1:
# 32 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_ReadScrollAgain
	end

Route110_TrickHousePuzzle2_EventScript_Scroll_2:
# 29 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_2_STATE, 1
# 30 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_FoundScroll
	goto Route110_TrickHousePuzzle2_EventScript_Scroll_1


Route110_TrickHousePuzzle2_EventScript_Button1::
# 37 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	lockall
# 38 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	setvar VAR_TEMP_1, 1
# 39 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	playse SE_PIN
# 40 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	call Route110_TrickHousePuzzle2_EventScript_PressButton1
# 41 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	special DrawWholeMapView
# 42 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	releaseall
	end


Route110_TrickHousePuzzle2_EventScript_Button2::
# 47 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	lockall
# 48 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	setvar VAR_TEMP_2, 1
# 49 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	playse SE_PIN
# 50 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	call Route110_TrickHousePuzzle2_EventScript_PressButton2
# 51 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	special DrawWholeMapView
# 52 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	releaseall
	end


Route110_TrickHousePuzzle2_EventScript_Button3::
# 57 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	lockall
# 58 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	setvar VAR_TEMP_3, 1
# 59 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	playse SE_PIN
# 60 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	call Route110_TrickHousePuzzle2_EventScript_PressButton3
# 61 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	special DrawWholeMapView
# 62 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	releaseall
	end


Route110_TrickHousePuzzle2_EventScript_Button4::
# 67 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	lockall
# 68 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	setvar VAR_TEMP_4, 1
# 69 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	playse SE_PIN
# 70 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	call Route110_TrickHousePuzzle2_EventScript_PressButton4
# 71 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	special DrawWholeMapView
# 72 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	releaseall
	end


Route110_TrickHousePuzzle2_EventScript_PressButton1::
# 77 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	setmetatile 11, 12, METATILE_TrickHousePuzzle_Button_Pressed, FALSE
# 78 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	setmetatile 1, 13, METATILE_TrickHousePuzzle_Door_Shuttered, FALSE
	return


Route110_TrickHousePuzzle2_EventScript_PressButton2::
# 83 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	setmetatile 0, 4, METATILE_TrickHousePuzzle_Button_Pressed, FALSE
# 84 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	setmetatile 5, 6, METATILE_TrickHousePuzzle_Door_Shuttered, FALSE
	return


Route110_TrickHousePuzzle2_EventScript_PressButton3::
# 89 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	setmetatile 14, 5, METATILE_TrickHousePuzzle_Button_Pressed, FALSE
# 90 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	setmetatile 7, 15, METATILE_TrickHousePuzzle_Door_Shuttered, FALSE
	return


Route110_TrickHousePuzzle2_EventScript_PressButton4::
# 95 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	setmetatile 7, 11, METATILE_TrickHousePuzzle_Button_Pressed, FALSE
# 96 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	setmetatile 14, 12, METATILE_TrickHousePuzzle_Door_Shuttered, FALSE
	return


Route110_TrickHousePuzzle2_EventScript_Ted::
# 101 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	trainerbattle_single TRAINER_TED, Route110_TrickHousePuzzle2_Text_TedIntro, Route110_TrickHousePuzzle2_Text_TedDefeat
# 102 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	msgbox Route110_TrickHousePuzzle2_Text_TedPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_TrickHousePuzzle2_EventScript_Paul::
# 107 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	trainerbattle_single TRAINER_PAUL, Route110_TrickHousePuzzle2_Text_PaulIntro, Route110_TrickHousePuzzle2_Text_PaulDefeat
# 108 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	msgbox Route110_TrickHousePuzzle2_Text_PaulPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_TrickHousePuzzle2_EventScript_Georgia::
# 113 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	trainerbattle_single TRAINER_GEORGIA, Route110_TrickHousePuzzle2_Text_GeorgiaIntro, Route110_TrickHousePuzzle2_Text_GeorgiaDefeat
# 114 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	msgbox Route110_TrickHousePuzzle2_Text_GeorgiaPostBattle, MSGBOX_AUTOCLOSE
	end


Route110_TrickHousePuzzle2_Text_WroteSecretCodeLockOpened::
# 118 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	.string "{PLAYER} wrote down the secret code\n"
	.string "on the door.\p"
	.string "“TRICK MASTER is smart.”\n"
	.string "… … … … … … … …\p"
	.string "The lock clicked open!$"

Route110_TrickHousePuzzle2_Text_TedIntro::
# 128 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	.string "Which switch closes which hole?$"

Route110_TrickHousePuzzle2_Text_TedDefeat::
# 132 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	.string "After that battle, I'm even more\n"
	.string "confused!$"

Route110_TrickHousePuzzle2_Text_TedPostBattle::
# 137 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	.string "Can I get you to push all the buttons\n"
	.string "for me?$"

Route110_TrickHousePuzzle2_Text_PaulIntro::
# 142 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	.string "Oh! You're on your second TRICK HOUSE\n"
	.string "challenge!$"

Route110_TrickHousePuzzle2_Text_PaulDefeat::
# 147 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	.string "You're good at battling too?$"

Route110_TrickHousePuzzle2_Text_PaulPostBattle::
# 151 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	.string "The TRICK MASTER rigged all the tricks\n"
	.string "in this house all by himself.$"

Route110_TrickHousePuzzle2_Text_GeorgiaIntro::
# 156 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	.string "I want to make my own GYM one day.\n"
	.string "So, I'm studying how to set traps.$"

Route110_TrickHousePuzzle2_Text_GeorgiaDefeat::
# 161 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	.string "I didn't study battling enough!$"

Route110_TrickHousePuzzle2_Text_GeorgiaPostBattle::
# 165 "data/maps/Route110_TrickHousePuzzle2/scripts.pory"
	.string "You're strong, aren't you?\n"
	.string "Maybe even enough to be a GYM LEADER!$"
