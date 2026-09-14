RustboroCity_CuttersHouse_MapScripts::
	.byte 0


RustboroCity_CuttersHouse_EventScript_Lass::
# 4 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_Text_WontStopTraining, MSGBOX_NPC
	end


RustboroCity_CuttersHouse_EventScript_MoveTutor::
# 9 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	lock_faceplayer
# 10 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	goto_if_unset FLAG_MET_RUSTBORO_CUTTING_TUTOR, RustboroCity_CuttersHouse_EventScript_MoveTutor_2
RustboroCity_CuttersHouse_EventScript_MoveTutor_1:
# 14 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	goto_if_unset FLAG_BADGE05_GET, RustboroCity_CuttersHouse_EventScript_MoveTutor_5
# 18 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	goto_if_unset FLAG_CUTTER_REQUIREMENT, RustboroCity_CuttersHouse_EventScript_MoveTutor_8
# 22 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_Text_ChooseTechnique, MSGBOX_DEFAULT
RustboroCity_CuttersHouse_EventScript_MoveTutor_7:
# 24 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	setvar VAR_TEMP_C, SCROLL_MULTI_CUTTER_MOVE_TUTOR
# 25 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	setvar VAR_0x8006, 0
# 26 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	goto RustboroCity_CuttersHouse_EventScript_ChooseCutterMove
	end

RustboroCity_CuttersHouse_EventScript_MoveTutor_2:
# 11 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_Text_CutterIntro, MSGBOX_DEFAULT
# 12 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	setflag FLAG_MET_RUSTBORO_CUTTING_TUTOR
	goto RustboroCity_CuttersHouse_EventScript_MoveTutor_1

RustboroCity_CuttersHouse_EventScript_MoveTutor_5:
# 15 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_Text_UnworthyNovice, MSGBOX_DEFAULT
	release_end

RustboroCity_CuttersHouse_EventScript_MoveTutor_8:
# 19 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_Text_YouAreWorthy, MSGBOX_DEFAULT
# 20 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	setflag FLAG_CUTTER_REQUIREMENT
	goto RustboroCity_CuttersHouse_EventScript_MoveTutor_7


RustboroCity_CuttersHouse_EventScript_ChooseCutterMove::
# 31 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_CUTTER_MOVE_TUTOR
# 32 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	special ShowScrollableMultichoice
# 33 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
# 34 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	switch VAR_RESULT
# 35 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	case 0, RustboroCity_CuttersHouse_EventScript_ChooseCutterMove_3
# 36 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	case 1, RustboroCity_CuttersHouse_EventScript_ChooseCutterMove_4
# 37 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	case 2, RustboroCity_CuttersHouse_EventScript_ChooseCutterMove_5
# 38 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	case 3, RustboroCity_CuttersHouse_EventScript_ChooseCutterMove_6
# 39 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	case 4, RustboroCity_CuttersHouse_EventScript_ChooseCutterMove_7
# 40 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	case 5, RustboroCity_CuttersHouse_EventScript_ChooseCutterMove_8
# 41 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	case 6, RustboroCity_CuttersHouse_EventScript_ChooseCutterMove_9
# 42 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	case 7, RustboroCity_CuttersHouse_EventScript_ChooseCutterMove_10
# 43 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	case 8, RustboroCity_CuttersHouse_EventScript_ChooseCutterMove_11
# 44 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	case 9, RustboroCity_CuttersHouse_EventScript_ChooseCutterMove_12
# 45 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	case MULTI_B_PRESSED, RustboroCity_CuttersHouse_EventScript_ChooseCutterMove_12
RustboroCity_CuttersHouse_EventScript_ChooseCutterMove_1:
# 48 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	goto RustboroCity_CuttersHouse_EventScript_ConfirmMoveSelection
	end

RustboroCity_CuttersHouse_EventScript_ChooseCutterMove_3:
# 35 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SLASH
	goto RustboroCity_CuttersHouse_EventScript_ChooseCutterMove_1

RustboroCity_CuttersHouse_EventScript_ChooseCutterMove_4:
# 36 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_NIGHT_SLASH
	goto RustboroCity_CuttersHouse_EventScript_ChooseCutterMove_1

