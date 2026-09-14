BattleFrontier_Lounge8_MapScripts::
	.byte 0


BattleFrontier_Lounge8_EventScript_Man::
# 4 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	msgbox BattleFrontier_Lounge8_Text_WhatATrainerNeeds, MSGBOX_NPC
	end


BattleFrontier_Lounge8_EventScript_Woman::
# 9 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	msgbox BattleFrontier_Lounge8_Text_KnowAboutFrontierBrains, MSGBOX_NPC
	end


BattleFrontier_Lounge8_EventScript_NinjaBoy::
# 14 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	msgbox BattleFrontier_Lounge8_Text_ToldMeIHaveTalentForBattling, MSGBOX_NPC
	end


BattleFrontier_Lounge8_EventScript_MoveTutor::
# 19 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	lock_faceplayer
# 20 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	goto_if_unset FLAG_MET_BATTLE_FRONTIER_EXPLOSION_TUTOR, BattleFrontier_Lounge8_EventScript_MoveTutor_2
BattleFrontier_Lounge8_EventScript_MoveTutor_1:
# 24 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	msgbox BattleFrontier_Lounge8_EventScript_MoveTutor_Text_0, MSGBOX_DEFAULT
# 25 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	setvar VAR_TEMP_C, SCROLL_MULTI_EXPLOSION_MOVE_TUTOR
# 26 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	setvar VAR_0x8006, 0
# 27 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	goto BattleFrontier_Lounge8_EventScript_ChooseExplosionMove
	end

BattleFrontier_Lounge8_EventScript_MoveTutor_2:
# 21 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	msgbox BattleFrontier_Lounge8_EventScript_MoveTutor_Text_0, MSGBOX_DEFAULT
# 22 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	setflag FLAG_MET_BATTLE_FRONTIER_EXPLOSION_TUTOR
	goto BattleFrontier_Lounge8_EventScript_MoveTutor_1


BattleFrontier_Lounge8_EventScript_ChooseExplosionMove::
# 32 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	special ShowBattlePointsWindow
# 33 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_EXPLOSION_MOVE_TUTOR
# 34 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	special ShowScrollableMultichoice
# 35 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
# 36 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	switch VAR_RESULT
# 37 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	case 0, BattleFrontier_Lounge8_EventScript_ChooseExplosionMove_3
# 38 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	case 1, BattleFrontier_Lounge8_EventScript_ChooseExplosionMove_4
# 39 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	case 2, BattleFrontier_Lounge8_EventScript_ChooseExplosionMove_5
# 40 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	case 3, BattleFrontier_Lounge8_EventScript_ChooseExplosionMove_6
# 41 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	case 4, BattleFrontier_Lounge8_EventScript_ChooseExplosionMove_7
# 42 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	case 5, BattleFrontier_Lounge8_EventScript_ChooseExplosionMove_8
# 43 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	case 6, BattleFrontier_Lounge8_EventScript_ChooseExplosionMove_9
# 44 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	case 7, BattleFrontier_Lounge8_EventScript_ChooseExplosionMove_10
# 45 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	case 8, BattleFrontier_Lounge8_EventScript_ChooseExplosionMove_11
# 46 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	case 9, BattleFrontier_Lounge8_EventScript_ChooseExplosionMove_12
# 47 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	case 10, BattleFrontier_Lounge8_EventScript_ChooseExplosionMove_13
# 48 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	case 11, BattleFrontier_Lounge8_EventScript_ChooseExplosionMove_14
# 49 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	case 12, BattleFrontier_Lounge8_EventScript_ChooseExplosionMove_15
# 50 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	case 13, BattleFrontier_Lounge8_EventScript_ChooseExplosionMove_16
# 51 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	case 14, BattleFrontier_Lounge8_EventScript_ChooseExplosionMove_17
# 52 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	case 15, BattleFrontier_Lounge8_EventScript_ChooseExplosionMove_18
# 53 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_Lounge8_EventScript_ChooseExplosionMove_18
BattleFrontier_Lounge8_EventScript_ChooseExplosionMove_1:
# 56 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	goto BattleFrontier_Lounge8_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge8_EventScript_ChooseExplosionMove_3:
# 37 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	setmoveandprice MOVE_SUPERNOVA, 48
	goto BattleFrontier_Lounge8_EventScript_ChooseExplosionMove_1

BattleFrontier_Lounge8_EventScript_ChooseExplosionMove_4:
# 38 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	setmoveandprice MOVE_OSMOTIC_BURST, 48
	goto BattleFrontier_Lounge8_EventScript_ChooseExplosionMove_1

BattleFrontier_Lounge8_EventScript_ChooseExplosionMove_5:
# 39 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	setmoveandprice MOVE_BRUMAL_BURST, 48
	goto BattleFrontier_Lounge8_EventScript_ChooseExplosionMove_1

BattleFrontier_Lounge8_EventScript_ChooseExplosionMove_6:
# 40 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	setmoveandprice MOVE_SAND_BURST, 48
	goto BattleFrontier_Lounge8_EventScript_ChooseExplosionMove_1

