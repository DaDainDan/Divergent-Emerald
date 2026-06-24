LavaridgeTown_MapScripts::
# 2 "data/maps/LavaridgeTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 24 "data/maps/LavaridgeTown/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, LavaridgeTown_MapScripts_MAP_SCRIPT_ON_RESUME
# 28 "data/maps/LavaridgeTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LavaridgeTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LavaridgeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_VISITED_LAVARIDGE_TOWN
# 4 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_set FLAG_WHITEOUT_TO_LAVARIDGE, LavaridgeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
LavaridgeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 7 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, LavaridgeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
LavaridgeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 10 "data/maps/LavaridgeTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 11 "data/maps/LavaridgeTown/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 12 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_LAVARIDGE_TOWN_STATE, 1
	goto_if_eq LavaridgeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
LavaridgeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
	end

LavaridgeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_WHITEOUT_TO_LAVARIDGE
	goto LavaridgeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

LavaridgeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 8 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_TRAINERS
	goto LavaridgeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

LavaridgeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 13 "data/maps/LavaridgeTown/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 14 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_0x8004, 9
	goto_if_eq LavaridgeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
LavaridgeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 20 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
	goto LavaridgeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

LavaridgeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 15 "data/maps/LavaridgeTown/scripts.pory"
	setobjectxyperm LOCALID_LAVARIDGE_RIVAL, 11, 9
# 16 "data/maps/LavaridgeTown/scripts.pory"
	setobjectxyperm LOCALID_LAVARIDGE_RIVAL_ON_BIKE, 9, 8
# 17 "data/maps/LavaridgeTown/scripts.pory"
	setobjectmovementtype LOCALID_LAVARIDGE_RIVAL_ON_BIKE, MOVEMENT_TYPE_FACE_UP
# 18 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_LAVARIDGE_TOWN_RIVAL
	goto LavaridgeTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

LavaridgeTown_MapScripts_MAP_SCRIPT_ON_RESUME:
# 25 "data/maps/LavaridgeTown/scripts.pory"
	setstepcallback STEP_CB_ASH
	end

LavaridgeTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 29 "data/maps/LavaridgeTown/scripts.pory"
	map_script_2 VAR_LAVARIDGE_TOWN_STATE, 1, LavaridgeTown_EventScript_RivalGiveGoGoggles
	.2byte 0


LavaridgeTown_EventScript_RivalGiveGoGoggles::
# 34 "data/maps/LavaridgeTown/scripts.pory"
	lockall
# 35 "data/maps/LavaridgeTown/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 36 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_0x8008, 9
	goto_if_eq LavaridgeTown_EventScript_RivalGiveGoGoggles_2
# 44 "data/maps/LavaridgeTown/scripts.pory"
	opendoor 12, 15
# 45 "data/maps/LavaridgeTown/scripts.pory"
	waitdooranim
# 46 "data/maps/LavaridgeTown/scripts.pory"
	addobject LOCALID_LAVARIDGE_RIVAL
# 47 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_LAVARIDGE_RIVAL, Common_Movement_WalkDown
# 48 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 49 "data/maps/LavaridgeTown/scripts.pory"
	closedoor 12, 15
# 50 "data/maps/LavaridgeTown/scripts.pory"
	waitdooranim
# 51 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_LAVARIDGE_RIVAL, Common_Movement_StepFasterLeft
# 52 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 53 "data/maps/LavaridgeTown/scripts.pory"
	playse SE_PIN
# 54 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_LAVARIDGE_RIVAL, Common_Movement_ExclamationMark
# 55 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 56 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_LAVARIDGE_RIVAL, Common_Movement_Delay48
# 57 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 58 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterRight
LavaridgeTown_EventScript_RivalGiveGoGoggles_1:
# 60 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 61 "data/maps/LavaridgeTown/scripts.pory"
	delay 20
	checkplayergender
# 0 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LavaridgeTown_EventScript_RivalGiveGoGoggles_6
# 65 "data/maps/LavaridgeTown/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
LavaridgeTown_EventScript_RivalGiveGoGoggles_5:
# 67 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_0x8008, 9
	goto_if_eq LavaridgeTown_EventScript_RivalGiveGoGoggles_10
