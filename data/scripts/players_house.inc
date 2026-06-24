PlayersHouse_2F_EventScript_BlockStairsUntilClockIsSet::
# 2 "data/scripts/players_house.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 5
	return


PlayersHouse_1F_EventScript_EnterHouseMovingIn::
# 7 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_IsntItNiceInHere, MSGBOX_DEFAULT
# 8 "data/scripts/players_house.pory"
	applymovement VAR_0x8004, Common_Movement_FacePlayer
# 9 "data/scripts/players_house.pory"
	waitmovement 0
# 10 "data/scripts/players_house.pory"
	switch VAR_0x8005
# 11 "data/scripts/players_house.pory"
	case MALE, PlayersHouse_1F_EventScript_EnterHouseMovingIn_3
# 12 "data/scripts/players_house.pory"
	case FEMALE, PlayersHouse_1F_EventScript_EnterHouseMovingIn_4
PlayersHouse_1F_EventScript_EnterHouseMovingIn_1:
# 14 "data/scripts/players_house.pory"
	waitmovement 0
# 15 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_MoversPokemonGoSetClock, MSGBOX_DEFAULT
# 16 "data/scripts/players_house.pory"
	closemessage
# 17 "data/scripts/players_house.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 4
# 18 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 19 "data/scripts/players_house.pory"
	applymovement VAR_0x8004, Common_Movement_StepFasterUp
# 20 "data/scripts/players_house.pory"
	waitmovement 0
# 21 "data/scripts/players_house.pory"
	releaseall
	end

PlayersHouse_1F_EventScript_EnterHouseMovingIn_3:
# 11 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterRight
	goto PlayersHouse_1F_EventScript_EnterHouseMovingIn_1

PlayersHouse_1F_EventScript_EnterHouseMovingIn_4:
# 12 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterLeft
	goto PlayersHouse_1F_EventScript_EnterHouseMovingIn_1


PlayersHouse_1F_EventScript_MomGoSeeRoom::
# 26 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_ArentYouInterestedInRoom, MSGBOX_DEFAULT
# 27 "data/scripts/players_house.pory"
	closemessage
# 28 "data/scripts/players_house.pory"
	applymovement VAR_0x8004, Common_Movement_StepFasterUp
# 29 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 30 "data/scripts/players_house.pory"
	waitmovement 0
# 31 "data/scripts/players_house.pory"
	releaseall
	end


LittlerootTown_BrendansHouse_2F_EventScript_WallClock::
# 36 "data/scripts/players_house.pory"
	lockall
# 37 "data/scripts/players_house.pory"
	setvar VAR_0x8004, MALE
# 38 "data/scripts/players_house.pory"
	goto PlayersHouse_2F_EventScript_WallClock
	end


LittlerootTown_MaysHouse_2F_EventScript_WallClock::
# 43 "data/scripts/players_house.pory"
	lockall
# 44 "data/scripts/players_house.pory"
	setvar VAR_0x8004, FEMALE
# 45 "data/scripts/players_house.pory"
	goto PlayersHouse_2F_EventScript_WallClock
	end


PlayersHouse_2F_EventScript_WallClock::
# 50 "data/scripts/players_house.pory"
	goto_if_set FLAG_SET_WALL_CLOCK, PlayersHouse_2F_EventScript_WallClock_2
PlayersHouse_2F_EventScript_WallClock_1:
# 53 "data/scripts/players_house.pory"
	msgbox PlayersHouse_2F_Text_ClockIsStopped, MSGBOX_DEFAULT
# 54 "data/scripts/players_house.pory"
	call PlayersHouse_2F_EventScript_SetWallClock
# 55 "data/scripts/players_house.pory"
	delay 30
# 56 "data/scripts/players_house.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 6
# 57 "data/scripts/players_house.pory"
	setflag FLAG_SET_WALL_CLOCK
# 58 "data/scripts/players_house.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_1
# 59 "data/scripts/players_house.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_2
# 60 "data/scripts/players_house.pory"
	setvar VAR_0x8008, LOCALID_PLAYERS_HOUSE_2F_MOM
# 61 "data/scripts/players_house.pory"
	addobject VAR_0x8008
# 62 "data/scripts/players_house.pory"
	checkplayergender
# 63 "data/scripts/players_house.pory"
	switch VAR_RESULT
# 64 "data/scripts/players_house.pory"
	case MALE, PlayersHouse_2F_EventScript_WallClock_6
# 65 "data/scripts/players_house.pory"
	case FEMALE, PlayersHouse_2F_EventScript_WallClock_7
PlayersHouse_2F_EventScript_WallClock_4:
# 67 "data/scripts/players_house.pory"
	waitmovement 0
# 68 "data/scripts/players_house.pory"
	switch VAR_RESULT
# 69 "data/scripts/players_house.pory"
	case MALE, PlayersHouse_2F_EventScript_WallClock_10
