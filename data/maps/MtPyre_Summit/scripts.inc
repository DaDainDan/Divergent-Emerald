MtPyre_Summit_MapScripts::
# 2 "data/maps/MtPyre_Summit/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtPyre_Summit_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MtPyre_Summit_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_MT_PYRE_STATE, 2
	goto_if_eq MtPyre_Summit_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
MtPyre_Summit_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

MtPyre_Summit_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/MtPyre_Summit/scripts.pory"
	setobjectxyperm LOCALID_MT_PYRE_SUMMIT_MAXIE, 23, 6
# 5 "data/maps/MtPyre_Summit/scripts.pory"
	setobjectxyperm LOCALID_MT_PYRE_SUMMIT_ARCHIE, 22, 6
	goto MtPyre_Summit_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


MtPyre_Summit_EventScript_TeamAquaTrigger0::
# 12 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 13 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 0
# 14 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_TeamAquaExits
	end


MtPyre_Summit_EventScript_TeamAquaTrigger1::
# 19 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 20 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 1
# 21 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_TeamAquaExits
	end


MtPyre_Summit_EventScript_TeamAquaTrigger2::
# 26 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 27 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 2
# 28 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_TeamAquaExits
	end


MtPyre_Summit_EventScript_TeamAquaExits::
# 33 "data/maps/MtPyre_Summit/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 34 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 35 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 36 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, Common_Movement_StepFasterDown
# 37 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 38 "data/maps/MtPyre_Summit/scripts.pory"
	delay 50
# 39 "data/maps/MtPyre_Summit/scripts.pory"
	switch VAR_0x8008
# 40 "data/maps/MtPyre_Summit/scripts.pory"
	case 0, MtPyre_Summit_EventScript_TeamAquaExits_3
# 41 "data/maps/MtPyre_Summit/scripts.pory"
	case 2, MtPyre_Summit_EventScript_TeamAquaExits_4
MtPyre_Summit_EventScript_TeamAquaExits_1:
# 43 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 44 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_ArchieWeGotTheOrbLetsGo, MSGBOX_DEFAULT
# 45 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 46 "data/maps/MtPyre_Summit/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 47 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SUMMIT_ARCHIE
# 48 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SUMMIT_GRUNT_1
# 49 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SUMMIT_GRUNT_2
# 50 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SUMMIT_GRUNT_3
# 51 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SUMMIT_GRUNT_4
# 52 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_HIDE_MT_PYRE_SUMMIT_ARCHIE
# 53 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_HIDE_MT_PYRE_SUMMIT_TEAM_AQUA
# 54 "data/maps/MtPyre_Summit/scripts.pory"
	fadedefaultbgm
# 55 "data/maps/MtPyre_Summit/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 56 "data/maps/MtPyre_Summit/scripts.pory"
	delay 20
# 57 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_MT_PYRE_STATE, 1
# 58 "data/maps/MtPyre_Summit/scripts.pory"
	switch VAR_0x8008
# 59 "data/maps/MtPyre_Summit/scripts.pory"
	case 0, MtPyre_Summit_EventScript_TeamAquaExits_7
# 63 "data/maps/MtPyre_Summit/scripts.pory"
	case 1, MtPyre_Summit_EventScript_TeamAquaExits_8
# 65 "data/maps/MtPyre_Summit/scripts.pory"
	case 2, MtPyre_Summit_EventScript_TeamAquaExits_9
MtPyre_Summit_EventScript_TeamAquaExits_5:
# 70 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_BothOrbsTakenMagmaLeftThis, MSGBOX_DEFAULT
# 71 "data/maps/MtPyre_Summit/scripts.pory"
	giveitem ITEM_MAGMA_EMBLEM
# 72 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_RECEIVED_RED_OR_BLUE_ORB
# 73 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_HIDE_JAGGED_PASS_MAGMA_GUARD
# 74 "data/maps/MtPyre_Summit/scripts.pory"
	releaseall
	end

