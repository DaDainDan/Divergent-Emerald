Route122_House_MapScripts::
	.byte 0


Route122_House_EventScript_SpellTagWoman::
# 4 "data/maps/Route122_House/scripts.pory"
	lock_faceplayer
# 5 "data/maps/Route122_House/scripts.pory"
	goto_if_set FLAG_RECEIVED_CLEANSE_TAG, Route122_House_EventScript_SpellTagWoman_2
# 9 "data/maps/Route122_House/scripts.pory"
	msgbox Route122_House_Text_TakeThisForYourOwnGood, MSGBOX_DEFAULT
	giveitem ITEM_SPELL_TAG
# 0 "data/maps/Route122_House/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route122_House_EventScript_SpellTagWoman_5
Route122_House_EventScript_SpellTagWoman_4:
# 13 "data/maps/Route122_House/scripts.pory"
	setflag FLAG_RECEIVED_CLEANSE_TAG
	release_end

Route122_House_EventScript_SpellTagWoman_2:
# 6 "data/maps/Route122_House/scripts.pory"
	msgbox Route122_House_Text_ExplainSpellTag, MSGBOX_DEFAULT
	release_end

Route122_House_EventScript_SpellTagWoman_5:
# 11 "data/maps/Route122_House/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto Route122_House_EventScript_SpellTagWoman_4


Route122_House_Text_TakeThisForYourOwnGood::
# 17 "data/maps/Route122_House/scripts.pory"
	.string "All sorts of beings wander the slopes\n"
	.string "of MT. PYRE…\p"
	.string "There is no telling what may happen.\n"
	.string "Take this. It's for your own good.$"

Route122_House_Text_ExplainSpellTag::
# 25 "data/maps/Route122_House/scripts.pory"
	.string "Have a POKéMON hold that\n"
	.string "SPELL TAG.\p"
	.string "It will help ward off wild POKéMON.$"
