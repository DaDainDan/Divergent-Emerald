DuneCavern_MapScripts::
	.byte 0


DuneCavern_EventScript_Grant::
# 4 "data/maps/DuneCavern/scripts.pory"
	trainerbattle_single TRAINER_GRANT, DuneCavern_Text_GrantIntro, DuneCavern_Text_GrantDefeat
# 5 "data/maps/DuneCavern/scripts.pory"
	msgbox DuneCavern_Text_GrantPostBattle, MSGBOX_AUTOCLOSE
	end


DuneCavern_Text_GrantIntro::
# 9 "data/maps/DuneCavern/scripts.pory"
	.string "…$"

DuneCavern_Text_GrantDefeat::
# 13 "data/maps/DuneCavern/scripts.pory"
	.string "…$"

DuneCavern_Text_GrantPostBattle::
# 17 "data/maps/DuneCavern/scripts.pory"
	.string "…$"