# 70 "data/scripts/players_house.pory"
	case FEMALE, PlayersHouse_2F_EventScript_WallClock_11
PlayersHouse_2F_EventScript_WallClock_8:
# 72 "data/scripts/players_house.pory"
	waitmovement 0
# 73 "data/scripts/players_house.pory"
	msgbox PlayersHouse_2F_Text_HowDoYouLikeYourRoom, MSGBOX_DEFAULT
# 74 "data/scripts/players_house.pory"
	closemessage
# 75 "data/scripts/players_house.pory"
	switch VAR_RESULT
# 76 "data/scripts/players_house.pory"
	case MALE, PlayersHouse_2F_EventScript_WallClock_14
# 77 "data/scripts/players_house.pory"
	case FEMALE, PlayersHouse_2F_EventScript_WallClock_15
PlayersHouse_2F_EventScript_WallClock_12:
# 79 "data/scripts/players_house.pory"
	waitmovement 0
# 80 "data/scripts/players_house.pory"
	playse SE_EXIT
# 81 "data/scripts/players_house.pory"
	removeobject VAR_0x8008
# 82 "data/scripts/players_house.pory"
	releaseall
	end

PlayersHouse_2F_EventScript_WallClock_2:
# 51 "data/scripts/players_house.pory"
	goto PlayersHouse_2F_EventScript_CheckWallClock
	goto PlayersHouse_2F_EventScript_WallClock_1

PlayersHouse_2F_EventScript_WallClock_6:
# 64 "data/scripts/players_house.pory"
	applymovement VAR_0x8008, PlayersHouse_2F_EventScript_WallClock_Movement_0
	goto PlayersHouse_2F_EventScript_WallClock_4

PlayersHouse_2F_EventScript_WallClock_7:
# 65 "data/scripts/players_house.pory"
	applymovement VAR_0x8008, PlayersHouse_2F_EventScript_WallClock_Movement_1
	goto PlayersHouse_2F_EventScript_WallClock_4

PlayersHouse_2F_EventScript_WallClock_10:
# 69 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterRight
	goto PlayersHouse_2F_EventScript_WallClock_8

PlayersHouse_2F_EventScript_WallClock_11:
# 70 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterLeft
	goto PlayersHouse_2F_EventScript_WallClock_8

PlayersHouse_2F_EventScript_WallClock_14:
# 76 "data/scripts/players_house.pory"
	applymovement VAR_0x8008, PlayersHouse_2F_EventScript_WallClock_Movement_2
	goto PlayersHouse_2F_EventScript_WallClock_12

PlayersHouse_2F_EventScript_WallClock_15:
# 77 "data/scripts/players_house.pory"
	applymovement VAR_0x8008, PlayersHouse_2F_EventScript_WallClock_Movement_3
	goto PlayersHouse_2F_EventScript_WallClock_12


PlayersHouse_2F_EventScript_CheckWallClock::
# 87 "data/scripts/players_house.pory"
	incrementgamestat GAME_STAT_CHECKED_CLOCK
# 88 "data/scripts/players_house.pory"
	fadescreen FADE_TO_BLACK
# 89 "data/scripts/players_house.pory"
	special Special_ViewWallClock
# 90 "data/scripts/players_house.pory"
	releaseall
	end


PlayersHouse_2F_EventScript_SetWallClock::
# 95 "data/scripts/players_house.pory"
	fadescreen FADE_TO_BLACK
# 96 "data/scripts/players_house.pory"
	special StartWallClock
	return


PlayersHouse_1F_EventScript_PetalburgGymReport::
# 101 "data/scripts/players_house.pory"
	switch VAR_0x8004
# 102 "data/scripts/players_house.pory"
	case MALE, PlayersHouse_1F_EventScript_PetalburgGymReport_3
# 103 "data/scripts/players_house.pory"
	case FEMALE, PlayersHouse_1F_EventScript_PetalburgGymReport_4
PlayersHouse_1F_EventScript_PetalburgGymReport_1:
# 105 "data/scripts/players_house.pory"
	waitmovement 0
# 106 "data/scripts/players_house.pory"
	playse SE_PIN
# 107 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, Common_Movement_ExclamationMark
# 108 "data/scripts/players_house.pory"
	waitmovement 0
# 109 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, Common_Movement_Delay48
# 110 "data/scripts/players_house.pory"
	waitmovement 0
# 111 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_OhComeQuickly, MSGBOX_DEFAULT
# 112 "data/scripts/players_house.pory"
	closemessage
# 113 "data/scripts/players_house.pory"
	switch VAR_0x8004
# 114 "data/scripts/players_house.pory"
	case MALE, PlayersHouse_1F_EventScript_PetalburgGymReport_7
# 115 "data/scripts/players_house.pory"
	case FEMALE, PlayersHouse_1F_EventScript_PetalburgGymReport_8