MtPyre_Summit_EventScript_TeamAquaExits_3:
# 40 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_EventScript_TeamAquaExits_Movement_0
	goto MtPyre_Summit_EventScript_TeamAquaExits_1

MtPyre_Summit_EventScript_TeamAquaExits_4:
# 41 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_EventScript_TeamAquaExits_Movement_1
	goto MtPyre_Summit_EventScript_TeamAquaExits_1

MtPyre_Summit_EventScript_TeamAquaExits_7:
# 60 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_OLD_LADY, MtPyre_Summit_EventScript_TeamAquaExits_Movement_2
# 61 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 62 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterRight
	goto MtPyre_Summit_EventScript_TeamAquaExits_5

MtPyre_Summit_EventScript_TeamAquaExits_8:
# 64 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_OLD_LADY, Common_Movement_WalkDown
	goto MtPyre_Summit_EventScript_TeamAquaExits_5

MtPyre_Summit_EventScript_TeamAquaExits_9:
# 66 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_OLD_LADY, MtPyre_Summit_EventScript_TeamAquaExits_Movement_3
# 67 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 68 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterLeft
	goto MtPyre_Summit_EventScript_TeamAquaExits_5


MtPyre_Summit_EventScript_OldMan::
# 79 "data/maps/MtPyre_Summit/scripts.pory"
	lock_faceplayer
# 80 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, MtPyre_Summit_EventScript_OldMan_2
# 86 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_WillYouHearOutMyTale, MSGBOX_YESNO
# 87 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MtPyre_Summit_EventScript_OldMan_10
MtPyre_Summit_EventScript_OldMan_1:
# 91 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MtPyre_Summit_EventScript_OldMan_6
MtPyre_Summit_EventScript_OldMan_5:
	release_end

MtPyre_Summit_EventScript_OldMan_2:
# 81 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_HearTheNewLegendOfHoenn, MSGBOX_YESNO
# 82 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MtPyre_Summit_EventScript_OldMan_8
	goto MtPyre_Summit_EventScript_OldMan_1

MtPyre_Summit_EventScript_OldMan_6:
# 92 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_WellThatTooIsFine, MSGBOX_DEFAULT
	goto MtPyre_Summit_EventScript_OldMan_5

MtPyre_Summit_EventScript_OldMan_8:
# 83 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_HoennTrioTale, MSGBOX_DEFAULT
	goto MtPyre_Summit_EventScript_OldMan_1

MtPyre_Summit_EventScript_OldMan_10:
# 88 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_GroudonKyogreTale, MSGBOX_DEFAULT
	goto MtPyre_Summit_EventScript_OldMan_1


MtPyre_Summit_EventScript_OldLady::
# 98 "data/maps/MtPyre_Summit/scripts.pory"
	lock_faceplayer
# 99 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_set FLAG_RETURNED_RED_OR_BLUE_ORB, MtPyre_Summit_EventScript_OldLady_2
# 102 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_MT_PYRE_STATE, 3
	goto_if_ge MtPyre_Summit_EventScript_OldLady_3
# 106 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_set FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, MtPyre_Summit_EventScript_OldLady_4
# 110 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_OrbsHaveBeenTaken, MSGBOX_DEFAULT
MtPyre_Summit_EventScript_OldLady_1:
	release_end

MtPyre_Summit_EventScript_OldLady_2:
# 100 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_SuperAncientPokemonTaughtUs, MSGBOX_DEFAULT
	goto MtPyre_Summit_EventScript_OldLady_1

MtPyre_Summit_EventScript_OldLady_3:
# 103 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_ThoseTwoMenReturnedOrbs, MSGBOX_DEFAULT
# 104 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_RETURNED_RED_OR_BLUE_ORB
	goto MtPyre_Summit_EventScript_OldLady_1

