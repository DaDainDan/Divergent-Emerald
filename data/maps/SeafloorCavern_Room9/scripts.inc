SeafloorCavern_Room9_MapScripts::
	.byte 0


SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre::
# 4 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lockall
# 5 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
# 6 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 7 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_PLAYER, SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Movement_0
# 8 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 9 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 10 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieHoldItRightThere, MSGBOX_DEFAULT
# 11 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 12 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject LOCALID_SEAFLOOR_CAVERN_ARCHIE
# 13 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterLeft
# 14 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 15 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_ARCHIE, SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Movement_1
# 16 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 17 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieSoItWasYou, MSGBOX_DEFAULT
# 18 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_ARCHIE, Common_Movement_StepFasterUp
# 19 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 20 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieBeholdKyogre, MSGBOX_DEFAULT
# 21 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_ARCHIE, Common_Movement_FacePlayer
# 22 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 23 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieYouMustDisappear, MSGBOX_DEFAULT
# 24 "data/maps/SeafloorCavern_Room9/scripts.pory"
	trainerbattle_no_intro TRAINER_ARCHIE, SeafloorCavern_Room9_Text_ArchieDefeat
# 25 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWithThisRedOrb, MSGBOX_DEFAULT
# 26 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setweather WEATHER_NONE
# 27 "data/maps/SeafloorCavern_Room9/scripts.pory"
	doweather
# 28 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special Script_FadeOutMapMusic
# 29 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_RedOrbShinesByItself, MSGBOX_DEFAULT
# 30 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special WaitWeather
# 31 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_RESULT, 1
# 32 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_M_DETECT
# 33 "data/maps/SeafloorCavern_Room9/scripts.pory"
	dofieldeffectsparkle 16, 42, 0
# 34 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 35 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 36 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_RESULT, 0
# 37 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playfanfare MUS_AWAKEN_LEGEND
# 38 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_ORB
# 39 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special DoOrbEffect
# 40 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_ARCHIE, Common_Movement_StepFasterUp
# 41 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
# 42 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 43 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 150
# 44 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removeobject LOCALID_SEAFLOOR_CAVERN_KYOGRE_SLEEPING
# 45 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject LOCALID_SEAFLOOR_CAVERN_KYOGRE
# 46 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 47 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 60
# 48 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_KYOGRE, SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Movement_2
# 49 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 50 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special FadeOutOrbEffect
# 51 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, 1
# 52 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, 1
# 53 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, 8
# 54 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, 5
# 55 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 56 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 57 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_KYOGRE, SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Movement_3
# 58 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 59 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removeobject LOCALID_SEAFLOOR_CAVERN_KYOGRE
# 60 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 4
# 61 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, 2
# 62 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, 2
# 63 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, 8
# 64 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, 5
# 65 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 66 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 67 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 30
# 68 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhereDidKyogreGo, MSGBOX_DEFAULT
# 69 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PC_LOGIN
# 70 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterLeft
# 71 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 72 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieAMessageFromOutside, MSGBOX_DEFAULT
# 73 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 74 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_ARCHIE, SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Movement_4
# 75 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 76 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhatRainingTooHard, MSGBOX_DEFAULT
# 77 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 78 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PC_OFF
# 79 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 20
# 80 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_ARCHIE, Common_Movement_StepFasterDown
# 81 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 82 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhyDidKyogreDisappear, MSGBOX_DEFAULT
# 83 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 84 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject LOCALID_SEAFLOOR_CAVERN_MAXIE
# 85 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject LOCALID_SEAFLOOR_CAVERN_GRUNT_1
# 86 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject LOCALID_SEAFLOOR_CAVERN_GRUNT_1
# 87 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_GRUNT_1, SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Movement_5
# 88 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_GRUNT_1, SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Movement_5
# 89 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_MAXIE, SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Movement_6
# 90 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 91 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_ARCHIE, Common_Movement_StepFasterLeft
# 92 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 93 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieWhatHaveYouWrought, MSGBOX_DEFAULT
# 94 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PIN
# 95 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_ARCHIE, Common_Movement_ExclamationMark
# 96 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 97 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_ARCHIE, Common_Movement_Delay48
# 98 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 99 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieDontGetAllHighAndMighty, MSGBOX_DEFAULT
# 100 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieWeDontHaveTimeToArgue, MSGBOX_DEFAULT
# 101 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 102 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_MAXIE, SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Movement_7
# 103 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_SEAFLOOR_CAVERN_ARCHIE, SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Movement_8
# 104 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 105 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieComeOnPlayer, MSGBOX_DEFAULT
# 106 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_ROUTE128_STATE, 1
# 107 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 1
# 108 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN
# 109 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
# 110 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
# 111 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS
# 112 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_GROUDON
# 113 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_KYOGRE
# 114 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1
# 115 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
# 116 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_128_ARCHIE
# 117 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_128_MAXIE
# 118 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_SYS_WEATHER_CTRL
# 119 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN
# 120 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
# 121 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_STEVENS_HOUSE_STATE, 2
# 122 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_SEAFLOOR_CAVERN_STATE, 1
# 123 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_ARCHIE
# 124 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAXIE
# 125 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAGMA_GRUNTS
# 126 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE
# 127 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_AQUA_GRUNTS
# 128 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 129 "data/maps/SeafloorCavern_Room9/scripts.pory"
	warp MAP_ROUTE128, 38, 22