PlayersHouse_1F_EventScript_PetalburgGymReport_5:
# 117 "data/scripts/players_house.pory"
	waitmovement 0
# 118 "data/scripts/players_house.pory"
	playbgm MUS_ENCOUNTER_INTERVIEWER, FALSE
# 119 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_MaybeDadWillBeOn, MSGBOX_DEFAULT
# 120 "data/scripts/players_house.pory"
	closemessage
# 121 "data/scripts/players_house.pory"
	switch VAR_0x8004
# 122 "data/scripts/players_house.pory"
	case MALE, PlayersHouse_1F_EventScript_PetalburgGymReport_11
# 126 "data/scripts/players_house.pory"
	case FEMALE, PlayersHouse_1F_EventScript_PetalburgGymReport_12
PlayersHouse_1F_EventScript_PetalburgGymReport_9:
# 131 "data/scripts/players_house.pory"
	waitmovement 0
# 132 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
# 133 "data/scripts/players_house.pory"
	waitmovement 0
# 134 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_ReportFromPetalburgGym, MSGBOX_DEFAULT
# 135 "data/scripts/players_house.pory"
	fadedefaultbgm
# 136 "data/scripts/players_house.pory"
	special TurnOffTVScreen
# 137 "data/scripts/players_house.pory"
	setflag FLAG_SYS_TV_HOME
# 138 "data/scripts/players_house.pory"
	delay 35
# 139 "data/scripts/players_house.pory"
	switch VAR_0x8004
# 140 "data/scripts/players_house.pory"
	case MALE, PlayersHouse_1F_EventScript_PetalburgGymReport_15
# 141 "data/scripts/players_house.pory"
	case FEMALE, PlayersHouse_1F_EventScript_PetalburgGymReport_16
PlayersHouse_1F_EventScript_PetalburgGymReport_13:
# 143 "data/scripts/players_house.pory"
	waitmovement 0
# 144 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_ItsOverWeMissedHim, MSGBOX_DEFAULT
# 145 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_GoIntroduceYourselfNextDoor, MSGBOX_DEFAULT
# 146 "data/scripts/players_house.pory"
	closemessage
# 147 "data/scripts/players_house.pory"
	setvar VAR_TEMP_1, 1
# 148 "data/scripts/players_house.pory"
	switch VAR_0x8004
# 149 "data/scripts/players_house.pory"
	case MALE, PlayersHouse_1F_EventScript_PetalburgGymReport_19
# 150 "data/scripts/players_house.pory"
	case FEMALE, PlayersHouse_1F_EventScript_PetalburgGymReport_20
PlayersHouse_1F_EventScript_PetalburgGymReport_17:
# 152 "data/scripts/players_house.pory"
	waitmovement 0
# 153 "data/scripts/players_house.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 7
# 154 "data/scripts/players_house.pory"
	releaseall
	end

PlayersHouse_1F_EventScript_PetalburgGymReport_3:
# 102 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, Common_Movement_StepFasterRight
	goto PlayersHouse_1F_EventScript_PetalburgGymReport_1

PlayersHouse_1F_EventScript_PetalburgGymReport_4:
# 103 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, Common_Movement_StepFasterLeft
	goto PlayersHouse_1F_EventScript_PetalburgGymReport_1

PlayersHouse_1F_EventScript_PetalburgGymReport_7:
# 114 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, PlayersHouse_1F_EventScript_PetalburgGymReport_Movement_0
	goto PlayersHouse_1F_EventScript_PetalburgGymReport_5

PlayersHouse_1F_EventScript_PetalburgGymReport_8:
# 115 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, PlayersHouse_1F_EventScript_PetalburgGymReport_Movement_1
	goto PlayersHouse_1F_EventScript_PetalburgGymReport_5

PlayersHouse_1F_EventScript_PetalburgGymReport_11:
# 123 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, PlayersHouse_1F_EventScript_PetalburgGymReport_Movement_2
# 124 "data/scripts/players_house.pory"
	waitmovement 0
# 125 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
	goto PlayersHouse_1F_EventScript_PetalburgGymReport_9

PlayersHouse_1F_EventScript_PetalburgGymReport_12:
# 127 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, PlayersHouse_1F_EventScript_PetalburgGymReport_Movement_3
# 128 "data/scripts/players_house.pory"
	waitmovement 0
# 129 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
	goto PlayersHouse_1F_EventScript_PetalburgGymReport_9

PlayersHouse_1F_EventScript_PetalburgGymReport_15:
# 140 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterLeft
	goto PlayersHouse_1F_EventScript_PetalburgGymReport_13

PlayersHouse_1F_EventScript_PetalburgGymReport_16:
# 141 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterRight
	goto PlayersHouse_1F_EventScript_PetalburgGymReport_13

PlayersHouse_1F_EventScript_PetalburgGymReport_19:
# 149 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, PlayersHouse_1F_EventScript_PetalburgGymReport_Movement_4
	goto PlayersHouse_1F_EventScript_PetalburgGymReport_17

