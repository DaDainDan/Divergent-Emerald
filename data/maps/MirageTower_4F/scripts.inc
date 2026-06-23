MirageTower_4F_MapScripts::
# 2 "data/maps/MirageTower_4F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MirageTower_4F_MapScripts_MAP_SCRIPT_ON_RESUME
# 8 "data/maps/MirageTower_4F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MirageTower_4F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MirageTower_4F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, MirageTower_4F_MapScripts_MAP_SCRIPT_ON_RESUME_3
MirageTower_4F_MapScripts_MAP_SCRIPT_ON_RESUME_1:
	end

MirageTower_4F_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 4 "data/maps/MirageTower_4F/scripts.pory"
	removeobject VAR_LAST_TALKED
	goto MirageTower_4F_MapScripts_MAP_SCRIPT_ON_RESUME_1

MirageTower_4F_MapScripts_MAP_SCRIPT_ON_RESUME_3:
	specialvar VAR_RESULT, GetBattleOutcome
# 0 "data/maps/MirageTower_4F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq MirageTower_4F_MapScripts_MAP_SCRIPT_ON_RESUME_2
	goto MirageTower_4F_MapScripts_MAP_SCRIPT_ON_RESUME_1

MirageTower_4F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 9 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_unset FLAG_DEFEATED_MIRAGE_TOWER_COFAGRIGUS, MirageTower_4F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
MirageTower_4F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

MirageTower_4F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 10 "data/maps/MirageTower_4F/scripts.pory"
	clearflag FLAG_HIDE_MIRAGE_TOWER_COFAGRIGUS
	goto MirageTower_4F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


MirageTower_4F_EventScript_Cofagrigus::
# 17 "data/maps/MirageTower_4F/scripts.pory"
	lock_faceplayer
# 18 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x8004, 1
# 19 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x8005, 1
# 20 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x8006, 8
# 21 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x8007, 5
# 22 "data/maps/MirageTower_4F/scripts.pory"
	special ShakeCamera
# 23 "data/maps/MirageTower_4F/scripts.pory"
	waitstate
# 24 "data/maps/MirageTower_4F/scripts.pory"
	setwildbattle SPECIES_COFAGRIGUS, 50, ITEM_REAPER_CLOTH
# 25 "data/maps/MirageTower_4F/scripts.pory"
	waitse
# 26 "data/maps/MirageTower_4F/scripts.pory"
	playmoncry SPECIES_COFAGRIGUS, CRY_MODE_ENCOUNTER
# 27 "data/maps/MirageTower_4F/scripts.pory"
	delay 40
# 28 "data/maps/MirageTower_4F/scripts.pory"
	waitmoncry
# 29 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 30 "data/maps/MirageTower_4F/scripts.pory"
	dowildbattle
# 31 "data/maps/MirageTower_4F/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 32 "data/maps/MirageTower_4F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 33 "data/maps/MirageTower_4F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq MirageTower_4F_EventScript_Cofagrigus_2
# 33 "data/maps/MirageTower_4F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq MirageTower_4F_EventScript_Cofagrigus_2
# 33 "data/maps/MirageTower_4F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq MirageTower_4F_EventScript_Cofagrigus_2
MirageTower_4F_EventScript_Cofagrigus_1:
# 37 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_DEFEATED_MIRAGE_TOWER_COFAGRIGUS
	release_end

MirageTower_4F_EventScript_Cofagrigus_2:
# 34 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_DEFEATED_MIRAGE_TOWER_COFAGRIGUS
# 35 "data/maps/MirageTower_4F/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto MirageTower_4F_EventScript_Cofagrigus_1


MirageTower_4F_EventScript_HelixFossil::
# 42 "data/maps/MirageTower_4F/scripts.pory"
	lock_faceplayer
# 43 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_TakeHelixFossil, MSGBOX_YESNO
# 44 "data/maps/MirageTower_4F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MirageTower_4F_EventScript_HelixFossil_2
	giveitem ITEM_HELIX_FOSSIL
# 0 "data/maps/MirageTower_4F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MirageTower_4F_EventScript_HelixFossil_5
MirageTower_4F_EventScript_HelixFossil_4:
# 51 "data/maps/MirageTower_4F/scripts.pory"
	closemessage
