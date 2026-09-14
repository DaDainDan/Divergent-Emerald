FortreeCity_MapScripts::
# 2 "data/maps/FortreeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FortreeCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 9 "data/maps/FortreeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, FortreeCity_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

FortreeCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/FortreeCity/scripts.pory"
	setflag FLAG_VISITED_FORTREE_CITY
# 4 "data/maps/FortreeCity/scripts.pory"
	goto_if_unset FLAG_KECLEON_FLED_FORTREE, FortreeCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
FortreeCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

FortreeCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/FortreeCity/scripts.pory"
	clearflag FLAG_HIDE_FORTREE_CITY_KECLEON
	goto FortreeCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

FortreeCity_MapScripts_MAP_SCRIPT_ON_RESUME:
# 10 "data/maps/FortreeCity/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, FortreeCity_MapScripts_MAP_SCRIPT_ON_RESUME_3
FortreeCity_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 13 "data/maps/FortreeCity/scripts.pory"
	setstepcallback STEP_CB_FORTREE_BRIDGE
	end

FortreeCity_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 11 "data/maps/FortreeCity/scripts.pory"
	removeobject VAR_LAST_TALKED
	goto FortreeCity_MapScripts_MAP_SCRIPT_ON_RESUME_1

FortreeCity_MapScripts_MAP_SCRIPT_ON_RESUME_3:
	specialvar VAR_RESULT, GetBattleOutcome
# 0 "data/maps/FortreeCity/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq FortreeCity_MapScripts_MAP_SCRIPT_ON_RESUME_2
	goto FortreeCity_MapScripts_MAP_SCRIPT_ON_RESUME_1


FortreeCity_EventScript_Man::
# 19 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_SawGiganticPokemonInSky, MSGBOX_NPC
	end


FortreeCity_EventScript_Woman::
# 24 "data/maps/FortreeCity/scripts.pory"
	lock_faceplayer
# 25 "data/maps/FortreeCity/scripts.pory"
	goto_if_set FLAG_KECLEON_FLED_FORTREE, FortreeCity_EventScript_Woman_2
# 29 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_SomethingBlockingGym, MSGBOX_DEFAULT
	release_end

FortreeCity_EventScript_Woman_2:
# 26 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_ThisTimeIllBeatWinona, MSGBOX_DEFAULT
	release_end


FortreeCity_EventScript_Girl::
# 34 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_TreesGrowByDrinkingRainwater, MSGBOX_NPC
	end


FortreeCity_EventScript_OldMan::
# 39 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_EveryoneHealthyAndLively, MSGBOX_NPC
	end


FortreeCity_EventScript_Boy::
# 44 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_BugPokemonComeThroughWindow, MSGBOX_NPC
	end


FortreeCity_EventScript_GameboyKid::
# 49 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_PokemonThatEvolveWhenTraded, MSGBOX_NPC
	end


FortreeCity_EventScript_CitySign::
# 54 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_CitySign, MSGBOX_SIGN
	end


FortreeCity_EventScript_GymSign::
# 59 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_GymSign, MSGBOX_SIGN
	end


FortreeCity_EventScript_Kecleon::
# 64 "data/maps/FortreeCity/scripts.pory"
	lock_faceplayer
# 65 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_UnseeableUseDevonScope, MSGBOX_YESNO
# 66 "data/maps/FortreeCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FortreeCity_EventScript_Kecleon_2
FortreeCity_EventScript_Kecleon_1:
	release_end

FortreeCity_EventScript_Kecleon_2:
# 67 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_UsedDevonScopePokemonFled, MSGBOX_DEFAULT
# 68 "data/maps/FortreeCity/scripts.pory"
	closemessage
# 69 "data/maps/FortreeCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_KecleonAppears
# 70 "data/maps/FortreeCity/scripts.pory"
	waitmovement 0
# 71 "data/maps/FortreeCity/scripts.pory"
	waitse
# 72 "data/maps/FortreeCity/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_ENCOUNTER
# 73 "data/maps/FortreeCity/scripts.pory"
	delay 40
# 74 "data/maps/FortreeCity/scripts.pory"
	waitmoncry
