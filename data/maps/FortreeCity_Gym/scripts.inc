FortreeCity_Gym_MapScripts::
# 2 "data/maps/FortreeCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FortreeCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 7 "data/maps/FortreeCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, FortreeCity_Gym_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

FortreeCity_Gym_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/FortreeCity_Gym/scripts.pory"
	special RotatingGate_InitPuzzle
# 4 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
	end

FortreeCity_Gym_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 9 "data/maps/FortreeCity_Gym/scripts.pory"
	map_script_2 VAR_TEMP_0, VAR_TEMP_0, FortreeCity_Gym_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

FortreeCity_Gym_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 10 "data/maps/FortreeCity_Gym/scripts.pory"
	special RotatingGate_InitPuzzleAndGraphics
	end


FortreeCity_Gym_EventScript_Winona::
# 17 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, FortreeCity_Gym_EventScript_Winona_2
# 27 "data/maps/FortreeCity_Gym/scripts.pory"
	checktrainerflag TRAINER_FLANNERY_2
	goto_if 1, FortreeCity_Gym_EventScript_Winona_5
# 32 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaIntro, FortreeCity_Gym_Text_WinonaDefeat, FortreeCity_Gym_EventScript_WinonaDefeated, NO_MUSIC
# 33 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_HM_FLY, FortreeCity_Gym_EventScript_Winona_11
# 41 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_WinonaPostBattle, MSGBOX_DEFAULT
	release_end

FortreeCity_Gym_EventScript_Winona_2:
# 18 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_WINONA_FINAL, FortreeCity_Gym_EventScript_Winona_8
# 22 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_WinonaFinalIntro, MSGBOX_DEFAULT
# 23 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_WINONA_3, FortreeCity_Gym_Text_WinonaFinalDefeat
# 24 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_WinonaPostFinal, MSGBOX_AUTOCLOSE
	end

FortreeCity_Gym_EventScript_Winona_5:
# 28 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_double TRAINER_WINONA_2, FortreeCity_Gym_Text_WinonaPreRematch, FortreeCity_Gym_Text_WinonaRematchDefeat, FortreeCity_Gym_Text_WinonaRematchNeedTwoMons
# 29 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_WinonaPostRematch, MSGBOX_AUTOCLOSE
	end

FortreeCity_Gym_EventScript_Winona_8:
# 19 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_WinonaPostFinal, MSGBOX_AUTOCLOSE
	end

FortreeCity_Gym_EventScript_Winona_11:
	giveitem ITEM_HM_FLY
# 0 "data/maps/FortreeCity_Gym/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FortreeCity_Gym_EventScript_Winona_14
FortreeCity_Gym_EventScript_Winona_13:
# 37 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainAerialAce, MSGBOX_DEFAULT
# 38 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLY
	release_end

FortreeCity_Gym_EventScript_Winona_14:
# 35 "data/maps/FortreeCity_Gym/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto FortreeCity_Gym_EventScript_Winona_13


FortreeCity_Gym_EventScript_WinonaDefeated::
# 46 "data/maps/FortreeCity_Gym/scripts.pory"
	message FortreeCity_Gym_Text_ReceivedFeatherBadge
# 47 "data/maps/FortreeCity_Gym/scripts.pory"
	waitmessage
# 48 "data/maps/FortreeCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 49 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis, MSGBOX_DEFAULT
# 50 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_FORTREE_GYM
# 51 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_BADGE06_GET
# 52 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_0x8008, 6
# 53 "data/maps/FortreeCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
	giveitem ITEM_HM_FLY
# 0 "data/maps/FortreeCity_Gym/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FortreeCity_Gym_EventScript_WinonaDefeated_2
FortreeCity_Gym_EventScript_WinonaDefeated_1:
# 57 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainAerialAce, MSGBOX_DEFAULT
# 58 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLY
# 59 "data/maps/FortreeCity_Gym/scripts.pory"
	closemessage
# 60 "data/maps/FortreeCity_Gym/scripts.pory"
	delay 30
# 61 "data/maps/FortreeCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 62 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_RegisteredWinona, MSGBOX_DEFAULT
# 63 "data/maps/FortreeCity_Gym/scripts.pory"
	waitfanfare
# 64 "data/maps/FortreeCity_Gym/scripts.pory"
	closemessage
# 65 "data/maps/FortreeCity_Gym/scripts.pory"
	delay 30
# 66 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_WINONA_MATCH_CALL
# 67 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_SCOTT_FORTREE_CALL_STEP_COUNTER, 0
# 68 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_SCOTT_CALL_FORTREE_GYM
# 69 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_SECRET_POWER
# 70 "data/maps/FortreeCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_112_TEAM_MAGMA
# 71 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_DAYCARE_EGG, FortreeCity_Gym_EventScript_WinonaDefeated_5
FortreeCity_Gym_EventScript_WinonaDefeated_4:
	release_end

