CeruleanCity_House2_Frlg_MapScripts::
	.byte 0


CeruleanCity_House2_EventScript_Hiker::
# 4 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	lock_faceplayer
# 5 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_TM28_FROM_ROCKET, CeruleanCity_House2_EventScript_Hiker_2
# 9 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	msgbox CeruleanCity_House2_Text_RocketsStoleTMForDig
	release_end

CeruleanCity_House2_EventScript_Hiker_2:
# 6 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	msgbox CeruleanCity_House2_Text_TeachDiglettDigWithoutTM
	release_end


CeruleanCity_House2_EventScript_Lass::
# 14 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	msgbox CeruleanCity_House2_Text_TeamRocketTryingToDigIntoNoGood, MSGBOX_NPC
	end


CeruleanCity_House2_EventScript_WallHole::
# 19 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	msgbox CeruleanCity_House2_Text_TeamRocketLeftWayOut, MSGBOX_SIGN
	end


CeruleanCity_House2_Text_RocketsStoleTMForDig::
# 23 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	.string "Those miserable ROCKETS!\p"
	.string "Look what they've done to my\n"
	.string "house!\p"
	.string "They stole a TM for teaching\n"
	.string "POKéMON how to DIG holes!\p"
	.string "I was going to use it on a\n"
	.string "MANKEY or a SANDSHREW…\p"
	.string "That cost me a bundle, it did!$"

CeruleanCity_House2_Text_TeachDiglettDigWithoutTM::
# 38 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	.string "I figure what's lost is lost.\p"
	.string "I decided to teach DIGLETT how to\n"
	.string "DIG without a TM.$"

CeruleanCity_House2_Text_TeamRocketTryingToDigIntoNoGood::
# 45 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	.string "TEAM ROCKET must be trying to DIG\n"
	.string "their way into no good!$"

CeruleanCity_House2_Text_TeamRocketLeftWayOut::
# 50 "data/maps/CeruleanCity_House2_Frlg/scripts.pory"
	.string "TEAM ROCKET left a way out!$"
