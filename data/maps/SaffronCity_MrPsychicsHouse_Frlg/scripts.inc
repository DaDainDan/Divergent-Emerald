SaffronCity_MrPsychicsHouse_Frlg_MapScripts::
	.byte 0


SaffronCity_MrPsychicsHouse_EventScript_MrPsychic::
# 4 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	lock_faceplayer
# 5 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_TM29_FROM_MR_PSYCHIC, SaffronCity_MrPsychicsHouse_EventScript_MrPsychic_2
# 9 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	msgbox SaffronCity_MrPsychicsHouse_Text_YouWantedThis
	checkitemspace ITEM_TM29
# 0 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SaffronCity_MrPsychicsHouse_EventScript_MrPsychic_5
# 14 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	giveitem_msg SaffronCity_MrPsychicsHouse_Text_ReceivedTM29FromMrPsychic, ITEM_TM29
# 15 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	msgbox SaffronCity_MrPsychicsHouse_Text_ExplainTM29
# 16 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	setflag FLAG_GOT_TM29_FROM_MR_PSYCHIC
	release_end

SaffronCity_MrPsychicsHouse_EventScript_MrPsychic_2:
# 6 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	msgbox SaffronCity_MrPsychicsHouse_Text_ExplainTM29
	release_end

SaffronCity_MrPsychicsHouse_EventScript_MrPsychic_5:
# 11 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	msgbox SaffronCity_MrPsychicsHouse_Text_YouveNoRoom
	release_end


SaffronCity_MrPsychicsHouse_Text_YouWantedThis::
# 20 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	.string "…Wait! Don't say a word!\p"
	.string "You wanted this!$"

SaffronCity_MrPsychicsHouse_Text_ReceivedTM29FromMrPsychic::
# 26 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	.string "{PLAYER} received TM29\n"
	.string "from MR. PSYCHIC.$"

SaffronCity_MrPsychicsHouse_Text_ExplainTM29::
# 31 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	.string "You already know, don't you?\n"
	.string "TM29 is PSYCHIC.\p"
	.string "It's an attack that may also lower\n"
	.string "the target's special stats.$"

SaffronCity_MrPsychicsHouse_Text_YouveNoRoom::
# 39 "data/maps/SaffronCity_MrPsychicsHouse_Frlg/scripts.pory"
	.string "Where do you plan to put this?\n"
	.string "You've no room.$"
