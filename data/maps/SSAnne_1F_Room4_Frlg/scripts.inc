SSAnne_1F_Room4_Frlg_MapScripts::
	.byte 0


SSAnne_1F_Room4_EventScript_Woman::
# 4 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
	lock_faceplayer
	checkplayergender
# 0 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SSAnne_1F_Room4_EventScript_Woman_2
# 9 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
	msgbox SSAnne_1F_Room4_Text_WaitressCherryPiePlease
	release_end

SSAnne_1F_Room4_EventScript_Woman_2:
# 6 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
	msgbox SSAnne_1F_Room4_Text_WaiterCherryPiePlease
	release_end


SSAnne_1F_Room4_Text_WaiterCherryPiePlease::
# 13 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
	.string "Waiter, I would like a cherry pie,\n"
	.string "please!$"

SSAnne_1F_Room4_Text_WaitressCherryPiePlease::
# 18 "data/maps/SSAnne_1F_Room4_Frlg/scripts.pory"
	.string "Waitress, I would like a cherry\n"
	.string "pie, please!$"