# 75 "data/maps/FortreeCity/scripts.pory"
	setwildbattle SPECIES_KECLEON, 40, ITEM_SITRUS_BERRY, SPECIES_KECLEON, 40, ITEM_WIKI_BERRY
# 76 "data/maps/FortreeCity/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 77 "data/maps/FortreeCity/scripts.pory"
	dowildbattle
# 78 "data/maps/FortreeCity/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 79 "data/maps/FortreeCity/scripts.pory"
	setflag FLAG_KECLEON_FLED_FORTREE
# 80 "data/maps/FortreeCity/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 81 "data/maps/FortreeCity/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq FortreeCity_EventScript_Kecleon_4
# 81 "data/maps/FortreeCity/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq FortreeCity_EventScript_Kecleon_4
# 82 "data/maps/FortreeCity/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq FortreeCity_EventScript_Kecleon_4
	goto FortreeCity_EventScript_Kecleon_1

FortreeCity_EventScript_Kecleon_4:
# 83 "data/maps/FortreeCity/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto FortreeCity_EventScript_Kecleon_1


FortreeCity_EventScript_NinjaBoyMerchant::
# 90 "data/maps/FortreeCity/scripts.pory"
	lock_faceplayer
# 91 "data/maps/FortreeCity/scripts.pory"
	message gText_HowMayIServeYou
# 92 "data/maps/FortreeCity/scripts.pory"
	waitmessage
# 93 "data/maps/FortreeCity/scripts.pory"
	pokemart FortreeCity_NinjaTMs
# 94 "data/maps/FortreeCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release_end


	.align 2
# 98 "data/maps/FortreeCity/scripts.pory"
FortreeCity_NinjaTMs:
# 99 "data/maps/FortreeCity/scripts.pory"
	.2byte ITEM_TM_PURSUIT
# 100 "data/maps/FortreeCity/scripts.pory"
	.2byte ITEM_TM_KNOCK_OFF
# 101 "data/maps/FortreeCity/scripts.pory"
	.2byte ITEM_TM_ACID_SPRAY
# 102 "data/maps/FortreeCity/scripts.pory"
	.2byte ITEM_TM_AGILITY
	.2byte ITEM_NONE

FortreeCity_EventScript_MoveTutor::
# 106 "data/maps/FortreeCity/scripts.pory"
	lock_faceplayer
# 107 "data/maps/FortreeCity/scripts.pory"
	goto_if_unset FLAG_MET_FORTREE_NINJA_TUTOR, FortreeCity_EventScript_MoveTutor_2
FortreeCity_EventScript_MoveTutor_1:
# 111 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_EventScript_MoveTutor_Text_0, MSGBOX_DEFAULT
# 112 "data/maps/FortreeCity/scripts.pory"
	setvar VAR_TEMP_C, SCROLL_MULTI_SIDE_STATUS_MOVE_TUTOR
# 113 "data/maps/FortreeCity/scripts.pory"
	setvar VAR_0x8006, 0
# 114 "data/maps/FortreeCity/scripts.pory"
	goto FortreeCity_EventScript_ChooseSideStatusMove
	end

FortreeCity_EventScript_MoveTutor_2:
# 108 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_EventScript_MoveTutor_Text_0, MSGBOX_DEFAULT
# 109 "data/maps/FortreeCity/scripts.pory"
	setflag FLAG_MET_FORTREE_NINJA_TUTOR
	goto FortreeCity_EventScript_MoveTutor_1


FortreeCity_EventScript_ChooseSideStatusMove::
# 119 "data/maps/FortreeCity/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_SIDE_STATUS_MOVE_TUTOR
# 120 "data/maps/FortreeCity/scripts.pory"
	special ShowScrollableMultichoice
# 121 "data/maps/FortreeCity/scripts.pory"
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
# 122 "data/maps/FortreeCity/scripts.pory"
	switch VAR_RESULT
# 123 "data/maps/FortreeCity/scripts.pory"
	case 0, FortreeCity_EventScript_ChooseSideStatusMove_3
# 124 "data/maps/FortreeCity/scripts.pory"
	case 1, FortreeCity_EventScript_ChooseSideStatusMove_4
# 125 "data/maps/FortreeCity/scripts.pory"
	case 2, FortreeCity_EventScript_ChooseSideStatusMove_5
