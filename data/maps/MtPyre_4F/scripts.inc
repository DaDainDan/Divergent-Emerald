MtPyre_4F_MapScripts::
	.byte 0


MtPyre_5F_EventScript_Atsushi::
# 4 "data/maps/MtPyre_4F/scripts.pory"
	trainerbattle_single TRAINER_ATSUSHI, MtPyre_5F_Text_AtsushiIntro, MtPyre_5F_Text_AtsushiDefeat
# 5 "data/maps/MtPyre_4F/scripts.pory"
	msgbox MtPyre_5F_Text_AtsushiPostBattle, MSGBOX_AUTOCLOSE
	end


MtPyre_5F_Text_AtsushiIntro::
# 11 "data/maps/MtPyre_4F/scripts.pory"
	.string "Teacher…\n"
	.string "Please watch over my progress!$"

MtPyre_5F_Text_AtsushiDefeat::
# 16 "data/maps/MtPyre_4F/scripts.pory"
	.string "Teacher…\n"
	.string "Please forgive me!$"

MtPyre_5F_Text_AtsushiPostBattle::
# 21 "data/maps/MtPyre_4F/scripts.pory"
	.string "Until I improve, my teacher, who rests\n"
	.string "here, will never find true peace…$"