# 130 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 131 "data/maps/SeafloorCavern_Room9/scripts.pory"
	releaseall
	end


# 135 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Unused1:
# 137 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 137 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
	step_end

# 140 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Unused2:
# 142 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
	step_end

# 7 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Movement_0:
# 7 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 7 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
	step_end

# 15 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Movement_1:
# 15 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 15 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 15 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 15 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 15 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 15 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 15 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
	step_end

# 48 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Movement_2:
# 48 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 48 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 48 "data/maps/SeafloorCavern_Room9/scripts.pory"
	creep_down
# 48 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 48 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 48 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 48 "data/maps/SeafloorCavern_Room9/scripts.pory"
	creep_down
# 48 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 48 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 48 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
	step_end

# 57 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Movement_3:
# 57 "data/maps/SeafloorCavern_Room9/scripts.pory"
	slide_up
# 57 "data/maps/SeafloorCavern_Room9/scripts.pory"
	slide_up
	step_end

# 74 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Movement_4:
# 74 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 74 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
	step_end

# 87 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Movement_5:
# 87 "data/maps/SeafloorCavern_Room9/scripts.pory"
	run_right
# 87 "data/maps/SeafloorCavern_Room9/scripts.pory"
	run_right
# 87 "data/maps/SeafloorCavern_Room9/scripts.pory"
	run_right
# 87 "data/maps/SeafloorCavern_Room9/scripts.pory"
	run_right
	step_end

# 89 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Movement_6:
# 89 "data/maps/SeafloorCavern_Room9/scripts.pory"
	run_right
# 89 "data/maps/SeafloorCavern_Room9/scripts.pory"
	run_right
# 89 "data/maps/SeafloorCavern_Room9/scripts.pory"
	run_right
# 89 "data/maps/SeafloorCavern_Room9/scripts.pory"
	run_right
# 89 "data/maps/SeafloorCavern_Room9/scripts.pory"
	run_right
	step_end

# 102 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Movement_7:
# 102 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 102 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
	step_end

# 103 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre_Movement_8:
# 103 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_up
# 103 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lock_look
# 103 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 103 "data/maps/SeafloorCavern_Room9/scripts.pory"
	unlock_look
# 103 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_faster_right
	step_end

SeafloorCavern_Room9_Text_ArchieHoldItRightThere::
# 145 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Hold it right there.$"

SeafloorCavern_Room9_Text_ArchieSoItWasYou::
# 149 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Fufufu…\n"
	.string "So it was you, after all.$"