PlayersHouse_1F_EventScript_PetalburgGymReport_20:
# 150 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, PlayersHouse_1F_EventScript_PetalburgGymReport_Movement_5
	goto PlayersHouse_1F_EventScript_PetalburgGymReport_17


PlayersHouse_1F_EventScript_Mom::
# 159 "data/scripts/players_house.pory"
	lock_faceplayer
# 160 "data/scripts/players_house.pory"
	compare VAR_LITTLEROOT_HOUSES_STATE_MAY, 4
	goto_if_eq PlayersHouse_1F_EventScript_Mom_2
# 160 "data/scripts/players_house.pory"
	compare VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4
	goto_if_eq PlayersHouse_1F_EventScript_Mom_2
# 163 "data/scripts/players_house.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PlayersHouse_1F_EventScript_Mom_3
# 166 "data/scripts/players_house.pory"
	goto_if_set FLAG_RESCUED_BIRCH, PlayersHouse_1F_EventScript_Mom_4
# 169 "data/scripts/players_house.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq PlayersHouse_1F_EventScript_Mom_5
# 172 "data/scripts/players_house.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 7
	goto_if_eq PlayersHouse_1F_EventScript_Mom_6
# 176 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_IsntItNiceInHere, MSGBOX_DEFAULT
PlayersHouse_1F_EventScript_Mom_1:
	release_end

PlayersHouse_1F_EventScript_Mom_2:
# 161 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_DontPushYourselfTooHard, MSGBOX_DEFAULT
	goto PlayersHouse_1F_EventScript_Mom_1

PlayersHouse_1F_EventScript_Mom_3:
# 164 "data/scripts/players_house.pory"
	goto PlayersHouse_1F_EventScript_TryRegisterMom
	goto PlayersHouse_1F_EventScript_Mom_1

PlayersHouse_1F_EventScript_Mom_4:
# 167 "data/scripts/players_house.pory"
	goto PlayersHouse_1F_EventScript_MomHealsParty
	goto PlayersHouse_1F_EventScript_Mom_1

PlayersHouse_1F_EventScript_Mom_5:
# 170 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_SeeYouHoney, MSGBOX_DEFAULT
	goto PlayersHouse_1F_EventScript_Mom_1

PlayersHouse_1F_EventScript_Mom_6:
# 173 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_DidYouMeetProfBirch, MSGBOX_DEFAULT
	goto PlayersHouse_1F_EventScript_Mom_1


PlayersHouse_1F_EventScript_TryRegisterMom::
# 182 "data/scripts/players_house.pory"
	goto_if_set FLAG_ENABLE_MOM_MATCH_CALL, PlayersHouse_1F_EventScript_TryRegisterMom_2
PlayersHouse_1F_EventScript_TryRegisterMom_1:
# 194 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_IsThatAPokenav, MSGBOX_DEFAULT
# 195 "data/scripts/players_house.pory"
	closemessage
# 196 "data/scripts/players_house.pory"
	delay 30
# 197 "data/scripts/players_house.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 198 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_RegisteredMom, MSGBOX_DEFAULT
# 199 "data/scripts/players_house.pory"
	waitfanfare
# 200 "data/scripts/players_house.pory"
	closemessage
# 201 "data/scripts/players_house.pory"
	delay 30
# 202 "data/scripts/players_house.pory"
	setflag FLAG_ENABLE_MOM_MATCH_CALL
	release_end

PlayersHouse_1F_EventScript_TryRegisterMom_2:
# 183 "data/scripts/players_house.pory"
	goto_if_set FLAG_BADGE05_GET, PlayersHouse_1F_EventScript_TryRegisterMom_6
PlayersHouse_1F_EventScript_TryRegisterMom_4:
# 192 "data/scripts/players_house.pory"
	goto PlayersHouse_1F_EventScript_MomHealsParty
	goto PlayersHouse_1F_EventScript_TryRegisterMom_1

PlayersHouse_1F_EventScript_TryRegisterMom_5:
# 184 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_GotDadsBadgeHeresSomethingFromMom, MSGBOX_DEFAULT
	giveitem ITEM_AMULET_COIN
# 0 "data/scripts/players_house.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PlayersHouse_1F_EventScript_TryRegisterMom_10
PlayersHouse_1F_EventScript_TryRegisterMom_9:
# 188 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_DontPushYourselfTooHard, MSGBOX_DEFAULT
# 189 "data/scripts/players_house.pory"
	setflag FLAG_RECEIVED_AMULET_COIN
	release_end

PlayersHouse_1F_EventScript_TryRegisterMom_6:
# 183 "data/scripts/players_house.pory"
	goto_if_unset FLAG_RECEIVED_AMULET_COIN, PlayersHouse_1F_EventScript_TryRegisterMom_5
	goto PlayersHouse_1F_EventScript_TryRegisterMom_4