MtPyre_Summit_EventScript_OldLady_4:
# 107 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_GroudonKyogreAwakened, MSGBOX_DEFAULT
	goto MtPyre_Summit_EventScript_OldLady_1


MtPyre_Summit_EventScript_ArchieMaxieTrigger0::
# 116 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 117 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 0
# 118 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
	end


MtPyre_Summit_EventScript_ArchieMaxieTrigger1::
# 123 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 124 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 1
# 125 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
	end


MtPyre_Summit_EventScript_ArchieMaxieTrigger2::
# 130 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 131 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 2
# 132 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
	end


MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs::
# 137 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
# 138 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 139 "data/maps/MtPyre_Summit/scripts.pory"
	delay 60
# 140 "data/maps/MtPyre_Summit/scripts.pory"
	switch VAR_0x8008
# 141 "data/maps/MtPyre_Summit/scripts.pory"
	case 0, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_3
# 142 "data/maps/MtPyre_Summit/scripts.pory"
	case 1, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_4
# 143 "data/maps/MtPyre_Summit/scripts.pory"
	case 2, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_5
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_1:
# 145 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_3
# 146 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_3
# 147 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 148 "data/maps/MtPyre_Summit/scripts.pory"
	playse SE_PIN
# 149 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, Common_Movement_ExclamationMark
# 150 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 151 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, Common_Movement_Delay48
# 152 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 153 "data/maps/MtPyre_Summit/scripts.pory"
	delay 30
# 154 "data/maps/MtPyre_Summit/scripts.pory"
	switch VAR_0x8008
# 155 "data/maps/MtPyre_Summit/scripts.pory"
	case 0, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_8
# 159 "data/maps/MtPyre_Summit/scripts.pory"
	case 1, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_9
# 163 "data/maps/MtPyre_Summit/scripts.pory"
	case 2, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_10
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_6:
# 168 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 169 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_MaxieSilence, MSGBOX_DEFAULT
# 170 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 171 "data/maps/MtPyre_Summit/scripts.pory"
	switch VAR_0x8008
# 172 "data/maps/MtPyre_Summit/scripts.pory"
	case 0, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_13
# 175 "data/maps/MtPyre_Summit/scripts.pory"
	case 1, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_14
# 178 "data/maps/MtPyre_Summit/scripts.pory"
	case 2, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_15
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_11:
# 182 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 183 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, Common_Movement_StepFasterRight
# 184 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 185 "data/maps/MtPyre_Summit/scripts.pory"
	delay 30
# 186 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_3
# 187 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_3
# 188 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 189 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SUMMIT_ARCHIE
# 190 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SUMMIT_MAXIE
# 191 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_MT_PYRE_STATE, 3
# 192 "data/maps/MtPyre_Summit/scripts.pory"
	releaseall
	end

MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_3:
# 141 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PLAYER, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_0
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_1

MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_4:
# 142 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PLAYER, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_1
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_1

MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_5:
# 143 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PLAYER, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_2
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_1

MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_8:
# 156 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PLAYER, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_4
# 157 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_5
# 158 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_6
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_6

MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_9:
# 160 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PLAYER, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_7
# 161 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_5
# 162 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_8
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_6

MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_10:
# 164 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PLAYER, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_7
# 165 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_5
# 166 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_8
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_6

MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_13:
# 173 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PLAYER, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_9
# 174 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_10
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_11

MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_14:
# 176 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PLAYER, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_9
# 177 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_11
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_11

MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_15:
# 179 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PLAYER, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_9
# 180 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_11
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_11


MtPyre_Summit_EventScript_Grunt1::
# 197 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_1, MtPyre_Summit_Text_Grunt1Intro, MtPyre_Summit_Text_Grunt1Defeat
# 198 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end


MtPyre_Summit_EventScript_Grunt2::
# 203 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_2, MtPyre_Summit_Text_Grunt2Intro, MtPyre_Summit_Text_Grunt2Defeat
# 204 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end


