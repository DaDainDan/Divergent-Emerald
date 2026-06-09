MtPyre_1F_MapScripts::
	.byte 0


MtPyre_1F_EventScript_CleanseTagWoman::
# 4 "data/maps/MtPyre_1F/scripts.pory"
	lock_faceplayer
# 5 "data/maps/MtPyre_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_CLEANSE_TAG, MtPyre_1F_EventScript_CleanseTagWoman_2
# 9 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_TakeThisForYourOwnGood, MSGBOX_DEFAULT
	giveitem ITEM_CLEANSE_TAG
# 0 "data/maps/MtPyre_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MtPyre_1F_EventScript_CleanseTagWoman_5
MtPyre_1F_EventScript_CleanseTagWoman_4:
# 13 "data/maps/MtPyre_1F/scripts.pory"
	setflag FLAG_RECEIVED_CLEANSE_TAG
	release_end

MtPyre_1F_EventScript_CleanseTagWoman_2:
# 6 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_ExplainCleanseTag, MSGBOX_DEFAULT
	release_end

MtPyre_1F_EventScript_CleanseTagWoman_5:
# 11 "data/maps/MtPyre_1F/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto MtPyre_1F_EventScript_CleanseTagWoman_4


MtPyre_1F_EventScript_PokefanF::
# 18 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_ComeToPayRespects, MSGBOX_NPC
	end


MtPyre_1F_EventScript_Man::
# 23 "data/maps/MtPyre_1F/scripts.pory"
	msgbox MtPyre_1F_Text_RestingPlaceOfZigzagoon, MSGBOX_NPC
	end


MtPyre_1F_Text_TakeThisForYourOwnGood::
# 27 "data/maps/MtPyre_1F/scripts.pory"
	.string "All sorts of beings wander the slopes\n"
	.string "of MT. PYRE…\p"
	.string "There is no telling what may happen.\n"
	.string "Take this. It's for your own good.$"

MtPyre_1F_Text_ExplainCleanseTag::
# 35 "data/maps/MtPyre_1F/scripts.pory"
	.string "Have a POKéMON hold that\n"
	.string "CLEANSE TAG.\p"
	.string "It will help ward off wild POKéMON.$"

MtPyre_1F_Text_ComeToPayRespects::
# 42 "data/maps/MtPyre_1F/scripts.pory"
	.string "Did you come to pay your respect\n"
	.string "to the spirits of departed POKéMON?\p"
	.string "You must care for your POKéMON a lot.$"

MtPyre_1F_Text_RestingPlaceOfZigzagoon::
# 49 "data/maps/MtPyre_1F/scripts.pory"
	.string "This is the final resting place of my\n"
	.string "ZIGZAGOON. I cherished it…$"