# 70 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_LAVARIDGE_RIVAL, LavaridgeTown_EventScript_RivalGiveGoGoggles_Movement_1
LavaridgeTown_EventScript_RivalGiveGoGoggles_9:
# 72 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
	checkplayergender
# 0 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LavaridgeTown_EventScript_RivalGiveGoGoggles_14
# 78 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_BrendanNiceBadgesTakeThis, MSGBOX_DEFAULT
# 79 "data/maps/LavaridgeTown/scripts.pory"
	giveitem ITEM_GO_GOGGLES
# 80 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_BrendanExplainGoGogglesChallengeDad, MSGBOX_DEFAULT
LavaridgeTown_EventScript_RivalGiveGoGoggles_13:
# 82 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_RECEIVED_GO_GOGGLES
# 83 "data/maps/LavaridgeTown/scripts.pory"
	closemessage
# 84 "data/maps/LavaridgeTown/scripts.pory"
	removeobject LOCALID_LAVARIDGE_RIVAL
# 85 "data/maps/LavaridgeTown/scripts.pory"
	addobject LOCALID_LAVARIDGE_RIVAL_ON_BIKE
# 86 "data/maps/LavaridgeTown/scripts.pory"
	delay 30
# 87 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_0x8008, 9
	goto_if_eq LavaridgeTown_EventScript_RivalGiveGoGoggles_18
# 91 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_LAVARIDGE_RIVAL_ON_BIKE, LavaridgeTown_EventScript_RivalGiveGoGoggles_Movement_4
LavaridgeTown_EventScript_RivalGiveGoGoggles_17:
# 93 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 94 "data/maps/LavaridgeTown/scripts.pory"
	removeobject LOCALID_LAVARIDGE_RIVAL_ON_BIKE
# 95 "data/maps/LavaridgeTown/scripts.pory"
	setvar VAR_LAVARIDGE_TOWN_STATE, 2
# 96 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 97 "data/maps/LavaridgeTown/scripts.pory"
	savebgm MUS_DUMMY
# 98 "data/maps/LavaridgeTown/scripts.pory"
	fadedefaultbgm
# 99 "data/maps/LavaridgeTown/scripts.pory"
	releaseall
	end

LavaridgeTown_EventScript_RivalGiveGoGoggles_2:
# 37 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_LAVARIDGE_RIVAL, Common_Movement_StepFasterUp
# 38 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 39 "data/maps/LavaridgeTown/scripts.pory"
	playse SE_PIN
# 40 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_LAVARIDGE_RIVAL, Common_Movement_ExclamationMark
# 41 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 42 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_LAVARIDGE_RIVAL, Common_Movement_Delay48
	goto LavaridgeTown_EventScript_RivalGiveGoGoggles_1

LavaridgeTown_EventScript_RivalGiveGoGoggles_6:
# 63 "data/maps/LavaridgeTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
	goto LavaridgeTown_EventScript_RivalGiveGoGoggles_5

LavaridgeTown_EventScript_RivalGiveGoGoggles_10:
# 68 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_LAVARIDGE_RIVAL, LavaridgeTown_EventScript_RivalGiveGoGoggles_Movement_0
	goto LavaridgeTown_EventScript_RivalGiveGoGoggles_9

LavaridgeTown_EventScript_RivalGiveGoGoggles_14:
# 74 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_MayNiceBadgesTakeThis, MSGBOX_DEFAULT
# 75 "data/maps/LavaridgeTown/scripts.pory"
	giveitem ITEM_GO_GOGGLES
# 76 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_MayExplainGoGogglesChallengeDad, MSGBOX_DEFAULT
	goto LavaridgeTown_EventScript_RivalGiveGoGoggles_13

LavaridgeTown_EventScript_RivalGiveGoGoggles_18:
# 88 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_PLAYER, LavaridgeTown_EventScript_RivalGiveGoGoggles_Movement_2
# 89 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_LAVARIDGE_RIVAL_ON_BIKE, LavaridgeTown_EventScript_RivalGiveGoGoggles_Movement_3
	goto LavaridgeTown_EventScript_RivalGiveGoGoggles_17


