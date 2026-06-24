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


MtPyre_Summit_EventScript_FogTrigger::
# 12 "data/maps/MtPyre_Summit/scripts.pory"
	setweather WEATHER_FOG_HORIZONTAL
# 13 "data/maps/MtPyre_Summit/scripts.pory"
	doweather
	end


MtPyre_Summit_EventScript_SnowTrigger::
# 18 "data/maps/MtPyre_Summit/scripts.pory"
	setweather WEATHER_SNOW
# 19 "data/maps/MtPyre_Summit/scripts.pory"
	doweather
	end


MtPyre_Summit_EventScript_TeamAquaTrigger0::
# 24 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 25 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 0
# 26 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_TeamAquaExits
	end


MtPyre_Summit_EventScript_TeamAquaTrigger1::
# 31 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 32 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 1
# 33 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_TeamAquaExits
	end


MtPyre_Summit_EventScript_TeamAquaTrigger2::
# 38 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 39 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 2
# 40 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_TeamAquaExits
	end


MtPyre_Summit_EventScript_TeamAquaExits::
# 45 "data/maps/MtPyre_Summit/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 46 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 47 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 48 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, Common_Movement_StepFasterDown
# 49 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 50 "data/maps/MtPyre_Summit/scripts.pory"
	delay 50
# 51 "data/maps/MtPyre_Summit/scripts.pory"
	switch VAR_0x8008
# 52 "data/maps/MtPyre_Summit/scripts.pory"
	case 0, MtPyre_Summit_EventScript_TeamAquaExits_3
# 53 "data/maps/MtPyre_Summit/scripts.pory"
	case 2, MtPyre_Summit_EventScript_TeamAquaExits_4
MtPyre_Summit_EventScript_TeamAquaExits_1:
# 55 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 56 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_ArchieWeGotTheOrbLetsGo, MSGBOX_DEFAULT
# 57 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 58 "data/maps/MtPyre_Summit/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 59 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SUMMIT_ARCHIE
# 60 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SUMMIT_GRUNT_1
# 61 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SUMMIT_GRUNT_2
# 62 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SUMMIT_GRUNT_3
# 63 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SUMMIT_GRUNT_4
# 64 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_HIDE_MT_PYRE_SUMMIT_ARCHIE
# 65 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_HIDE_MT_PYRE_SUMMIT_TEAM_AQUA
# 66 "data/maps/MtPyre_Summit/scripts.pory"
	fadedefaultbgm
# 67 "data/maps/MtPyre_Summit/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 68 "data/maps/MtPyre_Summit/scripts.pory"
	delay 20
# 69 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_MT_PYRE_STATE, 1
# 70 "data/maps/MtPyre_Summit/scripts.pory"
	switch VAR_0x8008
# 71 "data/maps/MtPyre_Summit/scripts.pory"
	case 0, MtPyre_Summit_EventScript_TeamAquaExits_7
# 75 "data/maps/MtPyre_Summit/scripts.pory"
	case 1, MtPyre_Summit_EventScript_TeamAquaExits_8
# 77 "data/maps/MtPyre_Summit/scripts.pory"
	case 2, MtPyre_Summit_EventScript_TeamAquaExits_9
MtPyre_Summit_EventScript_TeamAquaExits_5:
# 82 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_BothOrbsTakenMagmaLeftThis, MSGBOX_DEFAULT
# 83 "data/maps/MtPyre_Summit/scripts.pory"
	giveitem ITEM_MAGMA_EMBLEM
# 84 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_RECEIVED_RED_OR_BLUE_ORB
# 85 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_HIDE_JAGGED_PASS_MAGMA_GUARD
# 86 "data/maps/MtPyre_Summit/scripts.pory"
	releaseall
	end

MtPyre_Summit_EventScript_TeamAquaExits_3:
# 52 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_EventScript_TeamAquaExits_Movement_0
	goto MtPyre_Summit_EventScript_TeamAquaExits_1