MtPyre_Summit_EventScript_Grunt3::
# 209 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_3, MtPyre_Summit_Text_Grunt3Intro, MtPyre_Summit_Text_Grunt3Defeat
# 210 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end


MtPyre_Summit_EventScript_Grunt4::
# 215 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_4, MtPyre_Summit_Text_Grunt4Intro, MtPyre_Summit_Text_Grunt4Defeat
# 216 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
	end


# 40 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaExits_Movement_0:
# 40 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 40 "data/maps/MtPyre_Summit/scripts.pory"
	step_faster_down
	step_end

# 41 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaExits_Movement_1:
# 41 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 41 "data/maps/MtPyre_Summit/scripts.pory"
	step_faster_down
	step_end

# 60 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaExits_Movement_2:
# 60 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 60 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 60 "data/maps/MtPyre_Summit/scripts.pory"
	step_faster_left
	step_end

# 66 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaExits_Movement_3:
# 66 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 66 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 66 "data/maps/MtPyre_Summit/scripts.pory"
	step_faster_right
	step_end

# 141 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_0:
# 141 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 141 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 141 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 141 "data/maps/MtPyre_Summit/scripts.pory"
	step_faster_right
# 141 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 141 "data/maps/MtPyre_Summit/scripts.pory"
	step_faster_down
	step_end

# 142 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_1:
# 142 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 142 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 142 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 142 "data/maps/MtPyre_Summit/scripts.pory"
	step_faster_left
# 142 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 142 "data/maps/MtPyre_Summit/scripts.pory"
	step_faster_down
	step_end

# 143 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_2:
# 143 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 143 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 143 "data/maps/MtPyre_Summit/scripts.pory"
	step_faster_left
# 143 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 143 "data/maps/MtPyre_Summit/scripts.pory"
	step_faster_down
	step_end

# 145 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_3:
# 145 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 145 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 145 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 145 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 145 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 145 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
	step_end

# 156 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_4:
# 156 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 156 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 156 "data/maps/MtPyre_Summit/scripts.pory"
	step_faster_right
	step_end

# 157 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_5:
# 157 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 157 "data/maps/MtPyre_Summit/scripts.pory"
	step_faster_up
	step_end

# 158 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_6:
# 158 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 158 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 158 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 158 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
	step_end

# 160 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_7:
# 160 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 160 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 160 "data/maps/MtPyre_Summit/scripts.pory"
	step_faster_left
	step_end

# 162 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_8:
# 162 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 162 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 162 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 162 "data/maps/MtPyre_Summit/scripts.pory"
	step_faster_right
	step_end

# 173 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_9:
# 173 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 173 "data/maps/MtPyre_Summit/scripts.pory"
	step_faster_down
	step_end

# 174 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_10:
# 174 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 174 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 174 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 174 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 174 "data/maps/MtPyre_Summit/scripts.pory"
	step_faster_left
	step_end

# 177 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_11:
# 177 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 177 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 177 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 177 "data/maps/MtPyre_Summit/scripts.pory"
	step_faster_left
	step_end

MtPyre_Summit_Text_Grunt1Intro::
# 220 "data/maps/MtPyre_Summit/scripts.pory"
	.string "No! Those TEAM MAGMA goons got\n"
	.string "here ahead of us!\p"
	.string "We can't fall behind!$"

MtPyre_Summit_Text_Grunt1Defeat::
# 227 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I thought you were one of the MAGMAS\n"
	.string "who happened to come back…$"

MtPyre_Summit_Text_Grunt1PostBattle::
# 232 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Yeah, so you are strong…\n"
	.string "But there're a lot of us!$"

MtPyre_Summit_Text_Grunt2Intro::
# 237 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Hah!\n"
	.string "Too bad for you!\p"
	.string "If you came earlier, you only would've\n"
	.string "had to battle the wimpy TEAM MAGMA.\p"
	.string "But since you arrived now, you have\n"
	.string "to take on us toughies!$"

