Route12_NorthEntrance_2F_Frlg_MapScripts::
	.byte 0


Route12_NorthEntrance_2F_EventScript_LeftBinoculars::
# 4 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	msgbox Route12_NorthEntrance_2F_Text_TheresManFishing, MSGBOX_SIGN
	end


Route12_NorthEntrance_2F_EventScript_RightBinoculars::
# 9 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	msgbox Route12_NorthEntrance_2F_Text_ItsPokemonTower, MSGBOX_SIGN
	end


Route12_NorthEntrance_2F_EventScript_Lass::
# 14 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	lock_faceplayer
# 15 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_TM27, Route12_NorthEntrance_2F_EventScript_Lass_2
	checkplayergender
# 0 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route12_NorthEntrance_2F_EventScript_Lass_5
# 22 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	msgbox Route12_NorthEntrance_2F_Text_TakeTMDontNeedAnymoreFemale
Route12_NorthEntrance_2F_EventScript_Lass_4:
	checkitemspace ITEM_TM27
# 0 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route12_NorthEntrance_2F_EventScript_Lass_9
# 27 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	giveitem_msg Route12_NorthEntrance_2F_Text_ReceivedTM27FromLittleGirl, ITEM_TM27
# 28 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	msgbox Route12_NorthEntrance_2F_Text_ExplainTM27
# 29 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	setflag FLAG_GOT_TM27
Route12_NorthEntrance_2F_EventScript_Lass_8:
	release_end

Route12_NorthEntrance_2F_EventScript_Lass_2:
# 16 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	msgbox Route12_NorthEntrance_2F_Text_ExplainTM27
	release_end

Route12_NorthEntrance_2F_EventScript_Lass_5:
# 20 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	msgbox Route12_NorthEntrance_2F_Text_TakeTMDontNeedAnymoreMale
	goto Route12_NorthEntrance_2F_EventScript_Lass_4

Route12_NorthEntrance_2F_EventScript_Lass_9:
# 25 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	msgbox Route12_NorthEntrance_2F_Text_DontHaveRoomForThis
	goto Route12_NorthEntrance_2F_EventScript_Lass_8


Route12_NorthEntrance_2F_Text_TakeTMDontNeedAnymoreMale::
# 35 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	.string "My POKéMON's ashes are stored in\n"
	.string "POKéMON TOWER.\p"
	.string "You can have this TM.\n"
	.string "I don't need it anymore…$"

Route12_NorthEntrance_2F_Text_TakeTMDontNeedAnymoreFemale::
# 43 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	.string "My POKéMON's ashes are stored in\n"
	.string "POKéMON TOWER.\p"
	.string "You can have this TM.\n"
	.string "I don't need it anymore…$"

Route12_NorthEntrance_2F_Text_ReceivedTM27FromLittleGirl::
# 51 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	.string "{PLAYER} received TM27\n"
	.string "from the little girl.$"

Route12_NorthEntrance_2F_Text_ExplainTM27::
# 56 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	.string "TM27 is a move called RETURN…\p"
	.string "If you treat your POKéMON good,\n"
	.string "it will return your love by working\l"
	.string "its hardest in battle.$"

Route12_NorthEntrance_2F_Text_DontHaveRoomForThis::
# 64 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	.string "You don't have room for this.$"

Route12_NorthEntrance_2F_Text_TheresManFishing::
# 68 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	.string "Let's see what the binoculars have\n"
	.string "to show…\p"
	.string "There's a man fishing!$"

Route12_NorthEntrance_2F_Text_ItsPokemonTower::
# 75 "data/maps/Route12_NorthEntrance_2F_Frlg/scripts.pory"
	.string "Let's see what the binoculars have\n"
	.string "to show…\p"
	.string "It's POKéMON TOWER!$"
