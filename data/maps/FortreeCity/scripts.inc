FortreeCity_MapScripts::
# 2 "data/maps/FortreeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FortreeCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 6 "data/maps/FortreeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, FortreeCity_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

FortreeCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/FortreeCity/scripts.pory"
	setflag FLAG_VISITED_FORTREE_CITY
	end

FortreeCity_MapScripts_MAP_SCRIPT_ON_RESUME:
# 7 "data/maps/FortreeCity/scripts.pory"
	setstepcallback STEP_CB_FORTREE_BRIDGE
	end


FortreeCity_EventScript_Man::
# 13 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_SawGiganticPokemonInSky, MSGBOX_NPC
	end


FortreeCity_EventScript_Woman::
# 18 "data/maps/FortreeCity/scripts.pory"
	lock_faceplayer
# 19 "data/maps/FortreeCity/scripts.pory"
	goto_if_set FLAG_KECLEON_FLED_FORTREE, FortreeCity_EventScript_Woman_2
# 23 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_SomethingBlockingGym, MSGBOX_DEFAULT
	release_end

FortreeCity_EventScript_Woman_2:
# 20 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_ThisTimeIllBeatWinona, MSGBOX_DEFAULT
	release_end


FortreeCity_EventScript_Girl::
# 28 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_TreesGrowByDrinkingRainwater, MSGBOX_NPC
	end


FortreeCity_EventScript_OldMan::
# 33 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_EveryoneHealthyAndLively, MSGBOX_NPC
	end


FortreeCity_EventScript_Boy::
# 38 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_BugPokemonComeThroughWindow, MSGBOX_NPC
	end


FortreeCity_EventScript_GameboyKid::
# 43 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_PokemonThatEvolveWhenTraded, MSGBOX_NPC
	end


FortreeCity_EventScript_CitySign::
# 48 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_CitySign, MSGBOX_SIGN
	end


FortreeCity_EventScript_GymSign::
# 53 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_GymSign, MSGBOX_SIGN
	end


FortreeCity_EventScript_Kecleon::
# 58 "data/maps/FortreeCity/scripts.pory"
	lock_faceplayer
	checkitem ITEM_DEVON_SCOPE
# 0 "data/maps/FortreeCity/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FortreeCity_EventScript_Kecleon_2
# 76 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_SomethingUnseeable, MSGBOX_DEFAULT
FortreeCity_EventScript_Kecleon_1:
	release_end

FortreeCity_EventScript_Kecleon_2:
# 60 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_UnseeableUseDevonScope, MSGBOX_YESNO
# 61 "data/maps/FortreeCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FortreeCity_EventScript_Kecleon_5
	goto FortreeCity_EventScript_Kecleon_1

FortreeCity_EventScript_Kecleon_5:
# 62 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_UsedDevonScopePokemonFled, MSGBOX_DEFAULT
# 63 "data/maps/FortreeCity/scripts.pory"
	closemessage
# 64 "data/maps/FortreeCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_KecleonAppears
# 65 "data/maps/FortreeCity/scripts.pory"
	waitmovement 0
# 66 "data/maps/FortreeCity/scripts.pory"
	waitse
# 67 "data/maps/FortreeCity/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_ENCOUNTER
# 68 "data/maps/FortreeCity/scripts.pory"
	delay 40
# 69 "data/maps/FortreeCity/scripts.pory"
	waitmoncry
# 70 "data/maps/FortreeCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkRight
# 71 "data/maps/FortreeCity/scripts.pory"
	waitmovement 0
# 72 "data/maps/FortreeCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 73 "data/maps/FortreeCity/scripts.pory"
	setflag FLAG_KECLEON_FLED_FORTREE
	goto FortreeCity_EventScript_Kecleon_1


FortreeCity_Text_SawGiganticPokemonInSky::
# 81 "data/maps/FortreeCity/scripts.pory"
	.string "No one believes me, but I saw this\n"
	.string "gigantic POKéMON in the sky.\p"
	.string "It seemed to squirm as it flew toward\n"
	.string "ROUTE 131.\p"
	.string "By the way… Sniff…\n"
	.string "Um… You, uh…smell singed.\p"
	.string "Were you at a volcano or something?$"

FortreeCity_Text_SomethingBlockingGym::
# 94 "data/maps/FortreeCity/scripts.pory"
	.string "I want to go to the POKéMON GYM,\n"
	.string "but something's blocking the way.\p"
	.string "After all the bother I went through\n"
	.string "training on ROUTE 120…$"

FortreeCity_Text_ThisTimeIllBeatWinona::
# 102 "data/maps/FortreeCity/scripts.pory"
	.string "I've got my pride-and-joy POKéMON\n"
	.string "with me. This time, I'll beat WINONA.$"

FortreeCity_Text_TreesGrowByDrinkingRainwater::
# 107 "data/maps/FortreeCity/scripts.pory"
	.string "The ground absorbs rainwater, and\n"
	.string "trees grow by drinking that water…\p"
	.string "Our FORTREE CITY exists because\n"
	.string "there's both water and soil.$"

FortreeCity_Text_EveryoneHealthyAndLively::
# 115 "data/maps/FortreeCity/scripts.pory"
	.string "The CITY consists of homes built on\n"
	.string "trees.\p"
	.string "Perhaps because of that lifestyle,\n"
	.string "everyone is healthy and lively.\p"
	.string "Why, even myself--I feel as if I've\n"
	.string "grown thirty years younger.$"

FortreeCity_Text_BugPokemonComeThroughWindow::
# 126 "data/maps/FortreeCity/scripts.pory"
	.string "Living on top of trees is okay.\p"
	.string "But sometimes BUG POKéMON come in\n"
	.string "through windows.\l"
	.string "It can be really startling.$"

FortreeCity_Text_PokemonThatEvolveWhenTraded::
# 134 "data/maps/FortreeCity/scripts.pory"
	.string "There are POKéMON that evolve when\n"
	.string "you trade them! That's what I heard.$"

FortreeCity_Text_SomethingUnseeable::
# 139 "data/maps/FortreeCity/scripts.pory"
	.string "Something unseeable is in the way.$"

FortreeCity_Text_UnseeableUseDevonScope::
# 143 "data/maps/FortreeCity/scripts.pory"
	.string "Something unseeable is in the way.\p"
	.string "Want to use the DEVON SCOPE?$"

FortreeCity_Text_UsedDevonScopePokemonFled::
# 149 "data/maps/FortreeCity/scripts.pory"
	.string "{PLAYER} used the DEVON SCOPE.\p"
	.string "An invisible POKéMON became completely\n"
	.string "visible!\p"
	.string "The startled POKéMON fled!$"

FortreeCity_Text_CitySign::
# 158 "data/maps/FortreeCity/scripts.pory"
	.string "FORTREE CITY\n"
	.string "“The treetop city that frolics with\l"
	.string "nature.”$"

FortreeCity_Text_GymSign::
# 164 "data/maps/FortreeCity/scripts.pory"
	.string "FORTREE CITY POKéMON GYM\n"
	.string "LEADER: WINONA\p"
	.string "“The bird user taking flight into\n"
	.string "the world.”$"