MtPyre_Summit_Text_Grunt2Defeat::
# 248 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Urgh… I should've let you take on\n"
	.string "TEAM MAGMA first…$"

MtPyre_Summit_Text_Grunt2PostBattle::
# 253 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You don't know anything!\n"
	.string "So why are you messing with us?$"

MtPyre_Summit_Text_Grunt3Intro::
# 258 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You…\n"
	.string "We saw you at MT. CHIMNEY.\p"
	.string "You don't belong to either TEAM,\n"
	.string "so why would you be here?$"

MtPyre_Summit_Text_Grunt3Defeat::
# 266 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If you're going to mess with anyone,\n"
	.string "let it be TEAM MAGMA…$"

MtPyre_Summit_Text_Grunt3PostBattle::
# 271 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Heh, it doesn't matter!\n"
	.string "We bought ourselves some time!\p"
	.string "The BOSS should have snatched what\n"
	.string "he was after!$"

MtPyre_Summit_Text_Grunt4Intro::
# 279 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, I know!\n"
	.string "You tried to join TEAM MAGMA,\l"
	.string "but they wouldn't have you!\p"
	.string "Well, don't think that we'll let you\n"
	.string "join our TEAM AQUA!$"

MtPyre_Summit_Text_Grunt4Defeat::
# 288 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If you want to join TEAM AQUA that\n"
	.string "badly, we can consider it…$"

MtPyre_Summit_Text_Grunt4PostBattle::
# 293 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We have a great combination going\n"
	.string "with us members and our leader.$"

MtPyre_Summit_Text_ArchieWeGotTheOrbLetsGo::
# 298 "data/maps/MtPyre_Summit/scripts.pory"
	.string "ARCHIE: TEAM MAGMA's MAXIE got ahead\n"
	.string "of us, but we also got what we wanted.\p"
	.string "The RED ORB preserved at MT. PYRE…\n"
	.string "I, ARCHIE, now have it in my possession!\p"
	.string "Fufufu… Now we can bring our ultimate\n"
	.string "objective to fruition!\p"
	.string "Okay, TEAM!\n"
	.string "We're pulling out!$"

MtPyre_Summit_Text_BothOrbsTakenMagmaLeftThis::
# 312 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, no…\n"
	.string "This cannot happen…\p"
	.string "Not only the BLUE ORB, but even\n"
	.string "the RED ORB has been taken…\p"
	.string "The BLUE ORB and RED ORB must never\n"
	.string "be separated. They belong together.\p"
	.string "What are those men trying to do with\n"
	.string "the two ORBS?\p"
	.string "… … … … … …\n"
	.string "… … … … … …\p"
	.string "Oh, yes. Was it TEAM MAGMA who came\n"
	.string "and took the BLUE ORB first?\p"
	.string "Well, in their haste, they left this\n"
	.string "behind.\p"
	.string "I couldn't imagine what exactly it\n"
	.string "could be.\p"
	.string "I would like you to have it.\n"
	.string "Perhaps it will be useful in some way.$"

MtPyre_Summit_Text_OrbsHaveBeenTaken::
# 341 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The BLUE ORB and RED ORB taken by\n"
	.string "those sinister men…\p"
	.string "They must never be apart…\n"
	.string "I fear something terrible will happen…$"

MtPyre_Summit_Text_GroudonKyogreAwakened::
# 349 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, my goodness…\p"
	.string "You say that both GROUDON and KYOGRE\n"
	.string "have been awakened?\p"
	.string "It is said that the BLUE ORB and\n"
	.string "the RED ORB quelled the rage of\l"
	.string "the two POKéMON…\p"
	.string "It is also said that the true owner\n"
	.string "of the ORBS still exists.\p"
	.string "However, no one knows who, or what\n"
	.string "exactly, the ORBS belong to.\p"
	.string "It could be a human, or perhaps\n"
	.string "a POKéMON, but no one knows.$"

