VictoryRoad_B2F_MapScripts::
	.byte 0


VictoryRoad_B2F_EventScript_Vito::
# 4 "data/maps/VictoryRoad_B2F/scripts.pory"
	trainerbattle_single TRAINER_VITO, VictoryRoad_B2F_Text_VitoIntro, VictoryRoad_B2F_Text_VitoDefeat
# 5 "data/maps/VictoryRoad_B2F/scripts.pory"
	msgbox VictoryRoad_B2F_Text_VitoPostBattle, MSGBOX_AUTOCLOSE
	end


VictoryRoad_B2F_EventScript_Owen::
# 10 "data/maps/VictoryRoad_B2F/scripts.pory"
	trainerbattle_single TRAINER_OWEN, VictoryRoad_B2F_Text_OwenIntro, VictoryRoad_B2F_Text_OwenDefeat
# 11 "data/maps/VictoryRoad_B2F/scripts.pory"
	msgbox VictoryRoad_B2F_Text_OwenPostBattle, MSGBOX_AUTOCLOSE
	end


VictoryRoad_B2F_EventScript_Caroline::
# 16 "data/maps/VictoryRoad_B2F/scripts.pory"
	trainerbattle_single TRAINER_CAROLINE, VictoryRoad_B2F_Text_CarolineIntro, VictoryRoad_B2F_Text_CarolineDefeat
# 17 "data/maps/VictoryRoad_B2F/scripts.pory"
	msgbox VictoryRoad_B2F_Text_CarolinePostBattle, MSGBOX_AUTOCLOSE
	end


VictoryRoad_B2F_EventScript_Julie::
# 22 "data/maps/VictoryRoad_B2F/scripts.pory"
	trainerbattle_single TRAINER_JULIE, VictoryRoad_B2F_Text_JulieIntro, VictoryRoad_B2F_Text_JulieDefeat
# 23 "data/maps/VictoryRoad_B2F/scripts.pory"
	msgbox VictoryRoad_B2F_Text_JuliePostBattle, MSGBOX_AUTOCLOSE
	end


VictoryRoad_B2F_EventScript_Felix::
# 28 "data/maps/VictoryRoad_B2F/scripts.pory"
	trainerbattle_single TRAINER_FELIX, VictoryRoad_B2F_Text_FelixIntro, VictoryRoad_B2F_Text_FelixDefeat
# 29 "data/maps/VictoryRoad_B2F/scripts.pory"
	msgbox VictoryRoad_B2F_Text_FelixPostBattle, MSGBOX_AUTOCLOSE
	end


VictoryRoad_B2F_EventScript_Dianne::
# 34 "data/maps/VictoryRoad_B2F/scripts.pory"
	trainerbattle_single TRAINER_DIANNE, VictoryRoad_B2F_Text_DianneIntro, VictoryRoad_B2F_Text_DianneDefeat
# 35 "data/maps/VictoryRoad_B2F/scripts.pory"
	msgbox VictoryRoad_B2F_Text_DiannePostBattle, MSGBOX_AUTOCLOSE
	end


VictoryRoad_B2F_EventScript_Fossil::
# 40 "data/maps/VictoryRoad_B2F/scripts.pory"
	lock_faceplayer
# 41 "data/maps/VictoryRoad_B2F/scripts.pory"
	giveitem ITEM_OLD_AMBER
# 42 "data/maps/VictoryRoad_B2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq VictoryRoad_B2F_EventScript_Fossil_2
VictoryRoad_B2F_EventScript_Fossil_1:
# 45 "data/maps/VictoryRoad_B2F/scripts.pory"
	removeobject LOCALID_VICTORY_ROAD_FOSSIL
	release_end

VictoryRoad_B2F_EventScript_Fossil_2:
# 43 "data/maps/VictoryRoad_B2F/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto VictoryRoad_B2F_EventScript_Fossil_1


VictoryRoad_B2F_Text_VitoIntro::
# 49 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "I trained together with my whole family,\n"
	.string "every one of us!\l"
	.string "I'm not losing to anyone!$"

VictoryRoad_B2F_Text_VitoDefeat::
# 55 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Better than my family?!\n"
	.string "Is that possible?!$"

VictoryRoad_B2F_Text_VitoPostBattle::
# 60 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "I was better than everyone in my\n"
	.string "family. I've never lost before…\p"
	.string "I've lost my confidence…\n"
	.string "Maybe I'll go home…$"

VictoryRoad_B2F_Text_OwenIntro::
# 68 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "I'd heard that there was a tough\n"
	.string "little kid around. Do they mean you?$"

VictoryRoad_B2F_Text_OwenDefeat::
# 73 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "The little shrimp is tough!$"

VictoryRoad_B2F_Text_OwenPostBattle::
# 77 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "The rumors I heard, that tough little\n"
	.string "kid is from PETALBURG CITY.$"

VictoryRoad_B2F_Text_CarolineIntro::
# 82 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "You must be getting a little tired.$"

VictoryRoad_B2F_Text_CarolineDefeat::
# 86 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "No signs of tiring at all!$"

VictoryRoad_B2F_Text_CarolinePostBattle::
# 90 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "VICTORY ROAD and the POKéMON LEAGUE\n"
	.string "are long and grueling challenges.\l"
	.string "Beware of fatigue!$"

VictoryRoad_B2F_Text_JulieIntro::
# 96 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "You shouldn't get complacent just\n"
	.string "because you have a lot of GYM BADGES.\p"
	.string "There's always going to be someone\n"
	.string "who's better than you!$"

VictoryRoad_B2F_Text_JulieDefeat::
# 104 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "You're better than me!$"

VictoryRoad_B2F_Text_JuliePostBattle::
# 108 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Gaze on your collected BADGES and\n"
	.string "remember the TRAINERS you've faced.$"

VictoryRoad_B2F_Text_FelixIntro::
# 113 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "I've come this far, but the tension's\n"
	.string "giving me awful stomach pain…$"

VictoryRoad_B2F_Text_FelixDefeat::
# 118 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Ooh…\n"
	.string "It hurts…$"

VictoryRoad_B2F_Text_FelixPostBattle::
# 123 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "I can't help getting all tense knowing\n"
	.string "that I'm nearing the POKéMON LEAGUE.\p"
	.string "It's all I can do to feign calm.$"

VictoryRoad_B2F_Text_DianneIntro::
# 130 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "The elite among the elite gather in\n"
	.string "this cave.\p"
	.string "How are you finding it?$"

VictoryRoad_B2F_Text_DianneDefeat::
# 137 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Not rattled in the least bit!$"

VictoryRoad_B2F_Text_DiannePostBattle::
# 141 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "You do have guts! I like that!\n"
	.string "Keep it going!$"
