RustboroCity_House3_MapScripts::
	.byte 0


RustboroCity_House3_EventScript_OldMan::
# 4 "data/maps/RustboroCity_House3/scripts.pory"
	msgbox RustboroCity_House3_Text_IGivePerfectlySuitedNicknames, MSGBOX_NPC
	end


RustboroCity_House3_EventScript_OldWoman::
# 9 "data/maps/RustboroCity_House3/scripts.pory"
	msgbox RustboroCity_House3_Text_NamingPikachuPekachu, MSGBOX_NPC
	end


RustboroCity_House3_EventScript_Pekachu::
# 15 "data/maps/RustboroCity_House3/scripts.pory"
	lock_faceplayer
# 16 "data/maps/RustboroCity_House3/scripts.pory"
	waitse
# 17 "data/maps/RustboroCity_House3/scripts.pory"
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
# 18 "data/maps/RustboroCity_House3/scripts.pory"
	msgbox RustboroCity_House3_Text_Pekachu, MSGBOX_DEFAULT
# 19 "data/maps/RustboroCity_House3/scripts.pory"
	waitmoncry
	release_end


RustboroCity_House3_Text_IGivePerfectlySuitedNicknames::
# 23 "data/maps/RustboroCity_House3/scripts.pory"
	.string "For my own POKéMON, I give them\n"
	.string "perfectly suited nicknames!\p"
	.string "It's my expression of, uh…\n"
	.string "originality, yes, that's it!$"

RustboroCity_House3_Text_NamingPikachuPekachu::
# 31 "data/maps/RustboroCity_House3/scripts.pory"
	.string "But giving the name PEKACHU to\n"
	.string "a PIKACHU? It seems pointless.\p"
	.string "I suppose it is good to use a name\n"
	.string "that's easy to understand, but…$"

RustboroCity_House3_Text_Pekachu::
# 39 "data/maps/RustboroCity_House3/scripts.pory"
	.string "{SPEAKER NAME_PEKACHU}Peka!$"
