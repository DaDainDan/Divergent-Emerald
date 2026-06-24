MeteorFalls_1F_1R_MapScripts::
# 2 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MeteorFalls_1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

MeteorFalls_1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, MeteorFalls_1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_2
MeteorFalls_1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

MeteorFalls_1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 4 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 4, 1, METATILE_MeteorFalls_CaveEntrance_Top, TRUE
# 5 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 3, 2, METATILE_MeteorFalls_CaveEntrance_Left, TRUE
# 6 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 4, 2, METATILE_MeteorFalls_CaveEntrance_Bottom, FALSE
# 7 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 5, 2, METATILE_MeteorFalls_CaveEntrance_Right, TRUE
	goto MeteorFalls_1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD_1


MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene::
# 14 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lockall
# 15 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 16 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 17 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 18 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay 30
# 19 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_1, Common_Movement_StepDown
# 20 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 21 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_WithThisMeteorite, MSGBOX_DEFAULT
# 22 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 23 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_1, Common_Movement_StepFasterUp
# 24 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_2, Common_Movement_StepFasterUp
# 25 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 26 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playse SE_PIN
# 27 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_1, Common_Movement_ExclamationMark
# 28 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 29 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_1, Common_Movement_Delay48
# 30 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 31 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_DontExpectMercyFromMagma, MSGBOX_DEFAULT
# 32 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 33 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_1, MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Movement_0
# 34 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 35 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_HoldItRightThereMagma, MSGBOX_DEFAULT
# 36 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 37 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterLeft
# 38 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_1, Common_Movement_StepFasterLeft
# 39 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_2, Common_Movement_StepFasterLeft
# 40 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 41 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject LOCALID_METEOR_FALLS_ARCHIE
# 42 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject LOCALID_METEOR_FALLS_AQUA_GRUNT_1
# 43 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject LOCALID_METEOR_FALLS_AQUA_GRUNT_2
# 44 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 45 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_ARCHIE, MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Movement_1
# 46 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_AQUA_GRUNT_1, MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Movement_2
# 47 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_AQUA_GRUNT_2, MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Movement_2
# 48 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 49 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_1, Common_Movement_StepFasterLeft
# 50 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_2, Common_Movement_StepFasterLeft
# 51 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 52 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_BeSeeingYouTeamAqua, MSGBOX_DEFAULT
# 53 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 54 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_PLAYER, MeteorFalls_1F_1R_Movement_PushPlayerOutOfWay
# 55 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_1, MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Movement_3
# 56 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_MAGMA_GRUNT_2, MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Movement_4
# 57 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 58 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_METEOR_FALLS_MAGMA_GRUNT_1
# 59 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_METEOR_FALLS_MAGMA_GRUNT_2
# 60 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_ARCHIE, MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Movement_5
# 61 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 62 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_ArchieSeenYouBefore, MSGBOX_DEFAULT
# 63 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 64 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_AQUA_GRUNT_1, MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Movement_6
# 65 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_AQUA_GRUNT_2, MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Movement_6
# 66 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 67 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_BossWeShouldChaseMagma, MSGBOX_DEFAULT
# 68 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_ARCHIE, Common_Movement_StepFasterDown
# 69 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 70 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_ArchieYesNoTellingWhatMagmaWillDo, MSGBOX_DEFAULT
# 71 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_ARCHIE, Common_Movement_StepFasterLeft
# 72 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 73 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_ArchieFarewell, MSGBOX_DEFAULT
# 74 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 75 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_ARCHIE, MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Movement_7
# 76 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_AQUA_GRUNT_1, MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Movement_8
# 77 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_METEOR_FALLS_AQUA_GRUNT_2, MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Movement_9
# 78 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 79 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	fadedefaultbgm
# 80 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_METEOR_FALLS_ARCHIE
# 81 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_METEOR_FALLS_AQUA_GRUNT_1
# 82 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_METEOR_FALLS_AQUA_GRUNT_2
# 83 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_HIDE_ROUTE_112_TEAM_MAGMA
# 84 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_MET_ARCHIE_METEOR_FALLS
# 85 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_HIDE_FALLARBOR_TOWN_BATTLE_TENT_SCOTT
# 86 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setvar VAR_METEOR_FALLS_STATE, 1
# 87 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	releaseall
	end


# 91 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_PushPlayerOutOfWay:
# 93 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_faster_down
# 94 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_4
# 95 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_faster_right
# 96 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock_look
# 97 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 98 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	unlock_look
# 99 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	face_right
	step_end

MeteorFalls_1F_1R_EventScript_ProfCozmo::
# 103 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock_faceplayer
# 104 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	goto_if_set FLAG_MET_PROF_COZMO, MeteorFalls_1F_1R_EventScript_ProfCozmo_2
# 108 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_MET_PROF_COZMO
# 109 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_MeetProfCozmo, MSGBOX_DEFAULT
	release_end

MeteorFalls_1F_1R_EventScript_ProfCozmo_2:
# 105 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_WhatsTeamMagmaDoingAtMtChimney, MSGBOX_DEFAULT
	release_end


# 33 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Movement_0:
# 33 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 33 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 33 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_faster_up
	step_end

