FuchsiaCity_House1_Frlg_MapScripts::
	.byte 0


FuchsiaCity_House1_EventScript_Woman::
# 4 "data/maps/FuchsiaCity_House1_Frlg/scripts.pory"
	msgbox FuchsiaCity_House1_Text_WardenIsOldHasFalseTeeth, MSGBOX_NPC
	end


FuchsiaCity_House1_EventScript_OldMan::
# 9 "data/maps/FuchsiaCity_House1_Frlg/scripts.pory"
	lock_faceplayer
# 10 "data/maps/FuchsiaCity_House1_Frlg/scripts.pory"
	famechecker FAMECHECKER_BILL, 2
# 11 "data/maps/FuchsiaCity_House1_Frlg/scripts.pory"
	msgbox FuchsiaCity_House1_Text_BillIsMyGrandson
	release_end


FuchsiaCity_House1_EventScript_LittleBoy::
# 16 "data/maps/FuchsiaCity_House1_Frlg/scripts.pory"
	msgbox FuchsiaCity_House1_Text_BillFilesHisOwnMonData, MSGBOX_NPC
	end


FuchsiaCity_House1_Text_WardenIsOldHasFalseTeeth::
# 20 "data/maps/FuchsiaCity_House1_Frlg/scripts.pory"
	.string "The SAFARI ZONE's WARDEN is old, \n"
	.string "but he's still very much active.\p"
	.string "All his teeth are false, though.$"

FuchsiaCity_House1_Text_BillIsMyGrandson::
# 27 "data/maps/FuchsiaCity_House1_Frlg/scripts.pory"
	.string "Hmm?\n"
	.string "You've met BILL?\p"
	.string "He's my grandson!\p"
	.string "He always liked collecting things,\n"
	.string "even as a child!$"

FuchsiaCity_House1_Text_BillFilesHisOwnMonData::
# 37 "data/maps/FuchsiaCity_House1_Frlg/scripts.pory"
	.string "BILL files his own POKéMON data on\n"
	.string "his PC.\p"
	.string "Did he show you?$"
