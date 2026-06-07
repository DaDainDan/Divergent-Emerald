MirageTower_4F_MapScripts::
	.byte 0


MirageTower_4F_EventScript_RootFossil::
# 4 "data/maps/MirageTower_4F/scripts.pory"
	lock_faceplayer
# 5 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_TakeRootFossil, MSGBOX_YESNO
# 6 "data/maps/MirageTower_4F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MirageTower_4F_EventScript_RootFossil_2
	giveitem ITEM_ROOT_FOSSIL
# 0 "data/maps/MirageTower_4F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MirageTower_4F_EventScript_RootFossil_5
MirageTower_4F_EventScript_RootFossil_4:
# 13 "data/maps/MirageTower_4F/scripts.pory"
	closemessage
# 14 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_ROOT_FOSSIL
# 15 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_CLAW_FOSSIL
# 16 "data/maps/MirageTower_4F/scripts.pory"
	removeobject LOCALID_MIRAGE_ROOT_FOSSIL
# 17 "data/maps/MirageTower_4F/scripts.pory"
	delay 30
# 18 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_CHOSE_ROOT_FOSSIL
# 19 "data/maps/MirageTower_4F/scripts.pory"
	goto MirageTower_4F_EventScript_CollapseMirageTower
	end

MirageTower_4F_EventScript_RootFossil_2:
# 7 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_LeftRootFossilAlone, MSGBOX_DEFAULT
	release_end

MirageTower_4F_EventScript_RootFossil_5:
# 11 "data/maps/MirageTower_4F/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto MirageTower_4F_EventScript_RootFossil_4


MirageTower_4F_EventScript_ClawFossil::
# 24 "data/maps/MirageTower_4F/scripts.pory"
	lock_faceplayer
# 25 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_TakeClawFossil, MSGBOX_YESNO
# 26 "data/maps/MirageTower_4F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MirageTower_4F_EventScript_ClawFossil_2
	giveitem ITEM_CLAW_FOSSIL
# 0 "data/maps/MirageTower_4F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MirageTower_4F_EventScript_ClawFossil_5
MirageTower_4F_EventScript_ClawFossil_4:
# 33 "data/maps/MirageTower_4F/scripts.pory"
	closemessage
# 34 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_CLAW_FOSSIL
# 35 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_ROOT_FOSSIL
# 36 "data/maps/MirageTower_4F/scripts.pory"
	removeobject LOCALID_MIRAGE_CLAW_FOSSIL
# 37 "data/maps/MirageTower_4F/scripts.pory"
	delay 30
# 38 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_CHOSE_CLAW_FOSSIL
# 39 "data/maps/MirageTower_4F/scripts.pory"
	goto MirageTower_4F_EventScript_CollapseMirageTower
	end

MirageTower_4F_EventScript_ClawFossil_2:
# 27 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_LeaveClawFossilAlone, MSGBOX_DEFAULT
	release_end

MirageTower_4F_EventScript_ClawFossil_5:
# 31 "data/maps/MirageTower_4F/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto MirageTower_4F_EventScript_ClawFossil_4


MirageTower_4F_EventScript_CollapseMirageTower::
# 44 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x8004, 1
# 45 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x8005, 1
# 46 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x8006, 32
# 47 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x8007, 2
# 48 "data/maps/MirageTower_4F/scripts.pory"
	special ShakeCamera
# 49 "data/maps/MirageTower_4F/scripts.pory"
	waitstate
# 50 "data/maps/MirageTower_4F/scripts.pory"
	special DoMirageTowerCeilingCrumble
# 51 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_MIRAGE_TOWER_STATE, 1
# 52 "data/maps/MirageTower_4F/scripts.pory"
	clearflag FLAG_LANDMARK_MIRAGE_TOWER
# 53 "data/maps/MirageTower_4F/scripts.pory"
	warp MAP_ROUTE111, 19, 59
# 54 "data/maps/MirageTower_4F/scripts.pory"
	waitstate
	release_end


MirageTower_4F_Text_TakeRootFossil::
# 58 "data/maps/MirageTower_4F/scripts.pory"
	.string "You found the ROOT FOSSIL.\p"
	.string "If this FOSSIL is taken, the ground\n"
	.string "around it will likely crumble away…\p"
	.string "Take the ROOT FOSSIL anyway?$"

MirageTower_4F_Text_LeftRootFossilAlone::
# 67 "data/maps/MirageTower_4F/scripts.pory"
	.string "{PLAYER} left the ROOT FOSSIL alone.$"

MirageTower_4F_Text_TakeClawFossil::
# 71 "data/maps/MirageTower_4F/scripts.pory"
	.string "You found the CLAW FOSSIL.\p"
	.string "If this FOSSIL is taken, the ground\n"
	.string "around it will likely crumble away…\p"
	.string "Take the CLAW FOSSIL anyway?$"

MirageTower_4F_Text_LeaveClawFossilAlone::
# 80 "data/maps/MirageTower_4F/scripts.pory"
	.string "{PLAYER} left the CLAW FOSSIL alone.$"
