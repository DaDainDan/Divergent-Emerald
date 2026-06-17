Route16_House_Frlg_MapScripts::
	.byte 0


Route16_House_EventScript_Woman::
# 4 "data/maps/Route16_House_Frlg/scripts.pory"
	lock_faceplayer
# 5 "data/maps/Route16_House_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_HM02, Route16_House_EventScript_Woman_2
# 9 "data/maps/Route16_House_Frlg/scripts.pory"
	msgbox Route16_House_Text_FoundMySecretRetreat
	checkitemspace ITEM_HM02
# 0 "data/maps/Route16_House_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route16_House_EventScript_Woman_5
# 14 "data/maps/Route16_House_Frlg/scripts.pory"
	giveitem_msg Route16_House_Text_ReceivedHM02FromGirl, ITEM_HM02
# 15 "data/maps/Route16_House_Frlg/scripts.pory"
	msgbox Route16_House_Text_ExplainHM02
# 16 "data/maps/Route16_House_Frlg/scripts.pory"
	setflag FLAG_GOT_HM02
	release_end

Route16_House_EventScript_Woman_2:
# 6 "data/maps/Route16_House_Frlg/scripts.pory"
	msgbox Route16_House_Text_ExplainHM02
	release_end

Route16_House_EventScript_Woman_5:
# 11 "data/maps/Route16_House_Frlg/scripts.pory"
	msgbox Route16_House_Text_DontHaveAnyRoomForThis
	release_end


Route16_House_EventScript_Fearow::
# 21 "data/maps/Route16_House_Frlg/scripts.pory"
	lock_faceplayer
# 22 "data/maps/Route16_House_Frlg/scripts.pory"
	waitse
# 23 "data/maps/Route16_House_Frlg/scripts.pory"
	playmoncry SPECIES_FEAROW, CRY_MODE_NORMAL
# 24 "data/maps/Route16_House_Frlg/scripts.pory"
	msgbox Route16_House_Text_Fearow
# 25 "data/maps/Route16_House_Frlg/scripts.pory"
	waitmoncry
	release_end


Route16_House_Text_FoundMySecretRetreat::
# 29 "data/maps/Route16_House_Frlg/scripts.pory"
	.string "Oh, dear.\n"
	.string "You've found my secret retreat.\p"
	.string "Please don't tell anyone I'm here.\n"
	.string "I'll make it up to you with this!$"

Route16_House_Text_ReceivedHM02FromGirl::
# 37 "data/maps/Route16_House_Frlg/scripts.pory"
	.string "{PLAYER} received HM02\n"
	.string "from the girl.$"

Route16_House_Text_ExplainHM02::
# 42 "data/maps/Route16_House_Frlg/scripts.pory"
	.string "HM02 is FLY.\n"
	.string "It's a wonderfully convenient move.\p"
	.string "Please, put it to good use.$"

Route16_House_Text_DontHaveAnyRoomForThis::
# 49 "data/maps/Route16_House_Frlg/scripts.pory"
	.string "You don't have any room for this.$"

Route16_House_Text_Fearow::
# 53 "data/maps/Route16_House_Frlg/scripts.pory"
	.string "FEAROW: Kyueen!$"