RustboroCity_CuttersHouse_EventScript_ChooseCutterMove_5:
# 37 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_LEAF_BLADE
	goto RustboroCity_CuttersHouse_EventScript_ChooseCutterMove_1

RustboroCity_CuttersHouse_EventScript_ChooseCutterMove_6:
# 38 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_AERIAL_ACE
	goto RustboroCity_CuttersHouse_EventScript_ChooseCutterMove_1

RustboroCity_CuttersHouse_EventScript_ChooseCutterMove_7:
# 39 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_AIR_SLASH
	goto RustboroCity_CuttersHouse_EventScript_ChooseCutterMove_1

RustboroCity_CuttersHouse_EventScript_ChooseCutterMove_8:
# 40 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_PSYCHO_CUT
	goto RustboroCity_CuttersHouse_EventScript_ChooseCutterMove_1

RustboroCity_CuttersHouse_EventScript_ChooseCutterMove_9:
# 41 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_AQUA_CUTTER
	goto RustboroCity_CuttersHouse_EventScript_ChooseCutterMove_1

RustboroCity_CuttersHouse_EventScript_ChooseCutterMove_10:
# 42 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_SHINING_SLASH
	goto RustboroCity_CuttersHouse_EventScript_ChooseCutterMove_1

RustboroCity_CuttersHouse_EventScript_ChooseCutterMove_11:
# 43 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	setvar VAR_0x8005, MOVE_HONE_CLAWS
	goto RustboroCity_CuttersHouse_EventScript_ChooseCutterMove_1

RustboroCity_CuttersHouse_EventScript_ChooseCutterMove_12:
# 46 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	goto RustboroCity_CuttersHouse_EventScript_ExitTutorMoveSelect
	goto RustboroCity_CuttersHouse_EventScript_ChooseCutterMove_1


RustboroCity_CuttersHouse_EventScript_ExitTutorMoveSelect::
# 53 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	special CloseBattleFrontierTutorWindow
# 54 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_Text_DeclineTutor, MSGBOX_DEFAULT
	release_end


RustboroCity_CuttersHouse_EventScript_ConfirmMoveSelection::
# 59 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	special BufferBattleFrontierTutorMoveName
# 60 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_Text_TributeRedShard, MSGBOX_YESNO
# 61 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq RustboroCity_CuttersHouse_EventScript_ConfirmMoveSelection_2
RustboroCity_CuttersHouse_EventScript_ConfirmMoveSelection_1:
	checkitem ITEM_RED_SHARD
# 0 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_CuttersHouse_EventScript_ConfirmMoveSelection_5
# 84 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_Text_NoRedShard, MSGBOX_DEFAULT
# 85 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	goto RustboroCity_CuttersHouse_EventScript_ExitTutorMoveSelect
	end

RustboroCity_CuttersHouse_EventScript_ConfirmMoveSelection_2:
# 62 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	message RustboroCity_CuttersHouse_EventScript_ConfirmMoveSelection_Text_0
# 64 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	waitmessage
# 65 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	setvar VAR_0x8006, 1
# 66 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	goto RustboroCity_CuttersHouse_EventScript_ChooseCutterMove
	goto RustboroCity_CuttersHouse_EventScript_ConfirmMoveSelection_1

RustboroCity_CuttersHouse_EventScript_ConfirmMoveSelection_5:
# 69 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_EventScript_ConfirmMoveSelection_Text_1, MSGBOX_DEFAULT
# 71 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 72 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	special CloseBattleFrontierTutorWindow
# 73 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	chooseboxmon SELECT_PC_MON_MOVE_TUTOR
# 74 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	waitstate
# 75 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_CuttersHouse_EventScript_ConfirmMoveSelection_8
# 79 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_EventScript_ConfirmMoveSelection_Text_2, MSGBOX_DEFAULT
# 81 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	removeitem ITEM_RED_SHARD, 1
	release_end

RustboroCity_CuttersHouse_EventScript_ConfirmMoveSelection_8:
# 76 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_Text_DeclineTutor, MSGBOX_DEFAULT
	release_end