FortreeCity_Gym_EventScript_WinonaDefeated_2:
# 55 "data/maps/FortreeCity_Gym/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto FortreeCity_Gym_EventScript_WinonaDefeated_1

FortreeCity_Gym_EventScript_WinonaDefeated_5:
# 72 "data/maps/FortreeCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_DAYCARE_GIRL
	goto FortreeCity_Gym_EventScript_WinonaDefeated_4


FortreeCity_Gym_EventScript_Jared::
# 79 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JARED, FortreeCity_Gym_Text_JaredIntro, FortreeCity_Gym_Text_JaredDefeat
# 80 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_JaredPostBattle, MSGBOX_AUTOCLOSE
	end


FortreeCity_Gym_EventScript_Edwardo::
# 85 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_EDWARDO, FortreeCity_Gym_Text_EdwardoIntro, FortreeCity_Gym_Text_EdwardoDefeat
# 86 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_EdwardoPostBattle, MSGBOX_AUTOCLOSE
	end


FortreeCity_Gym_EventScript_Flint::
# 91 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_FLINT, FortreeCity_Gym_Text_FlintIntro, FortreeCity_Gym_Text_FlintDefeat
# 92 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_FlintPostBattle, MSGBOX_AUTOCLOSE
	end


FortreeCity_Gym_EventScript_Ashley::
# 97 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ASHLEY, FortreeCity_Gym_Text_AshleyIntro, FortreeCity_Gym_Text_AshleyDefeat
# 98 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_AshleyPostBattle, MSGBOX_AUTOCLOSE
	end


FortreeCity_Gym_EventScript_Jordan::
# 103 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JORDAN, FortreeCity_Gym_Text_JordanIntro, FortreeCity_Gym_Text_JordanDefeat
# 104 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_JordanPostBattle, MSGBOX_AUTOCLOSE
	end


FortreeCity_Gym_EventScript_Darius::
# 109 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_DARIUS, FortreeCity_Gym_Text_DariusIntro, FortreeCity_Gym_Text_DariusDefeat
# 110 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_DariusPostBattle, MSGBOX_AUTOCLOSE
	end


FortreeCity_Gym_EventScript_Sophie::
# 115 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SOPHIE, FortreeCity_Gym_Text_SophieIntro, FortreeCity_Gym_Text_SophieDefeat
# 116 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_SophiePostBattle, MSGBOX_AUTOCLOSE
	end


FortreeCity_Gym_EventScript_Melanie::
# 121 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MELANIE, FortreeCity_Gym_Text_MelanieIntro, FortreeCity_Gym_Text_MelanieDefeated
# 122 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_MelaniePostBattle, MSGBOX_AUTOCLOSE
	end


FortreeCity_Gym_EventScript_GymGuide::
# 127 "data/maps/FortreeCity_Gym/scripts.pory"
	lock_faceplayer
# 128 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_AERIAL_ACE, FortreeCity_Gym_EventScript_GymGuide_2
# 131 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_FORTREE_GYM, FortreeCity_Gym_EventScript_GymGuide_3
# 142 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
FortreeCity_Gym_EventScript_GymGuide_1:
	release_end

FortreeCity_Gym_EventScript_GymGuide_2:
# 129 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	goto FortreeCity_Gym_EventScript_GymGuide_1

FortreeCity_Gym_EventScript_GymGuide_3:
# 132 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 133 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_AERIAL_ACE, FortreeCity_Gym_EventScript_GymGuide_7
	goto FortreeCity_Gym_EventScript_GymGuide_1

FortreeCity_Gym_EventScript_GymGuide_7:
	giveitem ITEM_TM_U_TURN
# 0 "data/maps/FortreeCity_Gym/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FortreeCity_Gym_EventScript_GymGuide_10
FortreeCity_Gym_EventScript_GymGuide_9:
# 137 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainAerialAce, MSGBOX_DEFAULT
# 138 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_AERIAL_ACE
	goto FortreeCity_Gym_EventScript_GymGuide_1

FortreeCity_Gym_EventScript_GymGuide_10:
# 135 "data/maps/FortreeCity_Gym/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto FortreeCity_Gym_EventScript_GymGuide_9


FortreeCity_Gym_EventScript_LeftGymStatue::
# 148 "data/maps/FortreeCity_Gym/scripts.pory"
	lockall
# 149 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_GymStatue
	end


FortreeCity_Gym_EventScript_RightGymStatue::
# 154 "data/maps/FortreeCity_Gym/scripts.pory"
	lockall
# 155 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_GymStatue
	return


