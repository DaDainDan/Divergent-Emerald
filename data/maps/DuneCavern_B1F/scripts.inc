DuneCavern_B1F_MapScripts::
	.byte 0


DuneCavern_B1F_EventScript_Fossil::
# 4 "data/maps/DuneCavern_B1F/scripts.pory"
	lock_faceplayer
	giveitem ITEM_SKULL_FOSSIL
# 0 "data/maps/DuneCavern_B1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq DuneCavern_B1F_EventScript_Fossil_2
DuneCavern_B1F_EventScript_Fossil_1:
# 8 "data/maps/DuneCavern_B1F/scripts.pory"
	removeobject LOCALID_DUNE_CAVERN_FOSSIL
	release_end

DuneCavern_B1F_EventScript_Fossil_2:
# 6 "data/maps/DuneCavern_B1F/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto DuneCavern_B1F_EventScript_Fossil_1


DuneCavern_B1F_EventScript_Jeremiah::
# 13 "data/maps/DuneCavern_B1F/scripts.pory"
	trainerbattle_single TRAINER_JEREMIAH, DuneCavern_B1F_Text_JeremiahIntro, DuneCavern_B1F_Text_JeremiahDefeat
# 14 "data/maps/DuneCavern_B1F/scripts.pory"
	msgbox DuneCavern_B1F_Text_JeremiahPostBattle, MSGBOX_AUTOCLOSE
	end


DuneCavern_B1F_Text_JeremiahIntro::
# 18 "data/maps/DuneCavern_B1F/scripts.pory"
	.string "…$"

DuneCavern_B1F_Text_JeremiahDefeat::
# 22 "data/maps/DuneCavern_B1F/scripts.pory"
	.string "…$"

DuneCavern_B1F_Text_JeremiahPostBattle::
# 26 "data/maps/DuneCavern_B1F/scripts.pory"
	.string "…$"