PlayersHouse_1F_EventScript_TryRegisterMom_10:
# 186 "data/scripts/players_house.pory"
	goto Common_EventScript_ShowBagIsFull
	goto PlayersHouse_1F_EventScript_TryRegisterMom_9


PlayersHouse_1F_EventScript_MomHealsParty::
# 207 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_YouShouldRestABit, MSGBOX_DEFAULT
# 208 "data/scripts/players_house.pory"
	closemessage
# 209 "data/scripts/players_house.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 210 "data/scripts/players_house.pory"
	incrementgamestat GAME_STAT_RESTED_AT_HOME
# 211 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_TakeCareHoney, MSGBOX_DEFAULT
	release_end


PlayersHouse_1F_EventScript_Vigoroth1::
# 216 "data/scripts/players_house.pory"
	lock_faceplayer
# 217 "data/scripts/players_house.pory"
	waitse
# 218 "data/scripts/players_house.pory"
	playmoncry SPECIES_VIGOROTH, CRY_MODE_NORMAL
# 219 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_Vigoroth1, MSGBOX_DEFAULT
# 220 "data/scripts/players_house.pory"
	waitmoncry
	release_end


PlayersHouse_1F_EventScript_Vigoroth2::
# 225 "data/scripts/players_house.pory"
	lock_faceplayer
# 226 "data/scripts/players_house.pory"
	waitse
# 227 "data/scripts/players_house.pory"
	playmoncry SPECIES_VIGOROTH, CRY_MODE_NORMAL
# 228 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_Vigoroth2, MSGBOX_DEFAULT
# 229 "data/scripts/players_house.pory"
	waitmoncry
	release_end


PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV::
# 234 "data/scripts/players_house.pory"
	lockall
# 235 "data/scripts/players_house.pory"
	checkplayergender
# 236 "data/scripts/players_house.pory"
	switch VAR_RESULT
# 237 "data/scripts/players_house.pory"
	case MALE, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_3
# 238 "data/scripts/players_house.pory"
	case FEMALE, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_4
PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_1:
# 240 "data/scripts/players_house.pory"
	setvar VAR_0x8009, LOCALID_PLAYERS_HOUSE_1F_DAD
# 241 "data/scripts/players_house.pory"
	setvar VAR_0x800A, LOCALID_PLAYERS_HOUSE_1F_MOM
# 242 "data/scripts/players_house.pory"
	switch VAR_0x8008
# 243 "data/scripts/players_house.pory"
	case MALE, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_7
# 244 "data/scripts/players_house.pory"
	case FEMALE, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_8
PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_5:
# 246 "data/scripts/players_house.pory"
	waitmovement 0
# 247 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, Common_Movement_FacePlayer
# 248 "data/scripts/players_house.pory"
	waitmovement 0
# 249 "data/scripts/players_house.pory"
	playse SE_PIN
# 250 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, Common_Movement_ExclamationMark
# 251 "data/scripts/players_house.pory"
	waitmovement 0
# 252 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, Common_Movement_Delay48
# 253 "data/scripts/players_house.pory"
	waitmovement 0
# 254 "data/scripts/players_house.pory"
	delay 20
# 255 "data/scripts/players_house.pory"
	switch VAR_0x8008
# 256 "data/scripts/players_house.pory"
	case MALE, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_11
# 257 "data/scripts/players_house.pory"
	case FEMALE, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_12
PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_9:
# 259 "data/scripts/players_house.pory"
	waitmovement 0
# 260 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_TicketFromBrineyCameForYou, MSGBOX_DEFAULT
# 261 "data/scripts/players_house.pory"
	giveitem ITEM_SS_TICKET
# 262 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_PortsInSlateportLilycove, MSGBOX_DEFAULT
# 263 "data/scripts/players_house.pory"
	closemessage
# 264 "data/scripts/players_house.pory"
	delay 20
# 265 "data/scripts/players_house.pory"
	switch VAR_0x8008
# 266 "data/scripts/players_house.pory"
	case MALE, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_15
# 270 "data/scripts/players_house.pory"
	case FEMALE, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_16
PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_13:
# 275 "data/scripts/players_house.pory"
	waitmovement 0
# 276 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_BetterGetBackToGym, MSGBOX_DEFAULT
# 277 "data/scripts/players_house.pory"
	closemessage
# 278 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_Movement_6
# 279 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_Movement_6
# 280 "data/scripts/players_house.pory"
	switch VAR_0x8008
# 281 "data/scripts/players_house.pory"
	case MALE, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_19
# 282 "data/scripts/players_house.pory"
	case FEMALE, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_20
PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_17:
# 284 "data/scripts/players_house.pory"
	waitmovement 0
# 285 "data/scripts/players_house.pory"
	playse SE_DOOR