FortreeCity_Gym_EventScript_GymStatue::
# 159 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_GymStatue_2
# 162 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
FortreeCity_Gym_EventScript_GymStatue_1:
# 164 "data/maps/FortreeCity_Gym/scripts.pory"
	releaseall
	end

FortreeCity_Gym_EventScript_GymStatue_2:
# 160 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	goto FortreeCity_Gym_EventScript_GymStatue_1


FortreeCity_Gym_Text_GymGuideAdvice::
# 168 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Yo, how's it going, CHAMPION-\n"
	.string "bound {PLAYER}?\p"
	.string "FORTREE GYM LEADER WINONA is\n"
	.string "a master of FLYING-type POKéMON.\p"
	.string "She's waiting at the back of this GYM,\n"
	.string "behind the rotating doors.\p"
	.string "She's waiting for new challengers\n"
	.string "who are trying to take wing!\p"
	.string "Okay, go for it!$"

FortreeCity_Gym_Text_GymGuidePostVictory::
# 184 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You did it!\n"
	.string "You've achieved liftoff!$"

FortreeCity_Gym_Text_JaredIntro::
# 189 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Behold the elegant battle style of\n"
	.string "BIRD POKéMON!$"

FortreeCity_Gym_Text_JaredDefeat::
# 194 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You…\n"
	.string "You're strong…$"

FortreeCity_Gym_Text_JaredPostBattle::
# 199 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "A TRAINER has to be smart to keep\n"
	.string "up with unexpected turns of events.\p"
	.string "Do you have the smarts to get to\n"
	.string "our LEADER?$"

FortreeCity_Gym_Text_EdwardoIntro::
# 207 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "The lovers of BIRD POKéMON aspire\n"
	.string "to join this GYM.\p"
	.string "As a member of the FORTREE GYM,\n"
	.string "I'm not allowed to lose!$"

FortreeCity_Gym_Text_EdwardoDefeat::
# 215 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "It was too much of a load for me\n"
	.string "to bear…$"

FortreeCity_Gym_Text_EdwardoPostBattle::
# 220 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "The world is huge, and there are\n"
	.string "countless tough TRAINERS.\p"
	.string "I'm going to keep training and make\n"
	.string "myself even stronger.$"

FortreeCity_Gym_Text_FlintIntro::
# 228 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "There's no need for WINONA, our GYM\n"
	.string "LEADER, to deal with you!\p"
	.string "I'm plenty good enough for you!$"

FortreeCity_Gym_Text_FlintDefeat::
# 235 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA, I…\n"
	.string "I lost!$"

FortreeCity_Gym_Text_FlintPostBattle::
# 240 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA is cute and she's strong.\n"
	.string "She's the ultimate LEADER!\p"
	.string "Blush…$"

FortreeCity_Gym_Text_AshleyIntro::
# 247 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA taught me personally!\n"
	.string "You can't beat me easily!$"

FortreeCity_Gym_Text_AshleyDefeat::
# 252 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I was beaten…$"

FortreeCity_Gym_Text_AshleyPostBattle::
# 256 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Thanks to WINONA, the people of\n"
	.string "FORTREE can live without fear.$"

FortreeCity_Gym_Text_JordanIntro::
# 261 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "When WINONA takes to battle, her face\n"
	.string "shines with beautiful determination…\p"
	.string "I'm not letting you witness that\n"
	.string "lovely sight!$"

FortreeCity_Gym_Text_JordanDefeat::
# 269 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Urk!\n"
	.string "I couldn't stop you.$"

FortreeCity_Gym_Text_JordanPostBattle::
# 274 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You'd better watch it!\n"
	.string "Don't get distracted staring at WINONA\l"
	.string "or you'll go crashing down in a heap!$"

FortreeCity_Gym_Text_DariusIntro::
# 280 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You'd better know that there are all\n"
	.string "sorts of FLYING-type POKéMON.\p"
	.string "You do know that, right?$"

FortreeCity_Gym_Text_DariusDefeat::
# 287 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You seem to know your stuff!$"

FortreeCity_Gym_Text_DariusPostBattle::
# 291 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Sure, you beat me all right.\n"
	.string "But you'd better watch it! Our LEADER\l"
	.string "WINONA's POKéMON are all business.$"

FortreeCity_Gym_Text_SophieIntro::
# 297 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "The warmth here is making me drowsy.\n"
	.string "Battle with me so I can stay awake.$"

FortreeCity_Gym_Text_SophieDefeat::
# 302 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "This is a dream.\n"
	.string "I'm sure of it…$"

FortreeCity_Gym_Text_SophiePostBattle::
# 307 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Losing burns me up…\n"
	.string "I'm just going to sleep right here!\l"
	.string "Zzz!$"

FortreeCity_Gym_Text_MelanieIntro::
# 313 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I love the sea!\n"
	.string "I forget all my worries when I swim!$"