MtPyre_Summit_EventScript_TeamAquaExits_4:
# 53 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_EventScript_TeamAquaExits_Movement_1
	goto MtPyre_Summit_EventScript_TeamAquaExits_1

MtPyre_Summit_EventScript_TeamAquaExits_7:
# 72 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_OLD_LADY, MtPyre_Summit_EventScript_TeamAquaExits_Movement_2
# 73 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 74 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterRight
	goto MtPyre_Summit_EventScript_TeamAquaExits_5

MtPyre_Summit_EventScript_TeamAquaExits_8:
# 76 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_OLD_LADY, Common_Movement_WalkDown
	goto MtPyre_Summit_EventScript_TeamAquaExits_5

MtPyre_Summit_EventScript_TeamAquaExits_9:
# 78 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_OLD_LADY, MtPyre_Summit_EventScript_TeamAquaExits_Movement_3
# 79 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 80 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterLeft
	goto MtPyre_Summit_EventScript_TeamAquaExits_5


MtPyre_Summit_EventScript_OldMan::
# 91 "data/maps/MtPyre_Summit/scripts.pory"
	lock_faceplayer
# 92 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, MtPyre_Summit_EventScript_OldMan_2
# 98 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_WillYouHearOutMyTale, MSGBOX_YESNO
# 99 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MtPyre_Summit_EventScript_OldMan_10
MtPyre_Summit_EventScript_OldMan_1:
# 103 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MtPyre_Summit_EventScript_OldMan_6
MtPyre_Summit_EventScript_OldMan_5:
	release_end

MtPyre_Summit_EventScript_OldMan_2:
# 93 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_HearTheNewLegendOfHoenn, MSGBOX_YESNO
# 94 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MtPyre_Summit_EventScript_OldMan_8
	goto MtPyre_Summit_EventScript_OldMan_1

MtPyre_Summit_EventScript_OldMan_6:
# 104 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_WellThatTooIsFine, MSGBOX_DEFAULT
	goto MtPyre_Summit_EventScript_OldMan_5

MtPyre_Summit_EventScript_OldMan_8:
# 95 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_HoennTrioTale, MSGBOX_DEFAULT
	goto MtPyre_Summit_EventScript_OldMan_1

MtPyre_Summit_EventScript_OldMan_10:
# 100 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_GroudonKyogreTale, MSGBOX_DEFAULT
	goto MtPyre_Summit_EventScript_OldMan_1


MtPyre_Summit_EventScript_OldLady::
# 110 "data/maps/MtPyre_Summit/scripts.pory"
	lock_faceplayer
# 111 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_set FLAG_RETURNED_RED_OR_BLUE_ORB, MtPyre_Summit_EventScript_OldLady_2
# 114 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_MT_PYRE_STATE, 3
	goto_if_ge MtPyre_Summit_EventScript_OldLady_3
# 118 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_set FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, MtPyre_Summit_EventScript_OldLady_4
# 122 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_OrbsHaveBeenTaken, MSGBOX_DEFAULT
MtPyre_Summit_EventScript_OldLady_1:
	release_end

MtPyre_Summit_EventScript_OldLady_2:
# 112 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_SuperAncientPokemonTaughtUs, MSGBOX_DEFAULT
	goto MtPyre_Summit_EventScript_OldLady_1

MtPyre_Summit_EventScript_OldLady_3:
# 115 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_ThoseTwoMenReturnedOrbs, MSGBOX_DEFAULT
# 116 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_RETURNED_RED_OR_BLUE_ORB
	goto MtPyre_Summit_EventScript_OldLady_1

MtPyre_Summit_EventScript_OldLady_4:
# 119 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_GroudonKyogreAwakened, MSGBOX_DEFAULT
	goto MtPyre_Summit_EventScript_OldLady_1


MtPyre_Summit_EventScript_ArchieMaxieTrigger0::
# 128 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 129 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 0
# 130 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
	end