LavaridgeTown_EventScript_HotSpringsTrigger::
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 0 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq LavaridgeTown_EventScript_HotSpringsTrigger_2
LavaridgeTown_EventScript_HotSpringsTrigger_1:
	end

LavaridgeTown_EventScript_HotSpringsTrigger_2:
# 105 "data/maps/LavaridgeTown/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_HOT_SPRINGS
	goto LavaridgeTown_EventScript_HotSpringsTrigger_1


LavaridgeTown_EventScript_ExpertM::
# 111 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HotSpringsNeverRunDry, MSGBOX_NPC
	end


LavaridgeTown_EventScript_OldMan::
# 116 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_PokemonNippedBackside, MSGBOX_SIGN
	end


LavaridgeTown_EventScript_Twin::
# 121 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_BatheInHotSpringsEveryDay, MSGBOX_NPC
	end


LavaridgeTown_EventScript_HotSpringsOldWoman1::
# 126 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_IfPokemonInHotSprings, MSGBOX_NPC
	end


LavaridgeTown_EventScript_HotSpringsOldWoman2::
# 131 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HotSpringsClaims, MSGBOX_NPC
	end


LavaridgeTown_EventScript_ExpertF::
# 136 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_OhYouLikeHotSprings, MSGBOX_NPC
	end


LavaridgeTown_EventScript_EggWoman::
# 141 "data/maps/LavaridgeTown/scripts.pory"
	lock_faceplayer
# 142 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_LAVARIDGE_EGG, LavaridgeTown_EventScript_EggWoman_2
# 146 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HaveEggWillYouTakeIt, MSGBOX_YESNO
# 147 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LavaridgeTown_EventScript_EggWoman_5
	getpartysize
# 0 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq LavaridgeTown_EventScript_EggWoman_8
# 155 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HopeYoullWalkPlentyWithEgg, MSGBOX_DEFAULT
# 156 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_RECEIVED_LAVARIDGE_EGG
# 157 "data/maps/LavaridgeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 158 "data/maps/LavaridgeTown/scripts.pory"
	message LavaridgeTown_Text_ReceivedTheEgg
# 159 "data/maps/LavaridgeTown/scripts.pory"
	waitfanfare
# 160 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_WYNAUT
	release_end

LavaridgeTown_EventScript_EggWoman_2:
# 143 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_EverySoOftenEggFoundAtDayCare, MSGBOX_DEFAULT
	release_end

LavaridgeTown_EventScript_EggWoman_5:
# 148 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_AsYouWishThen, MSGBOX_DEFAULT
	release_end

LavaridgeTown_EventScript_EggWoman_8:
# 152 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_NoRoomForThisEgg, MSGBOX_DEFAULT
	release_end


LavaridgeTown_EventScript_TownSign::
# 165 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_TownSign, MSGBOX_SIGN
	end


LavaridgeTown_EventScript_GymSign::
# 170 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_GymSign, MSGBOX_SIGN
	end


LavaridgeTown_EventScript_HerbShopSign::
# 175 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HerbShopSign, MSGBOX_SIGN
	end


# 68 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalGiveGoGoggles_Movement_0:
# 68 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 68 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 68 "data/maps/LavaridgeTown/scripts.pory"
	walk_up
	step_end

# 70 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalGiveGoGoggles_Movement_1:
# 70 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 70 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 70 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 70 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 70 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 70 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
	step_end

# 88 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalGiveGoGoggles_Movement_2:
# 88 "data/maps/LavaridgeTown/scripts.pory"
	delay_16
# 88 "data/maps/LavaridgeTown/scripts.pory"
	delay_8
# 88 "data/maps/LavaridgeTown/scripts.pory"
	step_faster_right
	step_end

# 89 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalGiveGoGoggles_Movement_3:
# 89 "data/maps/LavaridgeTown/scripts.pory"
	run_down
# 89 "data/maps/LavaridgeTown/scripts.pory"
	run_right
# 89 "data/maps/LavaridgeTown/scripts.pory"
	run_right
# 89 "data/maps/LavaridgeTown/scripts.pory"
	run_right