RustboroCity_CuttersHouse_EventScript_ConfirmMoveSelection_Text_0:
# 62 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Is there another technique you wish\n"
	.string "to master?$"

RustboroCity_CuttersHouse_EventScript_ConfirmMoveSelection_Text_1:
# 69 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Which of your POKéMON shall learn\n"
	.string "this technique?$"

RustboroCity_CuttersHouse_EventScript_ConfirmMoveSelection_Text_2:
# 79 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Grant me more RED SHARDS, and my power\n"
	.string "will become yours.$"

RustboroCity_CuttersHouse_Text_DeclineTutor::
# 89 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Hah, pupils don't waste a master's time.\p"
	.string "A true swordsman is swift and resolute.\n"
	.string "One who hesitates is doomed for defeat.$"

RustboroCity_CuttersHouse_Text_NoRedShard::
# 96 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Unacceptable.\p"
	.string "Return once you obtain a RED SHARD.$"

RustboroCity_CuttersHouse_Text_TributeRedShard::
# 102 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "They say RED SHARDS originate from\n"
	.string "the war ornaments of old.\p"
	.string "I will always demand one as tribute.\p"
	.string "Are you prepared to pay a RED SHARD\n"
	.string "as tribute?$"

RustboroCity_CuttersHouse_Text_ChooseTechnique::
# 112 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Back to learn more arts of the blade?\p"
	.string "Very well.\p"
	.string "What technique invigorates your\n"
	.string "fighting spirit?$"

RustboroCity_CuttersHouse_Text_YouAreWorthy::
# 121 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "So…\n"
	.string "You've defeated NORMAN, have you?\p"
	.string "You are worthy of my skills after all.\p"
	.string "Now, what skill shall I teach first?$"

RustboroCity_CuttersHouse_Text_UnworthyNovice::
# 130 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "You are still a novice and naive to the \n"
	.string "art of battle.\p"
	.string "You are not yet worthy of my teachings.\p"
	.string "Return once you have refined your\n"
	.string "skills and earned many more victories.$"

RustboroCity_CuttersHouse_Text_CutterIntro::
# 140 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Hello, young TRAINER.\n"
	.string "I'm known as the CUTTER.\p"
	.string "I am known by that name because I have \n"
	.string "fully mastered the art of the sword.\p"
	.string "Many seek to be my students, but few\n"
	.string "are worthy of becoming my pupil.$"

RustboroCity_CuttersHouse_Text_WontStopTraining::
# 151 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "My grandfather still won't let me be \n"
	.string "his apprentice.\p"
	.string "I won't stop training until he thinks \n"
	.string "I'm worthy enough.$"

RustboroCity_CuttersHouse_Text_SlashDesc::
# 159 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "A Normal-type\n"
	.string "slash that has\n"
	.string "high crit rate.$"

RustboroCity_CuttersHouse_Text_NightSlashDesc::
# 165 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "A Dark-type slash\n"
	.string "that always crits\n"
	.string "low HP targets.$"

RustboroCity_CuttersHouse_Text_LeafBladeDesc::
# 171 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "A Grass-type\n"
	.string "slash that has\n"
	.string "high crit rate.$"

RustboroCity_CuttersHouse_Text_SwallowReversalDesc::
# 177 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "A Flying-type\n"
	.string "slash that ignores\n"
	.string "protection.$"

RustboroCity_CuttersHouse_Text_AirSlashDesc::
# 183 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "A Flying-type\n"
	.string "slash that has\n"
	.string "high crit rate.$"

RustboroCity_CuttersHouse_Text_PsychoCutDesc::
# 189 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "A Psychic-type\n"
	.string "slash that has\n"
	.string "high crit rate.$"

RustboroCity_CuttersHouse_Text_AquaCutterDesc::
# 195 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "A Water-type\n"
	.string "slash that has\n"
	.string "high crit rate.$"

RustboroCity_CuttersHouse_Text_ShiningSlashDesc::
# 201 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "A Steel-type\n"
	.string "slash that has\n"
	.string "high crit rate.$"

RustboroCity_CuttersHouse_Text_HoneEdgeDesc::
# 207 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "A sharpening move\n"
	.string "that increases\n"
	.string "Atk and crit rate.$"