MtPyre_Summit_EventScript_ArchieMaxieTrigger1::
# 135 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 136 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 1
# 137 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
	end


MtPyre_Summit_EventScript_ArchieMaxieTrigger2::
# 142 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 143 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 2
# 144 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
	end


MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs::
# 149 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
# 150 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 151 "data/maps/MtPyre_Summit/scripts.pory"
	delay 60
# 152 "data/maps/MtPyre_Summit/scripts.pory"
	switch VAR_0x8008
# 153 "data/maps/MtPyre_Summit/scripts.pory"
	case 0, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_3
# 154 "data/maps/MtPyre_Summit/scripts.pory"
	case 1, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_4
# 155 "data/maps/MtPyre_Summit/scripts.pory"
	case 2, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_5
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_1:
# 157 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_3
# 158 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_3
# 159 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 160 "data/maps/MtPyre_Summit/scripts.pory"
	playse SE_PIN
# 161 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, Common_Movement_ExclamationMark
# 162 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 163 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, Common_Movement_Delay48
# 164 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 165 "data/maps/MtPyre_Summit/scripts.pory"
	delay 30
# 166 "data/maps/MtPyre_Summit/scripts.pory"
	switch VAR_0x8008
# 167 "data/maps/MtPyre_Summit/scripts.pory"
	case 0, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_8
# 171 "data/maps/MtPyre_Summit/scripts.pory"
	case 1, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_9
# 175 "data/maps/MtPyre_Summit/scripts.pory"
	case 2, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_10
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_6:
# 180 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 181 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_MaxieSilence, MSGBOX_DEFAULT
# 182 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 183 "data/maps/MtPyre_Summit/scripts.pory"
	switch VAR_0x8008
# 184 "data/maps/MtPyre_Summit/scripts.pory"
	case 0, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_13
# 187 "data/maps/MtPyre_Summit/scripts.pory"
	case 1, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_14
# 190 "data/maps/MtPyre_Summit/scripts.pory"
	case 2, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_15
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_11:
# 194 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 195 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, Common_Movement_StepFasterRight
# 196 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 197 "data/maps/MtPyre_Summit/scripts.pory"
	delay 30
# 198 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_3
# 199 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_3
# 200 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 201 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SUMMIT_ARCHIE
# 202 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MT_PYRE_SUMMIT_MAXIE
# 203 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_MT_PYRE_STATE, 3
# 204 "data/maps/MtPyre_Summit/scripts.pory"
	releaseall
	end

MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_3:
# 153 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PLAYER, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_0
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_1

MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_4:
# 154 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PLAYER, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_1
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_1

MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_5:
# 155 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PLAYER, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_2
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_1

MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_8:
# 168 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PLAYER, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_4
# 169 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_5
# 170 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_6
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_6

MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_9:
# 172 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PLAYER, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_7
# 173 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_5
# 174 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_8
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_6

MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_10:
# 176 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PLAYER, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_7
# 177 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_ARCHIE, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_5
# 178 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_8
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_6

MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_13:
# 185 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PLAYER, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_9
# 186 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_10
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_11

MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_14:
# 188 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PLAYER, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_9
# 189 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_11
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_11

MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_15:
# 191 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PLAYER, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_9
# 192 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MT_PYRE_SUMMIT_MAXIE, MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_11
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_11


MtPyre_Summit_EventScript_Grunt1::
# 209 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_1, MtPyre_Summit_Text_Grunt1Intro, MtPyre_Summit_Text_Grunt1Defeat
# 210 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end


MtPyre_Summit_EventScript_Grunt2::
# 215 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_2, MtPyre_Summit_Text_Grunt2Intro, MtPyre_Summit_Text_Grunt2Defeat
# 216 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end


MtPyre_Summit_EventScript_Grunt3::
# 221 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_3, MtPyre_Summit_Text_Grunt3Intro, MtPyre_Summit_Text_Grunt3Defeat
# 222 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end


