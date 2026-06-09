Route109_SeashoreHouse_MapScripts::
# 2 "data/maps/Route109_SeashoreHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route109_SeashoreHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route109_SeashoreHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setflag FLAG_LANDMARK_SEASHORE_HOUSE
	end


Route109_SeashoreHouse_EventScript_Owner::
# 9 "data/maps/Route109_SeashoreHouse/scripts.pory"
	lock_faceplayer
# 10 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_6_SODA_POP, Route109_SeashoreHouse_EventScript_Owner_2
# 19 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_SEASHORE_HOUSE, Route109_SeashoreHouse_EventScript_Owner_3
# 27 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_set FLAG_TEMP_2, Route109_SeashoreHouse_EventScript_Owner_4
# 31 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_SeashoreHouseIntro, MSGBOX_DEFAULT
# 32 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setflag FLAG_TEMP_2
Route109_SeashoreHouse_EventScript_Owner_1:
	release_end

Route109_SeashoreHouse_EventScript_Owner_2:
# 11 "data/maps/Route109_SeashoreHouse/scripts.pory"
	showmoneybox 0, 0
# 12 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_WantToBuySodaPop, MSGBOX_YESNO
# 13 "data/maps/Route109_SeashoreHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route109_SeashoreHouse_EventScript_Owner_10
Route109_SeashoreHouse_EventScript_Owner_9:
# 16 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_ThatsTooBad, MSGBOX_DEFAULT
# 17 "data/maps/Route109_SeashoreHouse/scripts.pory"
	hidemoneybox
	goto Route109_SeashoreHouse_EventScript_Owner_1

Route109_SeashoreHouse_EventScript_Owner_3:
# 20 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_TakeTheseSodaPopBottles, MSGBOX_DEFAULT
	giveitem ITEM_SODA_POP, 6
# 0 "data/maps/Route109_SeashoreHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route109_SeashoreHouse_EventScript_Owner_13
# 25 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setflag FLAG_RECEIVED_6_SODA_POP
	goto Route109_SeashoreHouse_EventScript_Owner_1

Route109_SeashoreHouse_EventScript_Owner_4:
# 28 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_ShowMeSomeHotMatches, MSGBOX_DEFAULT
	goto Route109_SeashoreHouse_EventScript_Owner_1

Route109_SeashoreHouse_EventScript_Owner_10:
# 14 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto Route109_SeashoreHouse_EventScript_BuySodaPop
	goto Route109_SeashoreHouse_EventScript_Owner_9

Route109_SeashoreHouse_EventScript_Owner_13:
# 22 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_BagFull, MSGBOX_DEFAULT
	release_end


Route109_SeashoreHouse_EventScript_BuySodaPop::
	checkmoney 300
# 0 "data/maps/Route109_SeashoreHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route109_SeashoreHouse_EventScript_BuySodaPop_2
	checkitemspace ITEM_SODA_POP
# 0 "data/maps/Route109_SeashoreHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route109_SeashoreHouse_EventScript_BuySodaPop_5
# 48 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_HereYouGo, MSGBOX_DEFAULT
# 49 "data/maps/Route109_SeashoreHouse/scripts.pory"
	removemoney 300
# 50 "data/maps/Route109_SeashoreHouse/scripts.pory"
	updatemoneybox
# 51 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto Route109_SeashoreHouse_EventScript_GiveSodaPop
	end

Route109_SeashoreHouse_EventScript_BuySodaPop_2:
# 39 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_NotEnoughMoney, MSGBOX_DEFAULT
# 40 "data/maps/Route109_SeashoreHouse/scripts.pory"
	hidemoneybox
	release_end

Route109_SeashoreHouse_EventScript_BuySodaPop_5:
# 44 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 45 "data/maps/Route109_SeashoreHouse/scripts.pory"
	hidemoneybox
	release_end


# 55 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 56 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_GiveSodaPop::
# 57 "data/maps/Route109_SeashoreHouse/scripts.pory"
.if OW_SHOW_ITEM_DESCRIPTIONS != OW_ITEM_DESCRIPTIONS_OFF
# 58 "data/maps/Route109_SeashoreHouse/scripts.pory"
	hidemoneybox
# 59 "data/maps/Route109_SeashoreHouse/scripts.pory"
	giveitem ITEM_SODA_POP
# 60 "data/maps/Route109_SeashoreHouse/scripts.pory"
.else
# 61 "data/maps/Route109_SeashoreHouse/scripts.pory"
	giveitem ITEM_SODA_POP
# 62 "data/maps/Route109_SeashoreHouse/scripts.pory"
	hidemoneybox
# 63 "data/maps/Route109_SeashoreHouse/scripts.pory"
.endif
# 64 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release_end

Route109_SeashoreHouse_EventScript_Dwayne::
# 68 "data/maps/Route109_SeashoreHouse/scripts.pory"
	trainerbattle_single TRAINER_DWAYNE, Route109_SeashoreHouse_Text_DwayneIntro, Route109_SeashoreHouse_Text_DwayneDefeated, Route109_SeashoreHouse_EventScript_CheckTrainersCompletion
# 69 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_DwaynePostBattle, MSGBOX_AUTOCLOSE
	end


Route109_SeashoreHouse_EventScript_Johanna::
# 74 "data/maps/Route109_SeashoreHouse/scripts.pory"
	trainerbattle_single TRAINER_JOHANNA, Route109_SeashoreHouse_Text_JohannaIntro, Route109_SeashoreHouse_Text_JohannaDefeated, Route109_SeashoreHouse_EventScript_CheckTrainersCompletion
