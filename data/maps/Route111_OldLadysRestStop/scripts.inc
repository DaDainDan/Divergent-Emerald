Route111_OldLadysRestStop_MapScripts::
# 2 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route111_OldLadysRestStop_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route111_OldLadysRestStop_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	setflag FLAG_LANDMARK_OLD_LADY_REST_SHOP
	end


Route111_OldLadysRestStop_EventScript_OldLady::
# 9 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	lock_faceplayer
# 10 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	msgbox Route111_OldLadysRestStop_Text_RestUpHere, MSGBOX_YESNO
# 11 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route111_OldLadysRestStop_EventScript_OldLady_2
# 14 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	goto Route111_OldLadysRestStop_EventScript_DeclineRest
Route111_OldLadysRestStop_EventScript_OldLady_1:
	end

Route111_OldLadysRestStop_EventScript_OldLady_2:
# 12 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	goto Route111_OldLadysRestStop_EventScript_Rest
	goto Route111_OldLadysRestStop_EventScript_OldLady_1


Route111_OldLadysRestStop_EventScript_Rest::
# 20 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	msgbox Route111_OldLadysRestStop_Text_TakeYourTimeRestUp, MSGBOX_DEFAULT
# 21 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	closemessage
# 22 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 23 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	msgbox Route111_OldLadysRestStop_Text_StillTiredTakeAnotherRest, MSGBOX_YESNO
# 24 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route111_OldLadysRestStop_EventScript_Rest_2
# 27 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	goto Route111_OldLadysRestStop_EventScript_DeclineRest
Route111_OldLadysRestStop_EventScript_Rest_1:
	end

Route111_OldLadysRestStop_EventScript_Rest_2:
# 25 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	goto Route111_OldLadysRestStop_EventScript_Rest
	goto Route111_OldLadysRestStop_EventScript_Rest_1


Route111_OldLadysRestStop_EventScript_DeclineRest::
# 33 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	msgbox Route111_OldLadysRestStop_Text_DontNeedToBeShy, MSGBOX_DEFAULT
	release_end


Route111_OldLadysRestStop_Text_RestUpHere::
# 37 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	.string "Oh, dear, dear.\n"
	.string "Aren't your POKéMON exhausted?\p"
	.string "If you'd like, rest up here.\n"
	.string "That's a fine idea! You should do that.$"

Route111_OldLadysRestStop_Text_TakeYourTimeRestUp::
# 45 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	.string "That's right.\n"
	.string "Take your time and rest up!$"

Route111_OldLadysRestStop_Text_StillTiredTakeAnotherRest::
# 50 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	.string "Oh, dear, dear.\n"
	.string "Are your POKéMON still tired?\p"
	.string "You should take another rest here.\n"
	.string "That's a fine idea. You should do that.$"

Route111_OldLadysRestStop_Text_DontNeedToBeShy::
# 58 "data/maps/Route111_OldLadysRestStop/scripts.pory"
	.string "Is that so?\n"
	.string "You don't need to be shy about it.$"