MtPyre_Summit_EventScript_Grunt4::
# 227 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_4, MtPyre_Summit_Text_Grunt4Intro, MtPyre_Summit_Text_Grunt4Defeat
# 228 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
	end


# 52 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaExits_Movement_0:
# 52 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 52 "data/maps/MtPyre_Summit/scripts.pory"
	step_faster_down
	step_end

# 53 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaExits_Movement_1:
# 53 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 53 "data/maps/MtPyre_Summit/scripts.pory"
	step_faster_down
	step_end

# 72 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaExits_Movement_2:
# 72 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 72 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 72 "data/maps/MtPyre_Summit/scripts.pory"
	step_faster_left
	step_end

# 78 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaExits_Movement_3:
# 78 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 78 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 78 "data/maps/MtPyre_Summit/scripts.pory"
	step_faster_right
	step_end

# 153 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_0:
# 153 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 153 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 153 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 153 "data/maps/MtPyre_Summit/scripts.pory"
	step_faster_right
# 153 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 153 "data/maps/MtPyre_Summit/scripts.pory"
	step_faster_down
	step_end

# 154 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_1:
# 154 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 154 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 154 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 154 "data/maps/MtPyre_Summit/scripts.pory"
	step_faster_left
# 154 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 154 "data/maps/MtPyre_Summit/scripts.pory"
	step_faster_down
	step_end

# 155 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_2:
# 155 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 155 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 155 "data/maps/MtPyre_Summit/scripts.pory"
	step_faster_left
# 155 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 155 "data/maps/MtPyre_Summit/scripts.pory"
	step_faster_down
	step_end

# 157 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_3:
# 157 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 157 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 157 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 157 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 157 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 157 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
	step_end

# 168 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_4:
# 168 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 168 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 168 "data/maps/MtPyre_Summit/scripts.pory"
	step_faster_right
	step_end

# 169 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_5:
# 169 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 169 "data/maps/MtPyre_Summit/scripts.pory"
	step_faster_up
	step_end

# 170 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_6:
# 170 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 170 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 170 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 170 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
	step_end

# 172 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_7:
# 172 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 172 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 172 "data/maps/MtPyre_Summit/scripts.pory"
	step_faster_left
	step_end

# 174 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_8:
# 174 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 174 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 174 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 174 "data/maps/MtPyre_Summit/scripts.pory"
	step_faster_right
	step_end

# 185 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_9:
# 185 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 185 "data/maps/MtPyre_Summit/scripts.pory"
	step_faster_down
	step_end

# 186 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_10:
# 186 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 186 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 186 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 186 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 186 "data/maps/MtPyre_Summit/scripts.pory"
	step_faster_left
	step_end

# 189 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs_Movement_11:
# 189 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 189 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 189 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 189 "data/maps/MtPyre_Summit/scripts.pory"
	step_faster_left
	step_end

MtPyre_Summit_Text_Grunt1Intro::
# 232 "data/maps/MtPyre_Summit/scripts.pory"
	.string "No! Those TEAM MAGMA goons got\n"
	.string "here ahead of us!\p"
	.string "We can't fall behind!$"

MtPyre_Summit_Text_Grunt1Defeat::
# 239 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I thought you were one of the MAGMAS\n"
	.string "who happened to come back…$"

MtPyre_Summit_Text_Grunt1PostBattle::
# 244 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Yeah, so you are strong…\n"
	.string "But there're a lot of us!$"

MtPyre_Summit_Text_Grunt2Intro::
# 249 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Hah!\n"
	.string "Too bad for you!\p"
	.string "If you came earlier, you only would've\n"
	.string "had to battle the wimpy TEAM MAGMA.\p"
	.string "But since you arrived now, you have\n"
	.string "to take on us toughies!$"

