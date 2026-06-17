MtMoon_B2F_Frlg_MapScripts::
# 2 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtMoon_B2F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MtMoon_B2F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_FOSSIL_FROM_MT_MOON, MtMoon_B2F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
MtMoon_B2F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

MtMoon_B2F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	clearflag FLAG_HIDE_DOME_FOSSIL
# 5 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	clearflag FLAG_HIDE_HELIX_FOSSIL
	goto MtMoon_B2F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


MtMoon_B2F_EventScript_MiguelTrigger::
# 12 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	lockall
# 13 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	applymovement LOCALID_MIGUEL, Common_Movement_StepFasterRight
# 14 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	waitmovement 0
# 15 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	call MtMoon_B2F_EventScript_BattleMiguel
# 16 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	releaseall
	end


MtMoon_B2F_EventScript_Miguel::
# 21 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	lock_faceplayer
# 22 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_FOSSIL_FROM_MT_MOON, MtMoon_B2F_EventScript_Miguel_2
# 25 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	checktrainerflag TRAINER_SUPER_NERD_MIGUEL
	goto_if 1, MtMoon_B2F_EventScript_Miguel_3
# 29 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	call MtMoon_B2F_EventScript_BattleMiguel
MtMoon_B2F_EventScript_Miguel_1:
	release_end

MtMoon_B2F_EventScript_Miguel_2:
# 23 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	msgbox MtMoon_B2F_Text_LabOnCinnabarRegeneratesFossils
	goto MtMoon_B2F_EventScript_Miguel_1

MtMoon_B2F_EventScript_Miguel_3:
# 26 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	msgbox MtMoon_B2F_Text_WellEachTakeAFossil
	goto MtMoon_B2F_EventScript_Miguel_1


MtMoon_B2F_EventScript_BattleMiguel::
# 35 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 36 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	message MtMoon_B2F_Text_MiguelIntro
# 37 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	waitmessage
# 38 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GYM_LEADER, 0
# 39 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	waitbuttonpress
# 40 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_MIGUEL
# 41 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_SUPER_NERD_MIGUEL, MtMoon_B2F_Text_MiguelDefeat
# 42 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_MT_MOON_B2F, 1
# 43 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	msgbox MtMoon_B2F_Text_WellEachTakeAFossil
	return


MtMoon_B2F_EventScript_DomeFossil::
# 48 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	lock_faceplayer
# 49 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	msgbox MtMoon_B2F_Text_YouWantDomeFossil, MSGBOX_YESNO
# 50 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MtMoon_B2F_EventScript_DomeFossil_2
MtMoon_B2F_EventScript_DomeFossil_1:
	release_end

MtMoon_B2F_EventScript_DomeFossil_2:
# 51 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	removeobject LOCALID_DOME_FOSSIL
# 52 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	giveitem_msg MtMoon_B2F_Text_ObtainedDomeFossil, ITEM_DOME_FOSSIL, 1, MUS_RG_OBTAIN_KEY_ITEM
# 53 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	closemessage
# 54 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	delay 10
# 55 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	applymovement LOCALID_MIGUEL, MtMoon_B2F_EventScript_DomeFossil_Movement_0
# 56 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	waitmovement 0
# 57 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	call MtMoon_B2F_EventScript_MiguelGrabFossil
# 58 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	removeobject LOCALID_HELIX_FOSSIL
# 59 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	setflag FLAG_GOT_DOME_FOSSIL
# 60 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	setflag FLAG_GOT_FOSSIL_FROM_MT_MOON
	goto MtMoon_B2F_EventScript_DomeFossil_1


MtMoon_B2F_EventScript_HelixFossil::
# 66 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	lock_faceplayer
# 67 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	msgbox MtMoon_B2F_Text_YouWantHelixFossil, MSGBOX_YESNO
# 68 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MtMoon_B2F_EventScript_HelixFossil_2
MtMoon_B2F_EventScript_HelixFossil_1:
	release_end

MtMoon_B2F_EventScript_HelixFossil_2:
# 69 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	removeobject LOCALID_HELIX_FOSSIL
# 70 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	giveitem_msg MtMoon_B2F_Text_ObtainedHelixFossil, ITEM_HELIX_FOSSIL, 1, MUS_RG_OBTAIN_KEY_ITEM
# 71 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	closemessage
# 72 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	delay 10
# 73 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	applymovement LOCALID_MIGUEL, MtMoon_B2F_EventScript_HelixFossil_Movement_0
# 74 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	waitmovement 0
# 75 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	call MtMoon_B2F_EventScript_MiguelGrabFossil
# 76 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	removeobject LOCALID_DOME_FOSSIL
# 77 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	setflag FLAG_GOT_HELIX_FOSSIL
# 78 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	setflag FLAG_GOT_FOSSIL_FROM_MT_MOON
	goto MtMoon_B2F_EventScript_HelixFossil_1


