LilycoveCity_House2_MapScripts::
	.byte 0


LilycoveCity_House2_EventScript_FatMan::
# 4 "data/maps/LilycoveCity_House2/scripts.pory"
	lock_faceplayer
# 5 "data/maps/LilycoveCity_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_REST, LilycoveCity_House2_EventScript_FatMan_2
# 9 "data/maps/LilycoveCity_House2/scripts.pory"
	msgbox LilycoveCity_House2_Text_NotAwakeYetHaveThis, MSGBOX_DEFAULT
	giveitem ITEM_TM_REST
# 0 "data/maps/LilycoveCity_House2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LilycoveCity_House2_EventScript_FatMan_5
LilycoveCity_House2_EventScript_FatMan_4:
# 13 "data/maps/LilycoveCity_House2/scripts.pory"
	setflag FLAG_RECEIVED_TM_REST
# 14 "data/maps/LilycoveCity_House2/scripts.pory"
	msgbox LilycoveCity_House2_Text_SleepIsEssential, MSGBOX_DEFAULT
	release_end

LilycoveCity_House2_EventScript_FatMan_2:
# 6 "data/maps/LilycoveCity_House2/scripts.pory"
	msgbox LilycoveCity_House2_Text_SleepIsEssential, MSGBOX_DEFAULT
	release_end

LilycoveCity_House2_EventScript_FatMan_5:
# 11 "data/maps/LilycoveCity_House2/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto LilycoveCity_House2_EventScript_FatMan_4


LilycoveCity_House2_Text_NotAwakeYetHaveThis::
# 18 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "Huh? What? What's that?\p"
	.string "I'm not near awake yet…\n"
	.string "You can have this…$"

LilycoveCity_House2_Text_SleepIsEssential::
# 25 "data/maps/LilycoveCity_House2/scripts.pory"
	.string "Yawn…\p"
	.string "Sleep is essential for good health…\n"
	.string "Sleep and regain health…$"
