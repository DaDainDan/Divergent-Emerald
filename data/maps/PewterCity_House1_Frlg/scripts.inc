PewterCity_House1_Frlg_MapScripts::
	.byte 0


PewterCity_House1_EventScript_BaldingMan::
# 4 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	msgbox PewterCity_House1_Text_TradeMonsAreFinicky, MSGBOX_NPC
	end


PewterCity_House1_EventScript_LittleBoy::
# 9 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	lock
# 10 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	msgbox PewterCity_House1_Text_NidoranSit
# 11 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	call PewterCity_House1_EventScript_DoNidoranCry
	release_end


PewterCity_House1_EventScript_Nidoran::
# 16 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	lock_faceplayer
# 17 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	call PewterCity_House1_EventScript_DoNidoranCry
# 18 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_HOUSE_NIDORAN, Common_Movement_FaceOriginalDirection
# 19 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	waitmovement 0
	release_end


PewterCity_House1_EventScript_DoNidoranCry::
# 24 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 25 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	waitse
# 26 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	playmoncry SPECIES_NIDORAN_M, CRY_MODE_NORMAL
# 27 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	msgbox PewterCity_House1_Text_Nidoran
# 28 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	waitmoncry
# 29 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
	return


PewterCity_House1_Text_Nidoran::
# 33 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	.string "NIDORAN♂: Bowbow!$"

PewterCity_House1_Text_NidoranSit::
# 37 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	.string "NIDORAN, sit!$"

PewterCity_House1_Text_TradeMonsAreFinicky::
# 41 "data/maps/PewterCity_House1_Frlg/scripts.pory"
	.string "Our POKéMON's an outsider, so it's\n"
	.string "finicky and hard to handle.\p"
	.string "An outsider is a POKéMON that you\n"
	.string "get in a trade.\p"
	.string "It grows fast, but it may ignore an\n"
	.string "unskilled TRAINER in battle.\p"
	.string "If only we had some BADGES…$"