MtPyre_Summit_Text_ThoseTwoMenReturnedOrbs::
# 369 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The two men who took the ORBS came\n"
	.string "back to return them on their own.\p"
	.string "Those men…\n"
	.string "Perhaps they are not so evil after all…$"

MtPyre_Summit_Text_SuperAncientPokemonTaughtUs::
# 377 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The embodiments of the land, sea,\n"
	.string "and the sky…\p"
	.string "That is said to be the identities of\n"
	.string "the super-ancient POKéMON…\p"
	.string "In the same way that we humans and\n"
	.string "POKéMON have life, our world, too,\l"
	.string "is alive…\p"
	.string "The super-ancient POKéMON have\n"
	.string "taught us that…$"

MtPyre_Summit_Text_WillYouHearOutMyTale::
# 392 "data/maps/MtPyre_Summit/scripts.pory"
	.string "MT. PYRE is where we calm the spirits\n"
	.string "of POKéMON that have passed on…\p"
	.string "This is a high place where one can\n"
	.string "see all of HOENN…\p"
	.string "The disembodied spirits of POKéMON\n"
	.string "must find solace here…\p"
	.string "Is it coincidence that you are here…\p"
	.string "Will you hear out my tale? A tale long\n"
	.string "told in the HOENN region?$"

MtPyre_Summit_Text_GroudonKyogreTale::
# 408 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It happened long, long ago…\p"
	.string "The world was wracked by a ferocious\n"
	.string "clash between the POKéMON of the land\l"
	.string "and the POKéMON of the sea…\p"
	.string "The POKéMON of the land raised\n"
	.string "mountains and created continents…\p"
	.string "The POKéMON of the sea raised huge\n"
	.string "waves and carved out oceans…\p"
	.string "Their fierce duel raged without end.\p"
	.string "The world was engulfed in massive\n"
	.string "infernos and vicious storms.\p"
	.string "The BLUE ORB and the RED ORB brought\n"
	.string "an end to the calamity.\p"
	.string "Light poured from the two ORBS and\n"
	.string "becalmed the enraged adversaries.\p"
	.string "The pair, made docile, dove deep into\n"
	.string "the sea where eventually they\l"
	.string "disappeared…$"

MtPyre_Summit_Text_WellThatTooIsFine::
# 437 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I see…\n"
	.string "Well, that, too, is fine…$"

MtPyre_Summit_Text_MaxieSilence::
# 442 "data/maps/MtPyre_Summit/scripts.pory"
	.string "MAXIE: {PLAYER}…\p"
	.string "… … … … … …\n"
	.string "… … … … … …$"

MtPyre_Summit_Text_HearTheNewLegendOfHoenn::
# 449 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It is my role to pass on the legends\n"
	.string "of HOENN to future generations.\p"
	.string "And the crisis that just ended in\n"
	.string "SOOTOPOLIS rewrote a legend…\p"
	.string "Have you the time to hear the new\n"
	.string "legend of HOENN?$"

MtPyre_Summit_Text_HoennTrioTale::
# 460 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It happened long, long ago…\p"
	.string "The world was wracked by a ferocious\n"
	.string "clash between the POKéMON of the land\l"
	.string "and the POKéMON of the sea…\p"
	.string "The POKéMON of the land raised\n"
	.string "mountains and created continents…\p"
	.string "The POKéMON of the sea raised huge\n"
	.string "waves and carved out oceans…\p"
	.string "Their fierce duel raged without end.\p"
	.string "The world was engulfed in massive\n"
	.string "fires and vicious storms.\p"
	.string "It was then that the POKéMON of\n"
	.string "the sky descended from a storm.\p"
	.string "The POKéMON, shining a vivid green,\n"
	.string "becalmed the two enraged POKéMON.\p"
	.string "Then, its duty done, the green POKéMON\n"
	.string "flew off into the wild blue yonder…$"
