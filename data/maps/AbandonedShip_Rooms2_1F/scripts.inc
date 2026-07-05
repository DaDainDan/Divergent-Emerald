AbandonedShip_Rooms2_1F_MapScripts::
	.byte 0


AbandonedShip_Rooms2_1F_EventScript_Dan::
# 4 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_double TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_DanIntro, AbandonedShip_Rooms2_1F_Text_DanDefeat, AbandonedShip_Rooms2_1F_Text_DanNotEnoughMons, AbandonedShip_Rooms2_1F_EventScript_RegisterKiraDan
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AbandonedShip_Rooms2_1F_EventScript_Dan_2
# 10 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_DanPostBattle, MSGBOX_DEFAULT
	release_end

AbandonedShip_Rooms2_1F_EventScript_Dan_2:
# 6 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_rematch_double TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_DanRematchIntro, AbandonedShip_Rooms2_1F_Text_DanRematchDefeat, AbandonedShip_Rooms2_1F_Text_DanRematchNotEnoughMons
# 7 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_DanPostRematch, MSGBOX_AUTOCLOSE
	end


AbandonedShip_Rooms2_1F_EventScript_RegisterKiraDan::
# 15 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_KiraRegister, MSGBOX_DEFAULT @ Kira speaks for both when registering KiraAndDan
# 16 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	register_matchcall TRAINER_KIRA_AND_DAN_1
	release_end


AbandonedShip_Rooms2_1F_EventScript_Kira::
# 21 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_double TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_KiraIntro, AbandonedShip_Rooms2_1F_Text_KiraDefeat, AbandonedShip_Rooms2_1F_Text_KiraNotEnoughMons, AbandonedShip_Rooms2_1F_EventScript_RegisterKiraDan
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AbandonedShip_Rooms2_1F_EventScript_Kira_2
# 27 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_KiraPostBattle, MSGBOX_DEFAULT
	release_end

AbandonedShip_Rooms2_1F_EventScript_Kira_2:
# 23 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_rematch_double TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_KiraRematchIntro, AbandonedShip_Rooms2_1F_Text_KiraRematchDefeat, AbandonedShip_Rooms2_1F_Text_KiraRematchNotEnoughMons
# 24 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_KiraPostRematch, MSGBOX_AUTOCLOSE
	end


AbandonedShip_Rooms2_1F_EventScript_Jani::
# 32 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_single TRAINER_JANI, AbandonedShip_Rooms2_1F_Text_JaniIntro, AbandonedShip_Rooms2_1F_Text_JaniDefeat
# 33 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_JaniPostBattle, MSGBOX_AUTOCLOSE
	end


AbandonedShip_Rooms2_1F_EventScript_Garrison::
# 38 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	trainerbattle_single TRAINER_GARRISON, AbandonedShip_Rooms2_1F_Text_GarrisonIntro, AbandonedShip_Rooms2_1F_Text_GarrisonDefeat
# 39 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	msgbox AbandonedShip_Rooms2_1F_Text_GarrisonPostBattle, MSGBOX_AUTOCLOSE
	end


AbandonedShip_Rooms2_1F_Text_DanIntro::
# 43 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "{SPEAKER NAME_UNKNOWN}While searching for treasures,\n"
	.string "we discovered a TRAINER!$"

AbandonedShip_Rooms2_1F_Text_DanDefeat::
# 48 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "DAN: We couldn't win even though\n"
	.string "we worked together…$"

AbandonedShip_Rooms2_1F_Text_DanPostBattle::
# 53 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "{SPEAKER NAME_DAN}We can't find any treasures…\n"
	.string "I wonder if someone got them already?$"

AbandonedShip_Rooms2_1F_Text_DanNotEnoughMons::
# 58 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "{SPEAKER NAME_DAN}You don't even have two POKéMON.\n"
	.string "You can't expect to beat us like that.$"