MtPyre_Summit_Text_Grunt2Defeat::
# 260 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Urgh… I should've let you take on\n"
	.string "TEAM MAGMA first…$"

MtPyre_Summit_Text_Grunt2PostBattle::
# 265 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You don't know anything!\n"
	.string "So why are you messing with us?$"

MtPyre_Summit_Text_Grunt3Intro::
# 270 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You…\n"
	.string "We saw you at MT. CHIMNEY.\p"
	.string "You don't belong to either TEAM,\n"
	.string "so why would you be here?$"

MtPyre_Summit_Text_Grunt3Defeat::
# 278 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If you're going to mess with anyone,\n"
	.string "let it be TEAM MAGMA…$"

MtPyre_Summit_Text_Grunt3PostBattle::
# 283 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Heh, it doesn't matter!\n"
	.string "We bought ourselves some time!\p"
	.string "The BOSS should have snatched what\n"
	.string "he was after!$"

MtPyre_Summit_Text_Grunt4Intro::
# 291 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, I know!\n"
	.string "You tried to join TEAM MAGMA,\l"
	.string "but they wouldn't have you!\p"
	.string "Well, don't think that we'll let you\n"
	.string "join our TEAM AQUA!$"

MtPyre_Summit_Text_Grunt4Defeat::
# 300 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If you want to join TEAM AQUA that\n"
	.string "badly, we can consider it…$"

MtPyre_Summit_Text_Grunt4PostBattle::
# 305 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We have a great combination going\n"
	.string "with us members and our leader.$"

MtPyre_Summit_Text_ArchieWeGotTheOrbLetsGo::
# 310 "data/maps/MtPyre_Summit/scripts.pory"
	.string "{SPEAKER NAME_ARCHIE}TEAM MAGMA's MAXIE got ahead\n"
	.string "of us, but we also got what we wanted.\p"
	.string "The RED ORB preserved at MT. PYRE…\n"
	.string "I, ARCHIE, now have it in my possession!\p"
	.string "Fufufu… Now we can bring our ultimate\n"
	.string "objective to fruition!\p"
	.string "Okay, TEAM!\n"
	.string "We're pulling out!$"

MtPyre_Summit_Text_BothOrbsTakenMagmaLeftThis::
# 324 "data/maps/MtPyre_Summit/scripts.pory"
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
# 353 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The BLUE ORB and RED ORB taken by\n"
	.string "those sinister men…\p"
	.string "They must never be apart…\n"
	.string "I fear something terrible will happen…$"

MtPyre_Summit_Text_GroudonKyogreAwakened::
# 361 "data/maps/MtPyre_Summit/scripts.pory"
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
# 381 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The two men who took the ORBS came\n"
	.string "back to return them on their own.\p"
	.string "Those men…\n"
	.string "Perhaps they are not so evil after all…$"

MtPyre_Summit_Text_SuperAncientPokemonTaughtUs::
# 389 "data/maps/MtPyre_Summit/scripts.pory"
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
# 404 "data/maps/MtPyre_Summit/scripts.pory"
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
# 420 "data/maps/MtPyre_Summit/scripts.pory"
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
# 449 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I see…\n"
	.string "Well, that, too, is fine…$"

MtPyre_Summit_Text_MaxieSilence::
# 454 "data/maps/MtPyre_Summit/scripts.pory"
	.string "{SPEAKER NAME_MAXIE}{PLAYER}…\p"
	.string "… … … … … …\n"
	.string "… … … … … …$"

MtPyre_Summit_Text_HearTheNewLegendOfHoenn::
# 461 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It is my role to pass on the legends\n"
	.string "of HOENN to future generations.\p"
	.string "And the crisis that just ended in\n"
	.string "SOOTOPOLIS rewrote a legend…\p"
	.string "Have you the time to hear the new\n"
	.string "legend of HOENN?$"

MtPyre_Summit_Text_HoennTrioTale::
# 472 "data/maps/MtPyre_Summit/scripts.pory"
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