FortreeCity_Gym_Text_MelanieDefeated::
# 318 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "When I lose a battle, I get all\n"
	.string "stressed out!$"

FortreeCity_Gym_Text_MelaniePostBattle::
# 323 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Work off your stress by swimming!\n"
	.string "It's so healthy!$"

FortreeCity_Gym_Text_WinonaIntro::
# 328 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I am WINONA. I am the LEADER of\n"
	.string "the FORTREE POKéMON GYM.\p"
	.string "I have become one with BIRD POKéMON\n"
	.string "and have soared the skies…\p"
	.string "However grueling the battle, we have\n"
	.string "triumphed with grace…\p"
	.string "Witness the elegant choreography\n"
	.string "of BIRD POKéMON and I!$"

FortreeCity_Gym_Text_WinonaDefeat::
# 342 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Never before have I seen a TRAINER\n"
	.string "command POKéMON with more grace\l"
	.string "than I…\p"
	.string "In recognition of your prowess,\n"
	.string "I present to you this GYM BADGE.$"

FortreeCity_Gym_Text_ReceivedFeatherBadge::
# 351 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "{PLAYER} received the FEATHER BADGE\n"
	.string "from WINONA.$"

FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis::
# 356 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "With the FEATHER BADGE, all POKéMON up\n"
	.string "to LV 70, even those received through\l"
	.string "trades, will obey your every command.\p"
	.string "You will also be able to use\n"
	.string "the HM move FLY outside of battle.\p"
	.string "And this…\n"
	.string "This is a gift from me.$"

FortreeCity_Gym_Text_ExplainAerialAce::
# 368 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "TM40 contains AERIAL ACE.\p"
	.string "Its speed…\n"
	.string "No POKéMON should be able to avoid it.\p"
	.string "… … … … … …$"

FortreeCity_Gym_Text_RegisteredWinona::
# 377 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Registered GYM LEADER WINONA\n"
	.string "in the POKéNAV.$"

FortreeCity_Gym_Text_WinonaPostBattle::
# 382 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Though I fell to you, I will remain\n"
	.string "devoted to BIRD POKéMON.$"

FortreeCity_Gym_Text_GymStatue::
# 387 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE CITY POKéMON GYM$"

FortreeCity_Gym_Text_GymStatueCertified::
# 391 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE CITY POKéMON GYM\p"
	.string "WINONA'S CERTIFIED TRAINERS:\n"
	.string "{PLAYER}$"

FortreeCity_Gym_Text_WinonaPreRematch::
# 398 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "{SPEAKER NAME_WINONA}We humans can never escape\n"
	.string "gravity's pull on the ground.\p"
	.string "But by striving for excellence,\n"
	.string "we have the power to soar!\p"
	.string "You have scaled the pinnacle as\n"
	.string "the reigning CHAMPION.\p"
	.string "Please, allow me to see your power\n"
	.string "at full flight!$"

FortreeCity_Gym_Text_WinonaRematchDefeat::
# 412 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I failed to reach your height again…$"

FortreeCity_Gym_Text_WinonaPostRematch::
# 416 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "{SPEAKER NAME_WINONA}Even though I have lost,\n"
	.string "the wings of my heart remain unbroken.\p"
	.string "I can rise and soar again and\n"
	.string "yet again.\p"
	.string "I am convinced of it!$"

FortreeCity_Gym_Text_WinonaFinalIntro::
# 426 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA: We humans can never escape\n"
	.string "gravity's pull on the ground.\p"
	.string "But by striving for excellence,\n"
	.string "we have the power to soar!\p"
	.string "You have scaled the pinnacle as\n"
	.string "the reigning CHAMPION.\p"
	.string "Please, allow me to see your power\n"
	.string "at full flight!$"

FortreeCity_Gym_Text_WinonaFinalDefeat::
# 440 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I failed to reach your height again…$"

FortreeCity_Gym_Text_WinonaPostFinal::
# 444 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA: Even though I have lost,\n"
	.string "the wings of my heart remain unbroken.\p"
	.string "I can rise and soar again and\n"
	.string "yet again.\p"
	.string "I am convinced of it!$"

FortreeCity_Gym_Text_WinonaRematchNeedTwoMons::
# 454 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "{SPEAKER NAME_WINONA}We humans can never escape\n"
	.string "gravity's pull on the ground.\p"
	.string "But by striving for excellence,\n"
	.string "we have the power to soar!\p"
	.string "You have scaled the pinnacle as\n"
	.string "the reigning CHAMPION.\p"
	.string "Please, allow me to see your power\n"
	.string "at full flight!\p"
	.string "Oh, no… Do you have but one\n"
	.string "POKéMON with you?\p"
	.string "Please return with two POKéMON\n"
	.string "at the very least.$"
