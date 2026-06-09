SootopolisCity_House6_MapScripts::
	.byte 0


SootopolisCity_House6_EventScript_Woman::
# 4 "data/maps/SootopolisCity_House6/scripts.pory"
	lock_faceplayer
# 5 "data/maps/SootopolisCity_House6/scripts.pory"
	goto_if_set FLAG_RECEIVED_WAILMER_DOLL, SootopolisCity_House6_EventScript_Woman_2
# 9 "data/maps/SootopolisCity_House6/scripts.pory"
	msgbox SootopolisCity_House6_Text_FirstGuestInWhileTakeDoll, MSGBOX_YESNO
# 10 "data/maps/SootopolisCity_House6/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SootopolisCity_House6_EventScript_Woman_5
# 14 "data/maps/SootopolisCity_House6/scripts.pory"
	msgbox SootopolisCity_House6_Text_TakeGoodCareOfIt, MSGBOX_DEFAULT
	givedecoration DECOR_WAILMER_DOLL
# 0 "data/maps/SootopolisCity_House6/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SootopolisCity_House6_EventScript_Woman_8
# 21 "data/maps/SootopolisCity_House6/scripts.pory"
	setflag FLAG_RECEIVED_WAILMER_DOLL
	release_end

SootopolisCity_House6_EventScript_Woman_2:
# 6 "data/maps/SootopolisCity_House6/scripts.pory"
	msgbox SootopolisCity_House6_Text_LovePlushDolls, MSGBOX_DEFAULT
	release_end

SootopolisCity_House6_EventScript_Woman_5:
# 11 "data/maps/SootopolisCity_House6/scripts.pory"
	msgbox SootopolisCity_House6_Text_DontWantThisDoll, MSGBOX_DEFAULT
	release_end

SootopolisCity_House6_EventScript_Woman_8:
# 16 "data/maps/SootopolisCity_House6/scripts.pory"
	bufferdecorationname STR_VAR_2, DECOR_WAILMER_DOLL
# 17 "data/maps/SootopolisCity_House6/scripts.pory"
	msgbox gText_NoRoomLeftForAnother, MSGBOX_DEFAULT
# 18 "data/maps/SootopolisCity_House6/scripts.pory"
	msgbox SootopolisCity_House6_Text_IllHoldItForYou, MSGBOX_DEFAULT
	release_end


SootopolisCity_House6_Text_FirstGuestInWhileTakeDoll::
# 25 "data/maps/SootopolisCity_House6/scripts.pory"
	.string "Hello! You're our first guest in\n"
	.string "a good while.\p"
	.string "You've brightened up my day, so I'll\n"
	.string "give you a big WAILMER DOLL.$"

SootopolisCity_House6_Text_TakeGoodCareOfIt::
# 33 "data/maps/SootopolisCity_House6/scripts.pory"
	.string "Take good care of it!$"

SootopolisCity_House6_Text_IllHoldItForYou::
# 37 "data/maps/SootopolisCity_House6/scripts.pory"
	.string "Oh, you want it, but not right now?\n"
	.string "Okay, then I'll hold it for you.$"

SootopolisCity_House6_Text_DontWantThisDoll::
# 42 "data/maps/SootopolisCity_House6/scripts.pory"
	.string "Are you sure?\n"
	.string "You don't want this DOLL?$"

SootopolisCity_House6_Text_LovePlushDolls::
# 47 "data/maps/SootopolisCity_House6/scripts.pory"
	.string "I love plush DOLLS!$"