BattleFrontier_Lounge8_EventScript_ChooseExplosionMove_7:
# 41 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	setmoveandprice MOVE_CHLOROBLAST, 48
	goto BattleFrontier_Lounge8_EventScript_ChooseExplosionMove_1

BattleFrontier_Lounge8_EventScript_ChooseExplosionMove_8:
# 42 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	setmoveandprice MOVE_WITS_END, 48
	goto BattleFrontier_Lounge8_EventScript_ChooseExplosionMove_1

BattleFrontier_Lounge8_EventScript_ChooseExplosionMove_9:
# 43 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	setmoveandprice MOVE_MISTY_EXPLOSION, 48
	goto BattleFrontier_Lounge8_EventScript_ChooseExplosionMove_1

BattleFrontier_Lounge8_EventScript_ChooseExplosionMove_10:
# 44 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	setmoveandprice MOVE_ARC_BLAST, 48
	goto BattleFrontier_Lounge8_EventScript_ChooseExplosionMove_1

BattleFrontier_Lounge8_EventScript_ChooseExplosionMove_11:
# 45 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	setmoveandprice MOVE_RECKLESS_UPHEAVAL, 48
	goto BattleFrontier_Lounge8_EventScript_ChooseExplosionMove_1

BattleFrontier_Lounge8_EventScript_ChooseExplosionMove_12:
# 46 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	setmoveandprice MOVE_BUG_BURST, 48
	goto BattleFrontier_Lounge8_EventScript_ChooseExplosionMove_1

BattleFrontier_Lounge8_EventScript_ChooseExplosionMove_13:
# 47 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	setmoveandprice MOVE_SOUL_SHATTER, 48
	goto BattleFrontier_Lounge8_EventScript_ChooseExplosionMove_1

BattleFrontier_Lounge8_EventScript_ChooseExplosionMove_14:
# 48 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	setmoveandprice MOVE_ROCK_RUPTURE, 48
	goto BattleFrontier_Lounge8_EventScript_ChooseExplosionMove_1

BattleFrontier_Lounge8_EventScript_ChooseExplosionMove_15:
# 49 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	setmoveandprice MOVE_BLAST_SHELL, 48
	goto BattleFrontier_Lounge8_EventScript_ChooseExplosionMove_1

BattleFrontier_Lounge8_EventScript_ChooseExplosionMove_16:
# 50 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	setmoveandprice MOVE_NOXIOUS_BLOWOUT, 48
	goto BattleFrontier_Lounge8_EventScript_ChooseExplosionMove_1

BattleFrontier_Lounge8_EventScript_ChooseExplosionMove_17:
# 51 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	setmoveandprice MOVE_SHATTER, 48
	goto BattleFrontier_Lounge8_EventScript_ChooseExplosionMove_1

BattleFrontier_Lounge8_EventScript_ChooseExplosionMove_18:
# 54 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	goto BattleFrontier_Lounge8_EventScript_ExitTutorMoveSelect
	goto BattleFrontier_Lounge8_EventScript_ChooseExplosionMove_1


BattleFrontier_Lounge8_EventScript_ExitTutorMoveSelect::
# 61 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	special CloseBattleFrontierTutorWindow
# 62 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	special CloseBattlePointsWindow
# 63 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	msgbox BattleFrontier_Lounge8_Text_DeclineTutor, MSGBOX_DEFAULT
	release_end


BattleFrontier_Lounge8_EventScript_ConfirmMoveSelection::
# 68 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	special BufferBattleFrontierTutorMoveName
# 69 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_EXCHANGE_PRICE
# 70 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	msgbox BattleFrontier_Lounge8_EventScript_MoveTutor_Text_0, MSGBOX_YESNO
# 71 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_Lounge8_EventScript_ConfirmMoveSelection_2
BattleFrontier_Lounge8_EventScript_ConfirmMoveSelection_1:
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 0 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	compare VAR_TEMP_1, VAR_EXCHANGE_PRICE
	goto_if_ge BattleFrontier_Lounge8_EventScript_ConfirmMoveSelection_5
# 93 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	msgbox BattleFrontier_Lounge8_EventScript_MoveTutor_Text_0, MSGBOX_DEFAULT
# 94 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	goto BattleFrontier_Lounge8_EventScript_ExitTutorMoveSelect
	end

BattleFrontier_Lounge8_EventScript_ConfirmMoveSelection_2:
# 72 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	message BattleFrontier_Lounge8_EventScript_MoveTutor_Text_0
# 73 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	waitmessage
# 74 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	setvar VAR_0x8006, 1
# 75 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	goto BattleFrontier_Lounge8_EventScript_ChooseExplosionMove
	goto BattleFrontier_Lounge8_EventScript_ConfirmMoveSelection_1

