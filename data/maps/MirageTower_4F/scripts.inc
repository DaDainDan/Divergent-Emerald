# 1 "data/maps/MirageTower_4F/scripts.pory"

# 2 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_MapScripts::
# 3 "data/maps/MirageTower_4F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MirageTower_4F_OnResume
# 4 "data/maps/MirageTower_4F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MirageTower_4F_OnTransition
# 5 "data/maps/MirageTower_4F/scripts.pory"
	.byte 0
# 6 "data/maps/MirageTower_4F/scripts.pory"

# 7 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_OnResume:
# 8 "data/maps/MirageTower_4F/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, MirageTower_4F_EventScript_TryRemoveCofagrigus
# 9 "data/maps/MirageTower_4F/scripts.pory"
	end
# 10 "data/maps/MirageTower_4F/scripts.pory"

# 11 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_TryRemoveCofagrigus::
# 12 "data/maps/MirageTower_4F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 13 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 14 "data/maps/MirageTower_4F/scripts.pory"
	removeobject VAR_LAST_TALKED
# 15 "data/maps/MirageTower_4F/scripts.pory"
	return
# 16 "data/maps/MirageTower_4F/scripts.pory"

# 17 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_OnTransition:
# 18 "data/maps/MirageTower_4F/scripts.pory"
	call_if_unset FLAG_DEFEATED_MIRAGE_TOWER_COFAGRIGUS, MirageTower_4F_ShowCofagrigus
# 19 "data/maps/MirageTower_4F/scripts.pory"
	end
# 20 "data/maps/MirageTower_4F/scripts.pory"

# 21 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_ShowCofagrigus::
# 22 "data/maps/MirageTower_4F/scripts.pory"
	clearflag FLAG_HIDE_MIRAGE_TOWER_COFAGRIGUS
# 23 "data/maps/MirageTower_4F/scripts.pory"
	return
# 24 "data/maps/MirageTower_4F/scripts.pory"

# 25 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_Cofagrigus::
# 26 "data/maps/MirageTower_4F/scripts.pory"
	lock
# 27 "data/maps/MirageTower_4F/scripts.pory"
	faceplayer
# 28 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 29 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 30 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 31 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 32 "data/maps/MirageTower_4F/scripts.pory"
	special ShakeCamera
# 33 "data/maps/MirageTower_4F/scripts.pory"
	waitstate
# 34 "data/maps/MirageTower_4F/scripts.pory"
	setwildbattle SPECIES_COFAGRIGUS, 50, ITEM_REAPER_CLOTH
# 35 "data/maps/MirageTower_4F/scripts.pory"
	waitse
# 36 "data/maps/MirageTower_4F/scripts.pory"
	playmoncry SPECIES_COFAGRIGUS, CRY_MODE_ENCOUNTER
# 37 "data/maps/MirageTower_4F/scripts.pory"
	delay 40
# 38 "data/maps/MirageTower_4F/scripts.pory"
	waitmoncry
# 39 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 40 "data/maps/MirageTower_4F/scripts.pory"
	dowildbattle
# 41 "data/maps/MirageTower_4F/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 42 "data/maps/MirageTower_4F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 43 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, MirageTower_4F_DefeatedCofagrigus
# 44 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, MirageTower_4F_DefeatedCofagrigus
# 45 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, MirageTower_4F_DefeatedCofagrigus
# 46 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_DEFEATED_MIRAGE_TOWER_COFAGRIGUS
# 47 "data/maps/MirageTower_4F/scripts.pory"
	release
# 48 "data/maps/MirageTower_4F/scripts.pory"
	end
# 49 "data/maps/MirageTower_4F/scripts.pory"

# 50 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_DefeatedCofagrigus::
# 51 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_DEFEATED_MIRAGE_TOWER_COFAGRIGUS
# 52 "data/maps/MirageTower_4F/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 53 "data/maps/MirageTower_4F/scripts.pory"
	end
# 54 "data/maps/MirageTower_4F/scripts.pory"

# 55 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_RootFossil::
# 56 "data/maps/MirageTower_4F/scripts.pory"
	lock
# 57 "data/maps/MirageTower_4F/scripts.pory"
	faceplayer
# 58 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_TakeRootFossil, MSGBOX_YESNO
# 59 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MirageTower_4F_EventScript_LeaveRootFossil
# 60 "data/maps/MirageTower_4F/scripts.pory"
	giveitem ITEM_ROOT_FOSSIL
# 61 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 62 "data/maps/MirageTower_4F/scripts.pory"
	closemessage
# 63 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_ROOT_FOSSIL
# 64 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_CLAW_FOSSIL
# 65 "data/maps/MirageTower_4F/scripts.pory"
	removeobject LOCALID_MIRAGE_ROOT_FOSSIL
# 66 "data/maps/MirageTower_4F/scripts.pory"
	delay 30
# 67 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_CHOSE_ROOT_FOSSIL
# 68 "data/maps/MirageTower_4F/scripts.pory"
	goto MirageTower_4F_EventScript_CollapseMirageTower