AbandonedShip_Rooms2_1F_Text_KiraIntro::
# 63 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "{SPEAKER NAME_UNKNOWN}Oh?\n"
	.string "We were searching for treasures.\l"
	.string "But we discovered a TRAINER instead!$"

AbandonedShip_Rooms2_1F_Text_KiraDefeat::
# 69 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "KIRA: Ooh, so strong!$"

AbandonedShip_Rooms2_1F_Text_KiraPostBattle::
# 73 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "{SPEAKER NAME_KIRA}Where could the treasures be?\p"
	.string "I've already decided what I'm buying\n"
	.string "when we find the treasures!$"

AbandonedShip_Rooms2_1F_Text_KiraNotEnoughMons::
# 80 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "{SPEAKER NAME_KIRA}Oh, you don't have two POKéMON?\n"
	.string "We'll have to battle some other time!$"

AbandonedShip_Rooms2_1F_Text_KiraRegister::
# 85 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "{SPEAKER NAME_KIRA}Oh, you make me so angry!\n"
	.string "I'm going to register you for that!$"

AbandonedShip_Rooms2_1F_Text_DanRematchIntro::
# 90 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "{SPEAKER NAME_DAN}We've been searching for\n"
	.string "treasures all this time.\p"
	.string "Our POKéMON have grown stronger, too.\n"
	.string "Let us show you, okay?$"

AbandonedShip_Rooms2_1F_Text_DanRematchDefeat::
# 98 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "DAN: You're strong, as usual!$"

AbandonedShip_Rooms2_1F_Text_DanPostRematch::
# 102 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "{SPEAKER NAME_DAN}We can't find any treasures,\n"
	.string "we lose at POKéMON…\p"
	.string "I want to go home… But if I say that,\n"
	.string "she gets all angry with me…$"

AbandonedShip_Rooms2_1F_Text_DanRematchNotEnoughMons::
# 110 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "{SPEAKER NAME_DAN}You don't even have two POKéMON.\n"
	.string "You can't expect to beat us like that.$"

AbandonedShip_Rooms2_1F_Text_KiraRematchIntro::
# 115 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "{SPEAKER NAME_KIRA}Oh? We meet again!\p"
	.string "Just like us, you still haven't given up\n"
	.string "searching for treasures, have you?\p"
	.string "Want to make it so the loser has\n"
	.string "to give up searching?$"

AbandonedShip_Rooms2_1F_Text_KiraRematchDefeat::
# 125 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "KIRA: Oh, we lost again…$"

AbandonedShip_Rooms2_1F_Text_KiraPostRematch::
# 129 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "{SPEAKER NAME_KIRA}We're not leaving until we raise\n"
	.string "our POKéMON some more and we find\l"
	.string "the treasures here!$"

AbandonedShip_Rooms2_1F_Text_KiraRematchNotEnoughMons::
# 135 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "{SPEAKER NAME_KIRA}Oh, you don't have two POKéMON?\n"
	.string "We'll have to battle some other time!$"

AbandonedShip_Rooms2_1F_Text_JaniIntro::
# 140 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "I'm not good at swimming,\n"
	.string "but I am good at battles!$"

AbandonedShip_Rooms2_1F_Text_JaniDefeat::
# 145 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Oops.\n"
	.string "That didn't go very well.$"

AbandonedShip_Rooms2_1F_Text_JaniPostBattle::
# 150 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Walking around barefoot in this ship\n"
	.string "is kind of gross.$"

AbandonedShip_Rooms2_1F_Text_GarrisonIntro::
# 155 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Strength and compassion…\n"
	.string "Those are a TRAINER's treasures!$"

AbandonedShip_Rooms2_1F_Text_GarrisonDefeat::
# 160 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "Ah, there is something about you\n"
	.string "that sparkles.$"

AbandonedShip_Rooms2_1F_Text_GarrisonPostBattle::
# 165 "data/maps/AbandonedShip_Rooms2_1F/scripts.pory"
	.string "In a cabin somewhere on board,\n"
	.string "I saw something sparkle.$"