BattleFrontier_Lounge8_EventScript_ConfirmMoveSelection_5:
# 78 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	msgbox BattleFrontier_Lounge8_EventScript_MoveTutor_Text_0, MSGBOX_DEFAULT
# 79 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	fadescreen FADE_TO_BLACK
# 80 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	special CloseBattlePointsWindow
# 81 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	special CloseBattleFrontierTutorWindow
# 82 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	chooseboxmon SELECT_PC_MON_MOVE_TUTOR
# 83 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	waitstate
# 84 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BattleFrontier_Lounge8_EventScript_ConfirmMoveSelection_8
# 88 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	msgbox BattleFrontier_Lounge8_EventScript_MoveTutor_Text_0, MSGBOX_DEFAULT
# 89 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	copyvar VAR_0x8004, VAR_EXCHANGE_PRICE
# 90 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	special TakeFrontierBattlePoints
	release_end

BattleFrontier_Lounge8_EventScript_ConfirmMoveSelection_8:
# 85 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	msgbox BattleFrontier_Lounge8_Text_DeclineTutor, MSGBOX_DEFAULT
	release_end


BattleFrontier_Lounge8_EventScript_MoveTutor_Text_0:
# 21 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	.string "…$"

BattleFrontier_Lounge8_Text_DeclineTutor::
# 98 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	.string "…$"

BattleFrontier_Lounge8_Text_WhatATrainerNeeds::
# 102 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	.string "What a TRAINER needs…\p"
	.string "Knowledge…\n"
	.string "Strategy…\l"
	.string "Luck…\l"
	.string "Guts…\l"
	.string "Spirit…\l"
	.string "Bravery…\l"
	.string "And ability…\p"
	.string "Well, I'm all set in every way!\n"
	.string "I'll be unstoppable at every building!\p"
	.string "Huh? POKéMON?\n"
	.string "What's that?$"

BattleFrontier_Lounge8_Text_KnowAboutFrontierBrains::
# 120 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	.string "Do you know about the FRONTIER\n"
	.string "BRAINS?\p"
	.string "That's what SCOTT calls the seven\n"
	.string "special TRAINERS that run the seven\l"
	.string "facilities in the BATTLE FRONTIER.$"

BattleFrontier_Lounge8_Text_ToldMeIHaveTalentForBattling::
# 129 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	.string "At the BATTLE TOWER, an older girl\n"
	.string "told me that I have a lot of talent\l"
	.string "for battling!\p"
	.string "I like POKéMON CONTESTS more!\p"
	.string "But I'm no good at CONTESTS!\p"
	.string "I guess having talent and liking\n"
	.string "something aren't the same.$"

BattleFrontier_Lounge8_Text_SupernovaDesc::
# 142 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	.string "Deals good damage\n"
	.string "but user faints.\n"
	.string "Sets sunlight.$"

BattleFrontier_Lounge8_Text_OsmoticBurstDesc::
# 148 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	.string "Deals good damage\n"
	.string "but user faints.\n"
	.string "Sets heavy rain.$"

BattleFrontier_Lounge8_Text_BrumalBurstDesc::
# 154 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	.string "Deals good damage\n"
	.string "but user faints.\n"
	.string "Sets a snowstorm.$"

BattleFrontier_Lounge8_Text_SandBurstDesc::
# 160 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	.string "Deals good damage\n"
	.string "but user faints.\n"
	.string "Sets a sandstorm.$"

BattleFrontier_Lounge8_Text_ChloroblastDesc::
# 166 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	.string "Deals good damage\n"
	.string "but user faints.\n"
	.string "Sets Grassy field.$"

BattleFrontier_Lounge8_Text_WitsEndDesc::
# 172 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	.string "Deals good damage\n"
	.string "but user faints.\n"
	.string "Sets Psychic field.$"

BattleFrontier_Lounge8_Text_RecklessUpheavalDesc::
# 178 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	.string "Deals good damage\n"
	.string "but user faints.\n"
	.string "Sets Faulty field.$"

BattleFrontier_Lounge8_Text_BugBurstDesc::
# 184 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	.string "Deals good damage\n"
	.string "but user faints.\n"
	.string "Sets Buggy field.$"

BattleFrontier_Lounge8_Text_SoulShatterDesc::
# 190 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	.string "Deals good damage\n"
	.string "but user faints.\n"
	.string "Sets Spooky field.$"

BattleFrontier_Lounge8_Text_KaBoomDesc::
# 196 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	.string "Deals good damage\n"
	.string "but user faints.\n"
	.string "Sets Misty field.$"

BattleFrontier_Lounge8_Text_ArcBlastDesc::
# 202 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	.string "Deals good damage\n"
	.string "but user faints.\n"
	.string "Sets electricity.$"

BattleFrontier_Lounge8_Text_RockRuptureDesc::
# 208 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	.string "Deals high damage\n"
	.string "but user faints.\n"
	.string "Sets sharp stones.$"

BattleFrontier_Lounge8_Text_BlastShellDesc::
# 214 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	.string "Deals high damage\n"
	.string "but user faints.\n"
	.string "Sets metal spikes.$"

BattleFrontier_Lounge8_Text_NoxiousBlowoutDesc::
# 220 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	.string "Deals high damage\n"
	.string "but user faints.\n"
	.string "Sets toxic spikes.$"

BattleFrontier_Lounge8_Text_ShatterDesc::
# 226 "data/maps/BattleFrontier_Lounge8/scripts.pory"
	.string "Deals high damage\n"
	.string "but user faints.\n"
	.string "Sets ice shards.$"