# 69 "data/maps/MirageTower_4F/scripts.pory"
	end
# 70 "data/maps/MirageTower_4F/scripts.pory"

# 71 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_LeaveRootFossil::
# 72 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_LeftRootFossilAlone, MSGBOX_DEFAULT
# 73 "data/maps/MirageTower_4F/scripts.pory"
	release
# 74 "data/maps/MirageTower_4F/scripts.pory"
	end
# 75 "data/maps/MirageTower_4F/scripts.pory"

# 76 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_ClawFossil::
# 77 "data/maps/MirageTower_4F/scripts.pory"
	lock
# 78 "data/maps/MirageTower_4F/scripts.pory"
	faceplayer
# 79 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_TakeClawFossil, MSGBOX_YESNO
# 80 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MirageTower_4F_EventScript_LeaveClawFossil
# 81 "data/maps/MirageTower_4F/scripts.pory"
	giveitem ITEM_CLAW_FOSSIL
# 82 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 83 "data/maps/MirageTower_4F/scripts.pory"
	closemessage
# 84 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_CLAW_FOSSIL
# 85 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_ROOT_FOSSIL
# 86 "data/maps/MirageTower_4F/scripts.pory"
	removeobject LOCALID_MIRAGE_CLAW_FOSSIL
# 87 "data/maps/MirageTower_4F/scripts.pory"
	delay 30
# 88 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_CHOSE_CLAW_FOSSIL
# 89 "data/maps/MirageTower_4F/scripts.pory"
	goto MirageTower_4F_EventScript_CollapseMirageTower
# 90 "data/maps/MirageTower_4F/scripts.pory"
	end
# 91 "data/maps/MirageTower_4F/scripts.pory"

# 92 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_LeaveClawFossil::
# 93 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_LeaveClawFossilAlone, MSGBOX_DEFAULT
# 94 "data/maps/MirageTower_4F/scripts.pory"
	release
# 95 "data/maps/MirageTower_4F/scripts.pory"
	end
# 96 "data/maps/MirageTower_4F/scripts.pory"

# 97 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_CollapseMirageTower::
# 98 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x8004, 1   @ vertical pan
# 99 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x8005, 1   @ horizontal pan
# 100 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x8006, 32  @ num shakes
# 101 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x8007, 2   @ shake delay
# 102 "data/maps/MirageTower_4F/scripts.pory"
	special ShakeCamera
# 103 "data/maps/MirageTower_4F/scripts.pory"
	waitstate
# 104 "data/maps/MirageTower_4F/scripts.pory"
	special DoMirageTowerCeilingCrumble
# 105 "data/maps/MirageTower_4F/scripts.pory"
	waitstate
# 106 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_MIRAGE_TOWER_STATE, 1
# 107 "data/maps/MirageTower_4F/scripts.pory"
	clearflag FLAG_LANDMARK_MIRAGE_TOWER
# 108 "data/maps/MirageTower_4F/scripts.pory"
	warp MAP_ROUTE111, 19, 59
# 109 "data/maps/MirageTower_4F/scripts.pory"
	waitstate
# 110 "data/maps/MirageTower_4F/scripts.pory"
	release
# 111 "data/maps/MirageTower_4F/scripts.pory"
	end
# 112 "data/maps/MirageTower_4F/scripts.pory"

# 113 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_Text_TakeRootFossil:
# 114 "data/maps/MirageTower_4F/scripts.pory"
	.string "You found the ROOT FOSSIL.\p"
# 115 "data/maps/MirageTower_4F/scripts.pory"
	.string "If this FOSSIL is taken, the ground\n"
# 116 "data/maps/MirageTower_4F/scripts.pory"
	.string "around it will likely crumble away…\p"
# 117 "data/maps/MirageTower_4F/scripts.pory"
	.string "Take the ROOT FOSSIL anyway?$"
# 118 "data/maps/MirageTower_4F/scripts.pory"

# 119 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_Text_LeftRootFossilAlone:
# 120 "data/maps/MirageTower_4F/scripts.pory"
	.string "{PLAYER} left the ROOT FOSSIL alone.$"
# 121 "data/maps/MirageTower_4F/scripts.pory"

# 122 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_Text_TakeClawFossil:
# 123 "data/maps/MirageTower_4F/scripts.pory"
	.string "You found the CLAW FOSSIL.\p"
# 124 "data/maps/MirageTower_4F/scripts.pory"
	.string "If this FOSSIL is taken, the ground\n"
# 125 "data/maps/MirageTower_4F/scripts.pory"
	.string "around it will likely crumble away…\p"
# 126 "data/maps/MirageTower_4F/scripts.pory"
	.string "Take the CLAW FOSSIL anyway?$"
# 127 "data/maps/MirageTower_4F/scripts.pory"

# 128 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_Text_LeaveClawFossilAlone:
# 129 "data/maps/MirageTower_4F/scripts.pory"
	.string "{PLAYER} left the CLAW FOSSIL alone.$"