# 89 "data/maps/LavaridgeTown/scripts.pory"
	run_right
# 89 "data/maps/LavaridgeTown/scripts.pory"
	run_right
# 89 "data/maps/LavaridgeTown/scripts.pory"
	run_right
# 89 "data/maps/LavaridgeTown/scripts.pory"
	run_right
# 89 "data/maps/LavaridgeTown/scripts.pory"
	run_right
	step_end

# 91 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalGiveGoGoggles_Movement_4:
# 91 "data/maps/LavaridgeTown/scripts.pory"
	run_right
# 91 "data/maps/LavaridgeTown/scripts.pory"
	run_right
# 91 "data/maps/LavaridgeTown/scripts.pory"
	run_right
# 91 "data/maps/LavaridgeTown/scripts.pory"
	run_up
# 91 "data/maps/LavaridgeTown/scripts.pory"
	run_up
# 91 "data/maps/LavaridgeTown/scripts.pory"
	run_up
# 91 "data/maps/LavaridgeTown/scripts.pory"
	run_up
# 91 "data/maps/LavaridgeTown/scripts.pory"
	run_up
# 91 "data/maps/LavaridgeTown/scripts.pory"
	run_up
# 91 "data/maps/LavaridgeTown/scripts.pory"
	run_up
	step_end

LavaridgeTown_Text_MayNiceBadgesTakeThis::
# 179 "data/maps/LavaridgeTown/scripts.pory"
	.string "{SPEAKER NAME_MAY}{PLAYER}{KUN}! Long time no see!\p"
	.string "Oh? While I visited the hot springs,\n"
	.string "you got the LAVARIDGE GYM BADGE.\p"
	.string "You must have collected\n"
	.string "good POKéMON…\l"
	.string "No, I believe you raised some.\p"
	.string "I guess it would be okay for you to\n"
	.string "have this.$"

LavaridgeTown_Text_MayExplainGoGogglesChallengeDad::
# 193 "data/maps/LavaridgeTown/scripts.pory"
	.string "{SPEAKER NAME_MAY}With those GO-GOGGLES, you'll\n"
	.string "have no trouble getting through the\l"
	.string "desert near ROUTE 111.\p"
	.string "But, wow, {PLAYER}{KUN}…\n"
	.string "Challenging GYMS…\p"
	.string "You're trying hard because you don't\n"
	.string "want to lose to me, I bet!\p"
	.string "{PLAYER}{KUN}, I think I should challenge\n"
	.string "your dad in PETALBURG GYM.\p"
	.string "See you again!$"

LavaridgeTown_Text_BrendanNiceBadgesTakeThis::
# 210 "data/maps/LavaridgeTown/scripts.pory"
	.string "{SPEAKER NAME_BRENDAN}{PLAYER}, hey, it's been a while.\n"
	.string "How's it going?\p"
	.string "Hmm…\n"
	.string "That's a decent collection of BADGES.\p"
	.string "All right, then.\n"
	.string "You may as well have this.$"

LavaridgeTown_Text_BrendanExplainGoGogglesChallengeDad::
# 221 "data/maps/LavaridgeTown/scripts.pory"
	.string "{SPEAKER NAME_BRENDAN}Keep those with you if you're\n"
	.string "planning on going into that desert near\l"
	.string "ROUTE 111.\p"
	.string "There should be some POKéMON that\n"
	.string "are exclusively desert-dwellers.\l"
	.string "You might look around for those.\p"
	.string "As for me…\n"
	.string "I'm considering challenging NORMAN,\l"
	.string "the GYM LEADER of PETALBURG.\p"
	.string "Unlike you, {PLAYER}, your dad looks like\n"
	.string "he really is tough.\p"
	.string "See you around!$"

LavaridgeTown_Text_HaveEggWillYouTakeIt::
# 240 "data/maps/LavaridgeTown/scripts.pory"
	.string "I have here an EGG.\p"
	.string "I'd hoped to hatch it by covering it in\n"
	.string "hot sand by the hot springs.\l"
	.string "But that doesn't seem to be enough…\p"
	.string "I've heard it would be best if it were\n"
	.string "kept together with POKéMON and\l"
	.string "carried about.\p"
	.string "You are a TRAINER, yes?\n"
	.string "And your POKéMON radiate vitality.\p"
	.string "So, what say you?\n"
	.string "Will you take this EGG to hatch?$"