# 286 "data/scripts/players_house.pory"
	removeobject VAR_0x8009
# 287 "data/scripts/players_house.pory"
	setflag FLAG_RECEIVED_SS_TICKET
# 288 "data/scripts/players_house.pory"
	delay 30
# 289 "data/scripts/players_house.pory"
	switch VAR_0x8008
# 290 "data/scripts/players_house.pory"
	case MALE, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_23
# 294 "data/scripts/players_house.pory"
	case FEMALE, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_24
PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_21:
# 299 "data/scripts/players_house.pory"
	waitmovement 0
# 300 "data/scripts/players_house.pory"
	delay 20
# 301 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_DadShouldStayLonger, MSGBOX_DEFAULT
# 302 "data/scripts/players_house.pory"
	closemessage
# 303 "data/scripts/players_house.pory"
	setflag FLAG_SYS_TV_LATIAS_LATIOS
# 304 "data/scripts/players_house.pory"
	special TurnOnTVScreen
# 305 "data/scripts/players_house.pory"
	delay 60
# 306 "data/scripts/players_house.pory"
	switch VAR_0x8008
# 307 "data/scripts/players_house.pory"
	case MALE, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_27
# 308 "data/scripts/players_house.pory"
	case FEMALE, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_28
PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_25:
# 310 "data/scripts/players_house.pory"
	waitmovement 0
# 311 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_IsThatABreakingStory, MSGBOX_DEFAULT
# 312 "data/scripts/players_house.pory"
	closemessage
# 313 "data/scripts/players_house.pory"
	switch VAR_0x8008
# 314 "data/scripts/players_house.pory"
	case MALE, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_31
# 318 "data/scripts/players_house.pory"
	case FEMALE, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_32
PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_29:
# 323 "data/scripts/players_house.pory"
	waitmovement 0
# 324 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_LatiEmergencyNewsFlash, MSGBOX_DEFAULT
# 325 "data/scripts/players_house.pory"
	closemessage
# 326 "data/scripts/players_house.pory"
	clearflag FLAG_SYS_TV_LATIAS_LATIOS
# 327 "data/scripts/players_house.pory"
	setflag FLAG_LATIOS_OR_LATIAS_ROAMING
# 328 "data/scripts/players_house.pory"
	special TurnOffTVScreen
# 329 "data/scripts/players_house.pory"
	switch VAR_0x8008
# 330 "data/scripts/players_house.pory"
	case MALE, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_35
# 334 "data/scripts/players_house.pory"
	case FEMALE, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_36
PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_33:
# 339 "data/scripts/players_house.pory"
	waitmovement 0
# 340 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_WhatColorDidTheySay, MSGBOX_DEFAULT
# 341 "data/scripts/players_house.pory"
	multichoice 22, 8, MULTI_TV_LATI, TRUE
# 342 "data/scripts/players_house.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 343 "data/scripts/players_house.pory"
	special InitRoamer
# 344 "data/scripts/players_house.pory"
	copyvar VAR_ROAMER_POKEMON, VAR_RESULT
# 345 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_StillUnknownPokemon, MSGBOX_DEFAULT
# 346 "data/scripts/players_house.pory"
	closemessage
# 347 "data/scripts/players_house.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 4
# 348 "data/scripts/players_house.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4
# 349 "data/scripts/players_house.pory"
	releaseall
	end

PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_3:
# 237 "data/scripts/players_house.pory"
	setvar VAR_0x8008, MALE
	goto PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_1

PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_4:
# 238 "data/scripts/players_house.pory"
	setvar VAR_0x8008, FEMALE
	goto PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_1

PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_7:
# 243 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_Movement_0
	goto PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_5

PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_8:
# 244 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_Movement_1
	goto PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_5

PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_11:
# 256 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_Movement_2
	goto PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_9

PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_12:
# 257 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_Movement_3
	goto PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_9

PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_15:
# 267 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_Movement_4
# 268 "data/scripts/players_house.pory"
	waitmovement 0
# 269 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, Common_Movement_FaceLeft
	goto PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_13

PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_16:
# 271 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_Movement_5
# 272 "data/scripts/players_house.pory"
	waitmovement 0
# 273 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, Common_Movement_FaceRight
	goto PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_13

PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_19:
# 281 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_Movement_7
	goto PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_17

PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_20:
# 282 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_Movement_8
	goto PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_17

PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_23:
# 291 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, Common_Movement_WalkRight
# 292 "data/scripts/players_house.pory"
	waitmovement 0
# 293 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterLeft
	goto PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_21

PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_24:
# 295 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, Common_Movement_WalkLeft
# 296 "data/scripts/players_house.pory"
	waitmovement 0
# 297 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterRight
	goto PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_21

PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_27:
# 307 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_Movement_9
	goto PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_25

PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_28:
# 308 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_Movement_10
	goto PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_25

PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_31:
# 315 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_Movement_11
# 316 "data/scripts/players_house.pory"
	waitmovement 0
# 317 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, Common_Movement_StepFasterLeft
	goto PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_29

PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_32:
# 319 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_Movement_12
# 320 "data/scripts/players_house.pory"
	waitmovement 0
# 321 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, Common_Movement_StepFasterRight
	goto PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_29

PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_35:
# 331 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_Movement_13
# 332 "data/scripts/players_house.pory"
	waitmovement 0
# 333 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterRight
	goto PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_33

PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_36:
# 335 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_Movement_14
# 336 "data/scripts/players_house.pory"
	waitmovement 0
# 337 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterLeft
	goto PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_33


PlayersHouse_1F_EventScript_AirLatiBroadcast::
# 355 "data/scripts/players_house.pory"
	setflag FLAG_SYS_TV_LATIAS_LATIOS
	return


EventScript_RunningShoesManual::
# 360 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_RunningShoesManual, MSGBOX_SIGN
	end


# 64 "data/scripts/players_house.pory"
PlayersHouse_2F_EventScript_WallClock_Movement_0:
# 64 "data/scripts/players_house.pory"
	delay_8
# 64 "data/scripts/players_house.pory"
	walk_down
# 64 "data/scripts/players_house.pory"
	step_faster_left
# 64 "data/scripts/players_house.pory"
	delay_16
# 64 "data/scripts/players_house.pory"
	delay_8
# 64 "data/scripts/players_house.pory"
	walk_left
	step_end

# 65 "data/scripts/players_house.pory"
PlayersHouse_2F_EventScript_WallClock_Movement_1:
# 65 "data/scripts/players_house.pory"
	delay_8
# 65 "data/scripts/players_house.pory"
	walk_down
# 65 "data/scripts/players_house.pory"
	step_faster_right
# 65 "data/scripts/players_house.pory"
	delay_16
# 65 "data/scripts/players_house.pory"
	delay_8
# 65 "data/scripts/players_house.pory"
	walk_right
	step_end

# 76 "data/scripts/players_house.pory"
PlayersHouse_2F_EventScript_WallClock_Movement_2:
# 76 "data/scripts/players_house.pory"
	walk_right
# 76 "data/scripts/players_house.pory"
	walk_up
# 76 "data/scripts/players_house.pory"
	delay_8
	step_end

# 77 "data/scripts/players_house.pory"
PlayersHouse_2F_EventScript_WallClock_Movement_3:
# 77 "data/scripts/players_house.pory"
	walk_left
# 77 "data/scripts/players_house.pory"
	walk_up
# 77 "data/scripts/players_house.pory"
	delay_8
	step_end

# 114 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_PetalburgGymReport_Movement_0:
# 114 "data/scripts/players_house.pory"
	walk_down
# 114 "data/scripts/players_house.pory"
	walk_down
# 114 "data/scripts/players_house.pory"
	walk_left
# 114 "data/scripts/players_house.pory"
	walk_left
# 114 "data/scripts/players_house.pory"
	walk_left
	step_end

# 115 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_PetalburgGymReport_Movement_1:
# 115 "data/scripts/players_house.pory"
	walk_down
# 115 "data/scripts/players_house.pory"
	walk_down
# 115 "data/scripts/players_house.pory"
	walk_right
# 115 "data/scripts/players_house.pory"
	walk_right
# 115 "data/scripts/players_house.pory"
	walk_right
	step_end

# 123 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_PetalburgGymReport_Movement_2:
# 123 "data/scripts/players_house.pory"
	walk_left
# 123 "data/scripts/players_house.pory"
	step_faster_right
	step_end

# 127 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_PetalburgGymReport_Movement_3:
# 127 "data/scripts/players_house.pory"
	walk_right
# 127 "data/scripts/players_house.pory"
	step_faster_left
	step_end

# 149 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_PetalburgGymReport_Movement_4:
# 149 "data/scripts/players_house.pory"
	walk_left
# 149 "data/scripts/players_house.pory"
	walk_down
# 149 "data/scripts/players_house.pory"
	step_faster_right
	step_end

# 150 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_PetalburgGymReport_Movement_5:
# 150 "data/scripts/players_house.pory"
	walk_right
# 150 "data/scripts/players_house.pory"
	walk_down
# 150 "data/scripts/players_house.pory"
	step_faster_left
	step_end

# 243 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_Movement_0:
# 243 "data/scripts/players_house.pory"
	delay_16
# 243 "data/scripts/players_house.pory"
	walk_down
# 243 "data/scripts/players_house.pory"
	walk_down
# 243 "data/scripts/players_house.pory"
	walk_down
# 243 "data/scripts/players_house.pory"
	step_faster_left
	step_end

# 244 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_Movement_1:
# 244 "data/scripts/players_house.pory"
	delay_16
# 244 "data/scripts/players_house.pory"
	walk_down