# 126 "data/maps/FortreeCity/scripts.pory"
	case 3, FortreeCity_EventScript_ChooseSideStatusMove_6
# 127 "data/maps/FortreeCity/scripts.pory"
	case 4, FortreeCity_EventScript_ChooseSideStatusMove_7
# 128 "data/maps/FortreeCity/scripts.pory"
	case 5, FortreeCity_EventScript_ChooseSideStatusMove_8
# 129 "data/maps/FortreeCity/scripts.pory"
	case 6, FortreeCity_EventScript_ChooseSideStatusMove_9
# 130 "data/maps/FortreeCity/scripts.pory"
	case 7, FortreeCity_EventScript_ChooseSideStatusMove_10
# 131 "data/maps/FortreeCity/scripts.pory"
	case 8, FortreeCity_EventScript_ChooseSideStatusMove_11
# 132 "data/maps/FortreeCity/scripts.pory"
	case 9, FortreeCity_EventScript_ChooseSideStatusMove_12
# 133 "data/maps/FortreeCity/scripts.pory"
	case MULTI_B_PRESSED, FortreeCity_EventScript_ChooseSideStatusMove_12
FortreeCity_EventScript_ChooseSideStatusMove_1:
# 136 "data/maps/FortreeCity/scripts.pory"
	goto FortreeCity_EventScript_ConfirmMoveSelection
	end

FortreeCity_EventScript_ChooseSideStatusMove_3:
# 123 "data/maps/FortreeCity/scripts.pory"
	setvar VAR_0x8005, MOVE_STEALTH_ROCK
	goto FortreeCity_EventScript_ChooseSideStatusMove_1

FortreeCity_EventScript_ChooseSideStatusMove_4:
# 124 "data/maps/FortreeCity/scripts.pory"
	setvar VAR_0x8005, MOVE_SPIKES
	goto FortreeCity_EventScript_ChooseSideStatusMove_1

FortreeCity_EventScript_ChooseSideStatusMove_5:
# 125 "data/maps/FortreeCity/scripts.pory"
	setvar VAR_0x8005, MOVE_TOXIC_SPIKES
	goto FortreeCity_EventScript_ChooseSideStatusMove_1

FortreeCity_EventScript_ChooseSideStatusMove_6:
# 126 "data/maps/FortreeCity/scripts.pory"
	setvar VAR_0x8005, MOVE_ICE_SHARDS
	goto FortreeCity_EventScript_ChooseSideStatusMove_1

FortreeCity_EventScript_ChooseSideStatusMove_7:
# 127 "data/maps/FortreeCity/scripts.pory"
	setvar VAR_0x8005, MOVE_BOOBY_TRAP
	goto FortreeCity_EventScript_ChooseSideStatusMove_1

FortreeCity_EventScript_ChooseSideStatusMove_8:
# 128 "data/maps/FortreeCity/scripts.pory"
	setvar VAR_0x8005, MOVE_BARRIER
	goto FortreeCity_EventScript_ChooseSideStatusMove_1

FortreeCity_EventScript_ChooseSideStatusMove_9:
# 129 "data/maps/FortreeCity/scripts.pory"
	setvar VAR_0x8005, MOVE_LIGHT_SCREEN
	goto FortreeCity_EventScript_ChooseSideStatusMove_1

FortreeCity_EventScript_ChooseSideStatusMove_10:
# 130 "data/maps/FortreeCity/scripts.pory"
	setvar VAR_0x8005, MOVE_REFLECT
	goto FortreeCity_EventScript_ChooseSideStatusMove_1

FortreeCity_EventScript_ChooseSideStatusMove_11:
# 131 "data/maps/FortreeCity/scripts.pory"
	setvar VAR_0x8005, MOVE_AURORA_VEIL
	goto FortreeCity_EventScript_ChooseSideStatusMove_1

FortreeCity_EventScript_ChooseSideStatusMove_12:
# 134 "data/maps/FortreeCity/scripts.pory"
	goto FortreeCity_EventScript_ExitTutorMoveSelect
	goto FortreeCity_EventScript_ChooseSideStatusMove_1


FortreeCity_EventScript_ExitTutorMoveSelect::
# 141 "data/maps/FortreeCity/scripts.pory"
	special CloseBattleFrontierTutorWindow
