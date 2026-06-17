VermilionCity_House3_Frlg_MapScripts::
	.byte 0


VermilionCity_House3_EventScript_Boy::
# 4 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	msgbox VermilionCity_House3_Text_PidgeyFlyLetterToSaffron, MSGBOX_NPC
	end


VermilionCity_House3_EventScript_Lass::
# 9 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	msgbox VermilionCity_House3_Text_SendMyPidgeyToUnionRoom, MSGBOX_NPC
	end


VermilionCity_House3_EventScript_Pidgey::
# 14 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	lock_faceplayer
# 15 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	waitse
# 16 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	playmoncry SPECIES_PIDGEY, CRY_MODE_NORMAL
# 17 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	msgbox VermilionCity_House3_Text_Pidgey
# 18 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	waitmoncry
	release_end


VermilionCity_House3_EventScript_Letter::
# 23 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	msgbox VermilionCity_House3_Text_DearPippiLetter, MSGBOX_SIGN
	end


VermilionCity_House3_Text_PidgeyFlyLetterToSaffron::
# 27 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	.string "I'm getting my PIDGEY to fly a\n"
	.string "letter to SAFFRON in the north.$"

VermilionCity_House3_Text_Pidgey::
# 32 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	.string "PIDGEY: Kurukkoo!$"

VermilionCity_House3_Text_DearPippiLetter::
# 36 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	.string "Dear PIPPI,\n"
	.string "I hope to see you soon.\p"
	.string "I heard SAFFRON has problems with\n"
	.string "TEAM ROCKET.\p"
	.string "VERMILION appears to be safe.$"

VermilionCity_House3_Text_SendMyPidgeyToUnionRoom::
# 46 "data/maps/VermilionCity_House3_Frlg/scripts.pory"
	.string "I want to exchange MAIL with all\n"
	.string "sorts of people.\p"
	.string "I send my PIDGEY to a UNION ROOM\n"
	.string "to exchange MAIL for me.$"