SeafloorCavern_Room9_Text_ArchieBeholdKyogre::
# 154 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Behold!\p"
	.string "See how beautiful it is, the sleeping\n"
	.string "form of the ancient POKéMON KYOGRE!\p"
	.string "I have waited so long for this day to\n"
	.string "come…$"

SeafloorCavern_Room9_Text_ArchieYouMustDisappear::
# 164 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: It surprises me, how you've\n"
	.string "managed to chase me here.\p"
	.string "But that's all over now.\p"
	.string "For the realization of my dream,\n"
	.string "you must disappear now!$"

SeafloorCavern_Room9_Text_ArchieDefeat::
# 174 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What?!\n"
	.string "I lost to a mere child like you?!$"

SeafloorCavern_Room9_Text_ArchieWithThisRedOrb::
# 179 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Fufufu…\p"
	.string "I commend you. I must recognize that\n"
	.string "you are truly gifted.\p"
	.string "But!\n"
	.string "I have this in my possession!\p"
	.string "With this RED ORB, I can make KYOGRE…$"

SeafloorCavern_Room9_Text_RedOrbShinesByItself::
# 191 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "The RED ORB suddenly began shining\n"
	.string "by itself!$"

SeafloorCavern_Room9_Text_ArchieWhereDidKyogreGo::
# 196 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: What?!\p"
	.string "I didn't do anything.\n"
	.string "Why did the RED ORB…\p"
	.string "Where did KYOGRE go?$"

SeafloorCavern_Room9_Text_ArchieAMessageFromOutside::
# 205 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Hm? It's a message from our\n"
	.string "members outside…$"

SeafloorCavern_Room9_Text_ArchieWhatRainingTooHard::
# 210 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Yes, what is it?\p"
	.string "Hm…\n"
	.string "It's raining heavily?\p"
	.string "Good… That should have happened.\n"
	.string "That is why we awakened KYOGRE,\l"
	.string "to realize TEAM AQUA's vision of\l"
	.string "expanding the sea.\p"
	.string "What?!\p"
	.string "It's raining far harder than we\n"
	.string "envisioned? You're in danger?\p"
	.string "That can't be…\n"
	.string "That's just not possible…\p"
	.string "Hold your position and monitor\n"
	.string "the situation!$"

SeafloorCavern_Room9_Text_ArchieWhyDidKyogreDisappear::
# 233 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: There's something wrong…\p"
	.string "The RED ORB is supposed to awaken\n"
	.string "and control KYOGRE…\p"
	.string "But… Why?\n"
	.string "Why did KYOGRE disappear?\p"
	.string "Why?!$"

SeafloorCavern_Room9_Text_MaxieWhatHaveYouWrought::
# 245 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "MAXIE: What have you wrought?\p"
	.string "ARCHIE… You've finally awoken KYOGRE,\n"
	.string "haven't you?\p"
	.string "What will happen to the world if this\n"
	.string "downpour continues for all eternity?\p"
	.string "The world's landmass will drown in\n"
	.string "the deepening sea…$"

SeafloorCavern_Room9_Text_ArchieDontGetAllHighAndMighty::
# 258 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: W-what?!\n"
	.string "Don't get all high and mighty with me!\p"
	.string "Wasn't it you, TEAM MAGMA, that\n"
	.string "infuriated GROUDON?\p"
	.string "So long as I have this RED ORB,\n"
	.string "I should be able to control KYOGRE…\p"
	.string "I should be able to control it…$"

SeafloorCavern_Room9_Text_MaxieWeDontHaveTimeToArgue::
# 271 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "MAXIE: We don't have the time to\n"
	.string "argue about it here!\p"
	.string "Get outside and see for yourself!\p"
	.string "See if what you've wrought is the\n"
	.string "world that we desired!$"

SeafloorCavern_Room9_Text_MaxieComeOnPlayer::
# 281 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "MAXIE: {PLAYER}, come on, you have\n"
	.string "to get out of here, too!$"