# 75 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_JohannaPostBattle, MSGBOX_AUTOCLOSE
	end


Route109_SeashoreHouse_EventScript_Simon::
# 80 "data/maps/Route109_SeashoreHouse/scripts.pory"
	trainerbattle_single TRAINER_SIMON, Route109_SeashoreHouse_Text_SimonIntro, Route109_SeashoreHouse_Text_SimonDefeated, Route109_SeashoreHouse_EventScript_CheckTrainersCompletion
# 81 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_SimonPostBattle, MSGBOX_AUTOCLOSE
	end


Route109_SeashoreHouse_EventScript_CheckTrainersCompletion::
# 86 "data/maps/Route109_SeashoreHouse/scripts.pory"
	checktrainerflag TRAINER_DWAYNE
	goto_if 1, Route109_SeashoreHouse_EventScript_CheckTrainersCompletion_4
Route109_SeashoreHouse_EventScript_CheckTrainersCompletion_1:
	release_end

Route109_SeashoreHouse_EventScript_CheckTrainersCompletion_2:
# 87 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setflag FLAG_DEFEATED_SEASHORE_HOUSE
	goto Route109_SeashoreHouse_EventScript_CheckTrainersCompletion_1

Route109_SeashoreHouse_EventScript_CheckTrainersCompletion_3:
# 86 "data/maps/Route109_SeashoreHouse/scripts.pory"
	checktrainerflag TRAINER_SIMON
	goto_if 1, Route109_SeashoreHouse_EventScript_CheckTrainersCompletion_2
	goto Route109_SeashoreHouse_EventScript_CheckTrainersCompletion_1

Route109_SeashoreHouse_EventScript_CheckTrainersCompletion_4:
# 86 "data/maps/Route109_SeashoreHouse/scripts.pory"
	checktrainerflag TRAINER_JOHANNA
	goto_if 1, Route109_SeashoreHouse_EventScript_CheckTrainersCompletion_3
	goto Route109_SeashoreHouse_EventScript_CheckTrainersCompletion_1


Route109_SeashoreHouse_Text_SeashoreHouseIntro::
# 92 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "I'm the owner of the SEASHORE HOUSE.\n"
	.string "But you can call me MR. SEA!\p"
	.string "What I love above all is to see hot\n"
	.string "POKéMON battles.\p"
	.string "Let me see that your heart burns hot!\p"
	.string "If you can defeat all the TRAINERS\n"
	.string "here, I'll reward your efforts.$"

Route109_SeashoreHouse_Text_ShowMeSomeHotMatches::
# 105 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Show me some hot matches!\p"
	.string "I run this SEASHORE HOUSE just for\n"
	.string "that reason alone!$"

Route109_SeashoreHouse_Text_TakeTheseSodaPopBottles::
# 112 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "You're scorching hot!\n"
	.string "Those battles blazed!\l"
	.string "I'm more than just satisfied!\p"
	.string "As thanks for showing me your hot\n"
	.string "streak, I want you to take these.\p"
	.string "It's half a dozen bottles of SODA POP!$"

Route109_SeashoreHouse_Text_BagFull::
# 123 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Oh, but hey, your BAG's jammed full.\n"
	.string "I'll hang on to these for you.$"

Route109_SeashoreHouse_Text_WantToBuySodaPop::
# 128 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Want to buy some SODA POP?\n"
	.string "POKéMON love it!\p"
	.string "Just ¥300 a bottle!\n"
	.string "Buy some!$"

Route109_SeashoreHouse_Text_HereYouGo::
# 136 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Here you go!$"

Route109_SeashoreHouse_Text_NotEnoughMoney::
# 140 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "You don't have the money.$"

Route109_SeashoreHouse_Text_ThatsTooBad::
# 144 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "No?\n"
	.string "That's too bad.$"

Route109_SeashoreHouse_Text_DwayneIntro::
# 149 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "If you're looking for a battle in the\n"
	.string "SEASHORE HOUSE, you'll find no\l"
	.string "hotter TRAINER than me, matey!$"

Route109_SeashoreHouse_Text_DwayneDefeated::
# 155 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "That was a hot battle!\n"
	.string "I can accept that loss, matey!$"

Route109_SeashoreHouse_Text_DwaynePostBattle::
# 160 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Whenever I'm in SLATEPORT, I enjoy\n"
	.string "hot battles and ice-cold SODA POP!$"

Route109_SeashoreHouse_Text_JohannaIntro::
# 165 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Boring battles aren't worth the effort.\p"
	.string "Fiery hot battles are what toughen up\n"
	.string "TRAINERS and POKéMON!$"

Route109_SeashoreHouse_Text_JohannaDefeated::
# 172 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "That's hot!$"

Route109_SeashoreHouse_Text_JohannaPostBattle::
# 176 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Whew, I'm all thirsty.\n"
	.string "Maybe I'll have a SODA POP.$"

Route109_SeashoreHouse_Text_SimonIntro::
# 181 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "I'm going to show you how great\n"
	.string "my POKéMON are, but don't cry!$"

Route109_SeashoreHouse_Text_SimonDefeated::
# 186 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "…I lost, but I won't cry…$"

Route109_SeashoreHouse_Text_SimonPostBattle::
# 190 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "If one of my POKéMON knew the move\n"
	.string "for carrying me across water on its\l"
	.string "back, I could get rid of this inner tube.$"