LavaridgeTown_Text_HopeYoullWalkPlentyWithEgg::
# 258 "data/maps/LavaridgeTown/scripts.pory"
	.string "Good! I hope you'll walk plenty with\n"
	.string "this here EGG!$"

LavaridgeTown_Text_ReceivedTheEgg::
# 263 "data/maps/LavaridgeTown/scripts.pory"
	.string "{PLAYER} received the EGG.$"

LavaridgeTown_Text_NoRoomForThisEgg::
# 267 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh? You've too many POKéMON.\n"
	.string "There's no room for this EGG…$"

LavaridgeTown_Text_AsYouWishThen::
# 272 "data/maps/LavaridgeTown/scripts.pory"
	.string "As you wish, then…\p"
	.string "If you have a change of heart about\n"
	.string "hatching this EGG, I will be here.$"

LavaridgeTown_Text_EverySoOftenEggFoundAtDayCare::
# 279 "data/maps/LavaridgeTown/scripts.pory"
	.string "Every so often, an EGG will be found at\n"
	.string "the POKéMON DAY CARE.\p"
	.string "Or at least that's how the rumor goes.$"

LavaridgeTown_Text_HotSpringsNeverRunDry::
# 286 "data/maps/LavaridgeTown/scripts.pory"
	.string "We draw as much hot water as we need,\n"
	.string "and yet the hot springs never run dry.\p"
	.string "Isn't it magical?\p"
	.string "These hot springs appear near active\n"
	.string "volcanoes. Veins of water under the\l"
	.string "ground are heated by magma to well up\l"
	.string "as hot springs.$"

LavaridgeTown_Text_PokemonNippedBackside::
# 298 "data/maps/LavaridgeTown/scripts.pory"
	.string "Being buried in this hot sand is…\n"
	.string "Sigh…\p"
	.string "So warm and heavenly…\p"
	.string "Eh? Gyaah! Ouch!\p"
	.string "A POKéMON nipped my backside!$"

LavaridgeTown_Text_OhYouLikeHotSprings::
# 309 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh, you like hot springs, do you?\p"
	.string "That's surprising for one as young\n"
	.string "as you.$"

LavaridgeTown_Text_BatheInHotSpringsEveryDay::
# 316 "data/maps/LavaridgeTown/scripts.pory"
	.string "I bathe in the hot springs every day.\p"
	.string "I want to become a beautiful and strong\n"
	.string "GYM LEADER like FLANNERY.$"

LavaridgeTown_Text_IfPokemonInHotSprings::
# 323 "data/maps/LavaridgeTown/scripts.pory"
	.string "If people put POKéMON in hot springs,\n"
	.string "it might be seriously strange.\p"
	.string "Why, it might be an electric bath, or\n"
	.string "a bubble bath, or even a lava bath…$"

LavaridgeTown_Text_HotSpringsClaims::
# 331 "data/maps/LavaridgeTown/scripts.pory"
	.string "They're claiming that these hot springs\n"
	.string "are good for calming nervous tension,\l"
	.string "relieving aching muscles, solving\l"
	.string "romantic problems, and attracting\l"
	.string "money…$"

LavaridgeTown_Text_TownSign::
# 339 "data/maps/LavaridgeTown/scripts.pory"
	.string "LAVARIDGE TOWN\p"
	.string "“POKéMON CENTER HOT SPRINGS\n"
	.string "An excellent place for relaxing!”$"

LavaridgeTown_Text_GymSign::
# 346 "data/maps/LavaridgeTown/scripts.pory"
	.string "LAVARIDGE TOWN POKéMON GYM\n"
	.string "LEADER: FLANNERY\l"
	.string "“One with a fiery passion that burns!”$"

LavaridgeTown_Text_HerbShopSign::
# 352 "data/maps/LavaridgeTown/scripts.pory"
	.string "POKéMON HERB SHOP\n"
	.string "“Bitter taste--better cure!”$"
