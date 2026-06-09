MtPyre_5F_MapScripts::
	.byte 0


MtPyre_4F_EventScript_Tasha::
# 6 "data/maps/MtPyre_5F/scripts.pory"
	trainerbattle_single TRAINER_TASHA, MtPyre_4F_Text_TashaIntro, MtPyre_4F_Text_TashaDefeat
# 7 "data/maps/MtPyre_5F/scripts.pory"
	msgbox MtPyre_4F_Text_TashaPostBattle, MSGBOX_AUTOCLOSE
	end


MtPyre_4F_Text_TashaIntro::
# 11 "data/maps/MtPyre_5F/scripts.pory"
	.string "I love all things horrifying…\n"
	.string "It's like a disease…\p"
	.string "When I'm here…\n"
	.string "I shiver with fear…$"

MtPyre_4F_Text_TashaDefeat::
# 19 "data/maps/MtPyre_5F/scripts.pory"
	.string "Losing, I dislike…$"

MtPyre_4F_Text_TashaPostBattle::
# 23 "data/maps/MtPyre_5F/scripts.pory"
	.string "I want to see dreadful things…\n"
	.string "I can't leave…\p"
	.string "Stay…\n"
	.string "Won't you stay with me?$"