# 244 "data/scripts/players_house.pory"
	walk_down
# 244 "data/scripts/players_house.pory"
	walk_down
# 244 "data/scripts/players_house.pory"
	step_faster_right
	step_end

# 256 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_Movement_2:
# 256 "data/scripts/players_house.pory"
	walk_right
# 256 "data/scripts/players_house.pory"
	walk_right
	step_end

# 257 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_Movement_3:
# 257 "data/scripts/players_house.pory"
	walk_left
# 257 "data/scripts/players_house.pory"
	walk_left
	step_end

# 267 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_Movement_4:
# 267 "data/scripts/players_house.pory"
	walk_up
# 267 "data/scripts/players_house.pory"
	walk_right
# 267 "data/scripts/players_house.pory"
	walk_right
# 267 "data/scripts/players_house.pory"
	walk_right
# 267 "data/scripts/players_house.pory"
	walk_right
# 267 "data/scripts/players_house.pory"
	walk_down
# 267 "data/scripts/players_house.pory"
	step_faster_right
	step_end

# 271 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_Movement_5:
# 271 "data/scripts/players_house.pory"
	walk_up
# 271 "data/scripts/players_house.pory"
	walk_left
# 271 "data/scripts/players_house.pory"
	walk_left
# 271 "data/scripts/players_house.pory"
	walk_left
# 271 "data/scripts/players_house.pory"
	walk_left
# 271 "data/scripts/players_house.pory"
	walk_down
# 271 "data/scripts/players_house.pory"
	step_faster_left
	step_end

# 278 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_Movement_6:
# 278 "data/scripts/players_house.pory"
	delay_8
# 278 "data/scripts/players_house.pory"
	delay_16
# 278 "data/scripts/players_house.pory"
	delay_16
# 278 "data/scripts/players_house.pory"
	step_faster_down
	step_end

# 281 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_Movement_7:
# 281 "data/scripts/players_house.pory"
	walk_down
# 281 "data/scripts/players_house.pory"
	walk_right
# 281 "data/scripts/players_house.pory"
	walk_down
# 281 "data/scripts/players_house.pory"
	delay_8
	step_end

# 282 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_Movement_8:
# 282 "data/scripts/players_house.pory"
	walk_down
# 282 "data/scripts/players_house.pory"
	walk_left
# 282 "data/scripts/players_house.pory"
	walk_down
# 282 "data/scripts/players_house.pory"
	delay_8
	step_end

# 307 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_Movement_9:
# 307 "data/scripts/players_house.pory"
	step_faster_left
# 307 "data/scripts/players_house.pory"
	delay_16
# 307 "data/scripts/players_house.pory"
	delay_16
# 307 "data/scripts/players_house.pory"
	delay_16
# 307 "data/scripts/players_house.pory"
	delay_16
# 307 "data/scripts/players_house.pory"
	step_faster_right
# 307 "data/scripts/players_house.pory"
	delay_16
# 307 "data/scripts/players_house.pory"
	delay_16
	step_end

# 308 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_Movement_10:
# 308 "data/scripts/players_house.pory"
	step_faster_right
# 308 "data/scripts/players_house.pory"
	delay_16
# 308 "data/scripts/players_house.pory"
	delay_16
# 308 "data/scripts/players_house.pory"
	delay_16
# 308 "data/scripts/players_house.pory"
	delay_16
# 308 "data/scripts/players_house.pory"
	step_faster_left
# 308 "data/scripts/players_house.pory"
	delay_16
# 308 "data/scripts/players_house.pory"
	delay_16
	step_end

# 315 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_Movement_11:
# 315 "data/scripts/players_house.pory"
	walk_up
# 315 "data/scripts/players_house.pory"
	walk_left
# 315 "data/scripts/players_house.pory"
	walk_left
# 315 "data/scripts/players_house.pory"
	walk_left
# 315 "data/scripts/players_house.pory"
	walk_left
# 315 "data/scripts/players_house.pory"
	step_faster_up
	step_end

# 319 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_Movement_12:
# 319 "data/scripts/players_house.pory"
	walk_up
# 319 "data/scripts/players_house.pory"
	walk_right
# 319 "data/scripts/players_house.pory"
	walk_right
# 319 "data/scripts/players_house.pory"
	walk_right
# 319 "data/scripts/players_house.pory"
	walk_right
# 319 "data/scripts/players_house.pory"
	step_faster_up
	step_end

# 331 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_Movement_13:
# 331 "data/scripts/players_house.pory"
	walk_up
# 331 "data/scripts/players_house.pory"
	walk_left
# 331 "data/scripts/players_house.pory"
	walk_left
	step_end

# 335 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV_Movement_14:
# 335 "data/scripts/players_house.pory"
	walk_up
# 335 "data/scripts/players_house.pory"
	walk_right
# 335 "data/scripts/players_house.pory"
	walk_right
	step_end
