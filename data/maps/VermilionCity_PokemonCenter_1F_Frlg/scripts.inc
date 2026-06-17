VermilionCity_PokemonCenter_1F_Frlg_MapScripts::
# 2 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VermilionCity_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 6 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

VermilionCity_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_VERMILION_CITY
	end


VermilionCity_PokemonCenter_1F_EventScript_Nurse::
# 10 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	lock_faceplayer
# 11 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
	release_end


VermilionCity_PokemonCenter_1F_EventScript_Man::
# 16 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonCenter_1F_Text_PoisonedMonFaintedWhileWalking, MSGBOX_NPC
	end


VermilionCity_PokemonCenter_1F_EventScript_Hiker::
# 21 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonCenter_1F_Text_TrainerMonsStrongerThanWild, MSGBOX_NPC
	end


VermilionCity_PokemonCenter_1F_EventScript_Youngster::
# 26 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonCenter_1F_Text_AllMonWeakToSpecificTypes, MSGBOX_NPC
	end


VermilionCity_PokemonCenter_1F_EventScript_VSSeekerWoman::
# 31 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	lock_faceplayer
# 32 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_VS_SEEKER, VermilionCity_PokemonCenter_1F_EventScript_VSSeekerWoman_2
# 36 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonCenter_1F_Text_UrgeToBattleSomeoneAgain
# 37 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	setflag FLAG_GOT_VS_SEEKER
	giveitem ITEM_VS_SEEKER
# 0 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq VermilionCity_PokemonCenter_1F_EventScript_VSSeekerWoman_5
VermilionCity_PokemonCenter_1F_EventScript_VSSeekerWoman_4:
# 41 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonCenter_1F_Text_UseDeviceForRematches
	release_end

VermilionCity_PokemonCenter_1F_EventScript_VSSeekerWoman_2:
# 33 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonCenter_1F_Text_ExplainVSSeeker
	release_end

VermilionCity_PokemonCenter_1F_EventScript_VSSeekerWoman_5:
# 39 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	goto EventScript_BagIsFull
	goto VermilionCity_PokemonCenter_1F_EventScript_VSSeekerWoman_4


VermilionCity_PokemonCenter_1F_Text_TrainerMonsStrongerThanWild::
# 45 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Even if they are the same level,\n"
	.string "POKéMON can have very different\l"
	.string "stats and abilities.\p"
	.string "A POKéMON raised by a TRAINER is\n"
	.string "stronger than one in the wild.$"

VermilionCity_PokemonCenter_1F_Text_PoisonedMonFaintedWhileWalking::
# 54 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "My POKéMON was poisoned!\n"
	.string "It fainted while we were walking!$"

VermilionCity_PokemonCenter_1F_Text_AllMonWeakToSpecificTypes::
# 59 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "It is true that a higher-level\n"
	.string "POKéMON will be more powerful…\p"
	.string "But, all POKéMON will have weak\n"
	.string "points against specific types.\p"
	.string "So, there appears to be no\n"
	.string "universally strong POKéMON.$"

VermilionCity_PokemonCenter_1F_Text_UrgeToBattleSomeoneAgain::
# 70 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "The urge to battle with someone\n"
	.string "you've tangled with before…\p"
	.string "Have you ever had that urge?\n"
	.string "I'm sure you have.\p"
	.string "I wanted to battle certain people\n"
	.string "again over and over, too.\p"
	.string "So, I've been giving these away.\n"
	.string "Please, take one!$"

VermilionCity_PokemonCenter_1F_Text_UseDeviceForRematches::
# 84 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Use that device and you'll find\n"
	.string "TRAINERS looking for a rematch.\p"
	.string "You have to charge its battery to\n"
	.string "use it, though.$"

VermilionCity_PokemonCenter_1F_Text_ExplainVSSeeker::
# 92 "data/maps/VermilionCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "How do you use the VS SEEKER?\n"
	.string "There's nothing to it.\p"
	.string "Use it like beep-beep-beep, and\n"
	.string "TRAINERS around you will notice.\p"
	.string "If any TRAINER wants a rematch,\n"
	.string "it will let you know immediately.\p"
	.string "Charge its battery and use it\n"
	.string "while you're on a road.$"