# 142 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_DeclineTutor, MSGBOX_DEFAULT
	release_end


FortreeCity_EventScript_ConfirmMoveSelection::
# 147 "data/maps/FortreeCity/scripts.pory"
	special BufferBattleFrontierTutorMoveName
# 148 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_EventScript_MoveTutor_Text_0, MSGBOX_YESNO
# 149 "data/maps/FortreeCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq FortreeCity_EventScript_ConfirmMoveSelection_2
FortreeCity_EventScript_ConfirmMoveSelection_1:
	checkitem ITEM_GREEN_SHARD
# 0 "data/maps/FortreeCity/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FortreeCity_EventScript_ConfirmMoveSelection_5
# 169 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_EventScript_MoveTutor_Text_0, MSGBOX_DEFAULT
# 170 "data/maps/FortreeCity/scripts.pory"
	goto FortreeCity_EventScript_ExitTutorMoveSelect
	end

FortreeCity_EventScript_ConfirmMoveSelection_2:
# 150 "data/maps/FortreeCity/scripts.pory"
	message FortreeCity_EventScript_MoveTutor_Text_0
# 151 "data/maps/FortreeCity/scripts.pory"
	waitmessage
# 152 "data/maps/FortreeCity/scripts.pory"
	setvar VAR_0x8006, 1
# 153 "data/maps/FortreeCity/scripts.pory"
	goto FortreeCity_EventScript_ChooseSideStatusMove
	goto FortreeCity_EventScript_ConfirmMoveSelection_1

FortreeCity_EventScript_ConfirmMoveSelection_5:
# 156 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_EventScript_MoveTutor_Text_0, MSGBOX_DEFAULT
# 157 "data/maps/FortreeCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 158 "data/maps/FortreeCity/scripts.pory"
	special CloseBattleFrontierTutorWindow
# 159 "data/maps/FortreeCity/scripts.pory"
	chooseboxmon SELECT_PC_MON_MOVE_TUTOR
# 160 "data/maps/FortreeCity/scripts.pory"
	waitstate
# 161 "data/maps/FortreeCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FortreeCity_EventScript_ConfirmMoveSelection_8
# 165 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_EventScript_MoveTutor_Text_0, MSGBOX_DEFAULT
# 166 "data/maps/FortreeCity/scripts.pory"
	removeitem ITEM_GREEN_SHARD, 1
	release_end

FortreeCity_EventScript_ConfirmMoveSelection_8:
# 162 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_DeclineTutor, MSGBOX_DEFAULT
	release_end


FortreeCity_EventScript_MoveTutor_Text_0:
# 108 "data/maps/FortreeCity/scripts.pory"
	.string "…$"

FortreeCity_Text_DeclineTutor::
# 174 "data/maps/FortreeCity/scripts.pory"
	.string "…$"

FortreeCity_Text_SawGiganticPokemonInSky::
# 178 "data/maps/FortreeCity/scripts.pory"
	.string "No one believes me, but I saw this\n"
	.string "gigantic POKéMON in the sky.\p"
	.string "It seemed to squirm as it flew toward\n"
	.string "ROUTE 131.\p"
	.string "By the way… Sniff…\n"
	.string "Um… You, uh…smell singed.\p"
	.string "Were you at a volcano or something?$"

FortreeCity_Text_SomethingBlockingGym::
# 191 "data/maps/FortreeCity/scripts.pory"
	.string "I want to go to the POKéMON GYM,\n"
	.string "but something's blocking the way.\p"
	.string "After all the bother I went through\n"
	.string "training on ROUTE 120…$"

FortreeCity_Text_ThisTimeIllBeatWinona::
# 199 "data/maps/FortreeCity/scripts.pory"
	.string "I've got my pride-and-joy POKéMON\n"
	.string "with me. This time, I'll beat WINONA.$"

FortreeCity_Text_TreesGrowByDrinkingRainwater::
# 204 "data/maps/FortreeCity/scripts.pory"
	.string "The ground absorbs rainwater, and\n"
	.string "trees grow by drinking that water…\p"
	.string "Our FORTREE CITY exists because\n"
	.string "there's both water and soil.$"

