DuneCavernB2F_MapScripts::
	.byte 0


DuneCavern_B2F_EventScript_Liam::
# 4 "data/maps/DuneCavernB2F/scripts.pory"
	trainerbattle_single TRAINER_LIAM, DuneCavern_B2F_Text_LiamIntro, DuneCavern_B2F_Text_LiamDefeat
# 5 "data/maps/DuneCavernB2F/scripts.pory"
	msgbox DuneCavern_B2F_Text_LiamPostBattle, MSGBOX_AUTOCLOSE
	end


DuneCavern_B2F_Text_LiamIntro::
# 9 "data/maps/DuneCavernB2F/scripts.pory"
	.string "…$"

DuneCavern_B2F_Text_LiamDefeat::
# 13 "data/maps/DuneCavernB2F/scripts.pory"
	.string "…$"

DuneCavern_B2F_Text_LiamPostBattle::
# 17 "data/maps/DuneCavernB2F/scripts.pory"
	.string "…$"