MtMoon_B2F_EventScript_MiguelGrabFossil::
# 84 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	copyobjectxytoperm LOCALID_MIGUEL
# 85 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 86 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 87 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	message MtMoon_B2F_Text_ThenThisFossilIsMine
# 88 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	waitmessage
# 89 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	waitfanfare
	return


MtMoon_B2F_EventScript_Grunt1::
# 94 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT, MtMoon_B2F_Text_Grunt1Intro, MtMoon_B2F_Text_Grunt1Defeat
# 95 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	msgbox MtMoon_B2F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end


MtMoon_B2F_EventScript_Grunt2::
# 100 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_2, MtMoon_B2F_Text_Grunt2Intro, MtMoon_B2F_Text_Grunt2Defeat
# 101 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	msgbox MtMoon_B2F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end


MtMoon_B2F_EventScript_Grunt3::
# 106 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_3, MtMoon_B2F_Text_Grunt3Intro, MtMoon_B2F_Text_Grunt3Defeat
# 107 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	msgbox MtMoon_B2F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end


MtMoon_B2F_EventScript_Grunt4::
# 112 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_4, MtMoon_B2F_Text_Grunt4Intro, MtMoon_B2F_Text_Grunt4Defeat
# 113 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	msgbox MtMoon_B2F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
	end


# 55 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_EventScript_DomeFossil_Movement_0:
# 55 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	walk_right
# 55 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	walk_up
# 55 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	walk_up
# 55 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	walk_up
	step_end

# 73 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_EventScript_HelixFossil_Movement_0:
# 73 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	walk_up
# 73 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	walk_up
# 73 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	walk_up
	step_end

MtMoon_B2F_Text_MiguelIntro::
# 117 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "Hey, stop!\p"
	.string "I found these fossils!\n"
	.string "They're both mine!$"

MtMoon_B2F_Text_MiguelDefeat::
# 124 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "Okay!\n"
	.string "I'll share!$"

MtMoon_B2F_Text_WellEachTakeAFossil::
# 129 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "We'll each take a fossil!\n"
	.string "No being greedy!$"

MtMoon_B2F_Text_ThenThisFossilIsMine::
# 134 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "All right.\n"
	.string "Then this fossil is mine!$"

MtMoon_B2F_Text_LabOnCinnabarRegeneratesFossils::
# 139 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "Far away, on CINNABAR ISLAND,\n"
	.string "there's a POKéMON LAB.\p"
	.string "They do research on regenerating\n"
	.string "fossils.$"

MtMoon_B2F_Text_Grunt1Intro::
# 147 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "We, TEAM ROCKET, shall find the\n"
	.string "fossils!\p"
	.string "Reviving POKéMON from them will\n"
	.string "earn us huge riches!$"

MtMoon_B2F_Text_Grunt1Defeat::
# 155 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "Urgh!\n"
	.string "Now I'm mad!$"

MtMoon_B2F_Text_Grunt1PostBattle::
# 160 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "You made me mad!\n"
	.string "TEAM ROCKET will blacklist you!$"

MtMoon_B2F_Text_Grunt2Intro::
# 165 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "We, TEAM ROCKET, are POKéMON\n"
	.string "gangsters!\l"
	.string "We strike fear with our strength!$"

MtMoon_B2F_Text_Grunt2Defeat::
# 171 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "I blew it!$"

MtMoon_B2F_Text_Grunt2PostBattle::
# 175 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "Darn it all!\n"
	.string "My associates won't stand for this!$"

MtMoon_B2F_Text_Grunt3Intro::
# 180 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "We're pulling a big job here!\n"
	.string "Get lost, kid!$"

MtMoon_B2F_Text_Grunt3Defeat::
# 185 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "So, you are good…$"

MtMoon_B2F_Text_Grunt3PostBattle::
# 189 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "If you find a fossil, give it to me\n"
	.string "and scram!$"

MtMoon_B2F_Text_Grunt4Intro::
# 194 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "Little kids shouldn't be messing\n"
	.string "around with grown-ups!\p"
	.string "It could be bad news!$"

MtMoon_B2F_Text_Grunt4Defeat::
# 201 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "I'm steamed!$"

MtMoon_B2F_Text_Grunt4PostBattle::
# 205 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "POKéMON lived here long before\n"
	.string "people came.$"

MtMoon_B2F_Text_YouWantDomeFossil::
# 210 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "Do you want the DOME FOSSIL?$"

MtMoon_B2F_Text_YouWantHelixFossil::
# 214 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "Do you want the HELIX FOSSIL?$"

MtMoon_B2F_Text_ObtainedHelixFossil::
# 218 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "Obtained the HELIX FOSSIL!$"

MtMoon_B2F_Text_ObtainedDomeFossil::
# 222 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "Obtained the DOME FOSSIL!$"