# 52 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_HELIX_FOSSIL
# 53 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_DOME_FOSSIL
# 54 "data/maps/MirageTower_4F/scripts.pory"
	removeobject LOCALID_MIRAGE_HELIX_FOSSIL
# 55 "data/maps/MirageTower_4F/scripts.pory"
	delay 30
# 56 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_CHOSE_HELIX_FOSSIL
# 57 "data/maps/MirageTower_4F/scripts.pory"
	goto MirageTower_4F_EventScript_CollapseMirageTower
	end

MirageTower_4F_EventScript_HelixFossil_2:
# 45 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_LeftHelixFossilAlone, MSGBOX_DEFAULT
	release_end

MirageTower_4F_EventScript_HelixFossil_5:
# 49 "data/maps/MirageTower_4F/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto MirageTower_4F_EventScript_HelixFossil_4


MirageTower_4F_EventScript_DomeFossil::
# 62 "data/maps/MirageTower_4F/scripts.pory"
	lock_faceplayer
# 63 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_TakeDomeFossil, MSGBOX_YESNO
# 64 "data/maps/MirageTower_4F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MirageTower_4F_EventScript_DomeFossil_2
	giveitem ITEM_DOME_FOSSIL
# 0 "data/maps/MirageTower_4F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MirageTower_4F_EventScript_DomeFossil_5
MirageTower_4F_EventScript_DomeFossil_4:
# 71 "data/maps/MirageTower_4F/scripts.pory"
	closemessage
# 72 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_DOME_FOSSIL
# 73 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_HELIX_FOSSIL
# 74 "data/maps/MirageTower_4F/scripts.pory"
	removeobject LOCALID_MIRAGE_DOME_FOSSIL
# 75 "data/maps/MirageTower_4F/scripts.pory"
	delay 30
# 76 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_CHOSE_DOME_FOSSIL
# 77 "data/maps/MirageTower_4F/scripts.pory"
	goto MirageTower_4F_EventScript_CollapseMirageTower
	end

MirageTower_4F_EventScript_DomeFossil_2:
# 65 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_LeaveDomeFossilAlone, MSGBOX_DEFAULT
	release_end

MirageTower_4F_EventScript_DomeFossil_5:
# 69 "data/maps/MirageTower_4F/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto MirageTower_4F_EventScript_DomeFossil_4


MirageTower_4F_EventScript_CollapseMirageTower::
# 82 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x8004, 1
# 83 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x8005, 1
# 84 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x8006, 32
# 85 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x8007, 2
# 86 "data/maps/MirageTower_4F/scripts.pory"
	special ShakeCamera
# 87 "data/maps/MirageTower_4F/scripts.pory"
	waitstate
# 88 "data/maps/MirageTower_4F/scripts.pory"
	special DoMirageTowerCeilingCrumble
# 89 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_MIRAGE_TOWER_STATE, 1
# 90 "data/maps/MirageTower_4F/scripts.pory"
	clearflag FLAG_LANDMARK_MIRAGE_TOWER
# 91 "data/maps/MirageTower_4F/scripts.pory"
	warp MAP_ROUTE111, 19, 59
# 92 "data/maps/MirageTower_4F/scripts.pory"
	waitstate
	release_end


MirageTower_4F_Text_TakeHelixFossil::
# 96 "data/maps/MirageTower_4F/scripts.pory"
	.string "You found the HELIX FOSSIL.\p"
	.string "If this FOSSIL is taken, the ground\n"
	.string "around it will likely crumble away…\p"
	.string "Take the HELIX FOSSIL anyway?$"

MirageTower_4F_Text_LeftHelixFossilAlone::
# 105 "data/maps/MirageTower_4F/scripts.pory"
	.string "{PLAYER} left the HELIX FOSSIL alone.$"

MirageTower_4F_Text_TakeDomeFossil::
# 109 "data/maps/MirageTower_4F/scripts.pory"
	.string "You found the DOME FOSSIL.\p"
	.string "If this FOSSIL is taken, the ground\n"
	.string "around it will likely crumble away…\p"
	.string "Take the DOME FOSSIL anyway?$"

MirageTower_4F_Text_LeaveDomeFossilAlone::
# 118 "data/maps/MirageTower_4F/scripts.pory"
	.string "{PLAYER} left the DOME FOSSIL alone.$"