FortreeCity_Text_EveryoneHealthyAndLively::
# 212 "data/maps/FortreeCity/scripts.pory"
	.string "The CITY consists of homes built on\n"
	.string "trees.\p"
	.string "Perhaps because of that lifestyle,\n"
	.string "everyone is healthy and lively.\p"
	.string "Why, even myself--I feel as if I've\n"
	.string "grown thirty years younger.$"

FortreeCity_Text_BugPokemonComeThroughWindow::
# 223 "data/maps/FortreeCity/scripts.pory"
	.string "Living on top of trees is okay.\p"
	.string "But sometimes BUG POKéMON come in\n"
	.string "through windows.\l"
	.string "It can be really startling.$"

FortreeCity_Text_PokemonThatEvolveWhenTraded::
# 231 "data/maps/FortreeCity/scripts.pory"
	.string "There are POKéMON that evolve when\n"
	.string "you trade them! That's what I heard.$"

FortreeCity_Text_SomethingUnseeable::
# 236 "data/maps/FortreeCity/scripts.pory"
	.string "Something unseeable is in the way.$"

FortreeCity_Text_UnseeableUseDevonScope::
# 240 "data/maps/FortreeCity/scripts.pory"
	.string "Something unseeable is in the way.\p"
	.string "Are you sure you want to disturb it?$"

FortreeCity_Text_UsedDevonScopePokemonFled::
# 246 "data/maps/FortreeCity/scripts.pory"
	.string "{PLAYER} prodded the invisible \n"
	.string "obstacle.\p"
	.string "Two invisible POKéMON revealed\n"
	.string "themselves.\p"
	.string "The startled POKéMON attacked!$"

FortreeCity_Text_CitySign::
# 256 "data/maps/FortreeCity/scripts.pory"
	.string "FORTREE CITY\n"
	.string "“The treetop city that frolics with\l"
	.string "nature.”$"

FortreeCity_Text_GymSign::
# 262 "data/maps/FortreeCity/scripts.pory"
	.string "FORTREE CITY POKéMON GYM\n"
	.string "LEADER: WINONA\p"
	.string "“The bird user taking flight into\n"
	.string "the world.”$"

FortreeCity_Text_StealthRockDesc::
# 270 "data/maps/FortreeCity/scripts.pory"
	.string "Sets sharp stones\n"
	.string "on the foe's field.\n"
	.string "Damages on entry.$"

FortreeCity_Text_SpikesDesc::
# 276 "data/maps/FortreeCity/scripts.pory"
	.string "Sets caltrops on\n"
	.string "the foe's field.\n"
	.string "Damages on entry.$"

FortreeCity_Text_ToxicSpikesDesc::
# 282 "data/maps/FortreeCity/scripts.pory"
	.string "Sets toxic spikes\n"
	.string "on the foe's field.\n"
	.string "Poisons on entry.$"

FortreeCity_Text_IceShardsDesc::
# 288 "data/maps/FortreeCity/scripts.pory"
	.string "Sets ice spikes\n"
	.string "on the foe's field.\n"
	.string "Damages on entry.$"

FortreeCity_Text_BoobyTrapDesc::
# 294 "data/maps/FortreeCity/scripts.pory"
	.string "Sets a trap on\n"
	.string "the foe's field.\n"
	.string "Snares next foe.$"

FortreeCity_Text_BarrierDesc::
# 300 "data/maps/FortreeCity/scripts.pory"
	.string "Sets up a magic\n"
	.string "barrier to lower\n"
	.string "damage to allies.$"

FortreeCity_Text_LightScreenDesc::
# 306 "data/maps/FortreeCity/scripts.pory"
	.string "Sets up a barrier\n"
	.string "to greatly lower\n"
	.string "special damage.$"

FortreeCity_Text_ReflectDesc::
# 312 "data/maps/FortreeCity/scripts.pory"
	.string "Sets up a barrier\n"
	.string "to greatly lower\n"
	.string "physical damage.$"

FortreeCity_Text_AuroraVeilDesc::
# 318 "data/maps/FortreeCity/scripts.pory"
	.string "Sets up a barrier\n"
	.string "to greatly lower\n"
	.string "damage in snow.$"