# 45 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Movement_1:
# 45 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 45 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 45 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 45 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 45 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 45 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
	step_end

# 46 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Movement_2:
# 46 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 46 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 46 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 46 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 46 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 46 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 46 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
	step_end

# 55 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Movement_3:
# 55 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	run_up
# 55 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	run_up
# 55 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	run_right
# 55 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	run_right
# 55 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	run_right
# 55 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	run_right
# 55 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	run_right
# 55 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	run_right
# 55 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	run_right
	step_end

# 56 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Movement_4:
# 56 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	run_up
# 56 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	run_up
# 56 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	run_up
# 56 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	run_right
# 56 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	run_right
# 56 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	run_right
# 56 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	run_right
# 56 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	run_right
# 56 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	run_right
# 56 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	run_right
	step_end

# 60 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Movement_5:
# 60 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 60 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 60 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 60 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 60 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_faster_left
	step_end

# 64 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Movement_6:
# 64 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 64 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 64 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 64 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_faster_up
	step_end

# 75 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Movement_7:
# 75 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 75 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 75 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 75 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 75 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 75 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 75 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
	step_end

# 76 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Movement_8:
# 76 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 76 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 76 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 76 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 76 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 76 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 76 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 76 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 76 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
	step_end

# 77 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene_Movement_9:
# 77 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 77 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 77 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 77 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 77 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 77 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 77 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 77 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 77 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 77 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
	step_end

MeteorFalls_1F_1R_Text_WithThisMeteorite::
# 113 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hehehe!\p"
	.string "With this METEORITE, that thing in\n"
	.string "MT. CHIMNEY will…$"

MeteorFalls_1F_1R_Text_DontExpectMercyFromMagma::
# 120 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Heh?\p"
	.string "I don't know who you are, but if you get\n"
	.string "in the way of TEAM MAGMA, don't\l"
	.string "expect any mercy!$"

MeteorFalls_1F_1R_Text_HoldItRightThereMagma::
# 128 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hold it right there, TEAM MAGMA!\p"
	.string "You're badly mistaken if you think you\n"
	.string "can have your way with the world!$"

MeteorFalls_1F_1R_Text_BeSeeingYouTeamAqua::
# 135 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hehehe!\n"
	.string "Even TEAM AQUA joins us!\p"
	.string "But it's too much trouble to deal with\n"
	.string "you all…\p"
	.string "Heh, it doesn't matter!\p"
	.string "We've got the METEORITE, so off to\n"
	.string "MT. CHIMNEY we go!\p"
	.string "Hehehe! Be seeing you, you TEAM\n"
	.string "AQUA dingbats!$"

MeteorFalls_1F_1R_Text_ArchieSeenYouBefore::
# 151 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "{SPEAKER NAME_ARCHIE}Didn't I see you before?\n"
	.string "At SLATEPORT's MUSEUM?\p"
	.string "Ah, so your name is {PLAYER}.\p"
	.string "At the time, I thought you were one\n"
	.string "of TEAM MAGMA's goons.\p"
	.string "Humph…\n"
	.string "You're one odd kid.\p"
	.string "TEAM MAGMA is a dangerous group of\n"
	.string "total fanatics.\p"
	.string "They engage in destruction, claiming\n"
	.string "to expand the land mass.\p"
	.string "They are the rivals to us,\n"
	.string "the sea-loving TEAM AQUA!$"

MeteorFalls_1F_1R_Text_BossWeShouldChaseMagma::
# 173 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "BOSS, we should give chase to\n"
	.string "TEAM MAGMA…$"

MeteorFalls_1F_1R_Text_ArchieYesNoTellingWhatMagmaWillDo::
# 178 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "{SPEAKER NAME_ARCHIE}Yes, yes, we must!\n"
	.string "We've got to hurry.\p"
	.string "There's no telling what TEAM MAGMA\n"
	.string "will do at MT. CHIMNEY!$"

MeteorFalls_1F_1R_Text_ArchieFarewell::
# 186 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "{SPEAKER NAME_ARCHIE}{PLAYER}, you should keep\n"
	.string "an eye out for TEAM MAGMA, too.\p"
	.string "Farewell!$"

MeteorFalls_1F_1R_Text_MeetProfCozmo::
# 193 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I… I'm COZMO…\n"
	.string "I'm a PROFESSOR…\p"
	.string "TEAM MAGMA asked me to guide them\n"
	.string "to METEOR FALLS…\p"
	.string "But they tricked me.\n"
	.string "They even took my METEORITE away…\p"
	.string "And then another similar bunch,\n"
	.string "TEAM AQUA showed up.\p"
	.string "After that…\n"
	.string "I don't understand any of it.\p"
	.string "But that TEAM MAGMA…\p"
	.string "What are they going to do with that\n"
	.string "METEORITE at MT. CHIMNEY?$"

MeteorFalls_1F_1R_Text_WhatsTeamMagmaDoingAtMtChimney::
# 215 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "{SPEAKER NAME_COZMO}But that TEAM MAGMA…\p"
	.string "What are they going to do with that\n"
	.string "METEORITE at MT. CHIMNEY?$"
