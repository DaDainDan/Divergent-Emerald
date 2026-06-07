RustboroCity_DevonCorp_2F_MapScripts::
# 2 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_DevonCorp_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

RustboroCity_DevonCorp_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_FOSSIL_RESURRECTION_STATE, 1
	goto_if_eq RustboroCity_DevonCorp_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
RustboroCity_DevonCorp_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

RustboroCity_DevonCorp_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
	goto RustboroCity_DevonCorp_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


RustboroCity_DevonCorp_2F_EventScript_SetFossilReady::
# 11 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 2
	return


RustboroCity_DevonCorp_2F_EventScript_TalkToPokemonScientist::
# 16 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock_faceplayer
# 17 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_FOSSIL_RESURRECTION_STATE, 1
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_TalkToPokemonScientist_2
RustboroCity_DevonCorp_2F_EventScript_TalkToPokemonScientist_1:
# 20 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DeviceForTalkingToPokemon, MSGBOX_DEFAULT
	release_end

RustboroCity_DevonCorp_2F_EventScript_TalkToPokemonScientist_2:
# 18 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
	goto RustboroCity_DevonCorp_2F_EventScript_TalkToPokemonScientist_1


RustboroCity_DevonCorp_2F_EventScript_BallScientist::
# 25 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock_faceplayer
# 26 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_FOSSIL_RESURRECTION_STATE, 1
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_BallScientist_2
RustboroCity_DevonCorp_2F_EventScript_BallScientist_1:
# 29 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_set FLAG_MET_DEVON_EMPLOYEE, RustboroCity_DevonCorp_2F_EventScript_BallScientist_5
# 33 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopingNewBalls, MSGBOX_DEFAULT
	release_end

RustboroCity_DevonCorp_2F_EventScript_BallScientist_2:
# 27 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
	goto RustboroCity_DevonCorp_2F_EventScript_BallScientist_1

RustboroCity_DevonCorp_2F_EventScript_BallScientist_5:
# 30 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WeFinallyMadeNewBalls, MSGBOX_DEFAULT
	release_end


RustboroCity_DevonCorp_2F_EventScript_PokenavScientist::
# 38 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock_faceplayer
# 39 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_FOSSIL_RESURRECTION_STATE, 1
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_PokenavScientist_2
RustboroCity_DevonCorp_2F_EventScript_PokenavScientist_1:
# 42 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKENAV, RustboroCity_DevonCorp_2F_EventScript_PokenavScientist_5
# 46 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_IMadePokenav, MSGBOX_DEFAULT
	release_end

RustboroCity_DevonCorp_2F_EventScript_PokenavScientist_2:
# 40 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
	goto RustboroCity_DevonCorp_2F_EventScript_PokenavScientist_1

RustboroCity_DevonCorp_2F_EventScript_PokenavScientist_5:
# 43 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WowThatsAPokenav, MSGBOX_DEFAULT
	release_end


RustboroCity_DevonCorp_2F_EventScript_PokemonDreamsScientist::
# 51 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock_faceplayer
# 52 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_FOSSIL_RESURRECTION_STATE, 1
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_PokemonDreamsScientist_2
RustboroCity_DevonCorp_2F_EventScript_PokemonDreamsScientist_1:
# 55 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DeviceToVisualizePokemonDreams, MSGBOX_DEFAULT
	release_end

RustboroCity_DevonCorp_2F_EventScript_PokemonDreamsScientist_2:
# 53 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
	goto RustboroCity_DevonCorp_2F_EventScript_PokemonDreamsScientist_1


RustboroCity_DevonCorp_2F_EventScript_FossilScientist::
# 60 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock_faceplayer
# 61 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_FOSSIL_RESURRECTION_STATE, 2
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilScientist_2
# 71 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_FOSSIL_RESURRECTION_STATE, 1
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilScientist_5
# 75 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopDeviceToResurrectFossils, MSGBOX_DEFAULT
	checkitem ITEM_ROOT_FOSSIL
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilScientist_12
	checkitem ITEM_CLAW_FOSSIL
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilScientist_12
RustboroCity_DevonCorp_2F_EventScript_FossilScientist_11:
	release_end

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_2:
# 62 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	switch VAR_WHICH_FOSSIL_REVIVED
# 63 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 1, RustboroCity_DevonCorp_2F_EventScript_FossilScientist_9
# 64 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 2, RustboroCity_DevonCorp_2F_EventScript_FossilScientist_10
RustboroCity_DevonCorp_2F_EventScript_FossilScientist_7:
# 66 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_TEMP_TRANSFERRED_SPECIES
# 67 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_FossilizedMonBroughtBackToLife, MSGBOX_DEFAULT
# 68 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_ReceiveFossil
	end

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_5:
# 72 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_FossilRegeneratorTakesTime, MSGBOX_DEFAULT
	release_end

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_9:
# 63 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_LILEEP
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientist_7

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_10:
# 64 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ANORITH
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientist_7

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_12:
# 77 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_NoticeFossil
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientist_11


RustboroCity_DevonCorp_2F_EventScript_NoticeFossil::
# 83 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	closemessage
# 84 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playse SE_PIN
# 85 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement LOCALID_FOSSIL_SCIENTIST, Common_Movement_ExclamationMark
# 86 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 87 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement LOCALID_FOSSIL_SCIENTIST, Common_Movement_Delay48
# 88 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 89 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WantToBringFossilBackToLife, MSGBOX_YESNO
# 90 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_NoticeFossil_2
	checkitem ITEM_CLAW_FOSSIL
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_NoticeFossil_9
RustboroCity_DevonCorp_2F_EventScript_NoticeFossil_8:
	checkitem ITEM_CLAW_FOSSIL
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_NoticeFossil_6
# 102 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_EXCHANGE_ITEM, ITEM_ROOT_FOSSIL
# 103 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 1
RustboroCity_DevonCorp_2F_EventScript_NoticeFossil_4:
# 105 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_GiveFossil
	end

RustboroCity_DevonCorp_2F_EventScript_NoticeFossil_2:
# 91 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_OhIsThatSo, MSGBOX_DEFAULT
	release_end

RustboroCity_DevonCorp_2F_EventScript_NoticeFossil_5:
# 95 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil
	goto RustboroCity_DevonCorp_2F_EventScript_NoticeFossil_4

RustboroCity_DevonCorp_2F_EventScript_NoticeFossil_6:
# 98 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_EXCHANGE_ITEM, ITEM_CLAW_FOSSIL
# 99 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 2
	goto RustboroCity_DevonCorp_2F_EventScript_NoticeFossil_4

RustboroCity_DevonCorp_2F_EventScript_NoticeFossil_9:
	checkitem ITEM_ROOT_FOSSIL
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_NoticeFossil_5
	goto RustboroCity_DevonCorp_2F_EventScript_NoticeFossil_8


RustboroCity_DevonCorp_2F_EventScript_ChooseFossil::
# 110 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_TwoFossilsPickOne
# 111 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 112 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	multichoice 17, 6, MULTI_FOSSIL, FALSE
# 113 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	switch VAR_RESULT
# 114 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 0, RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_3
# 117 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 1, RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_4
# 120 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 2, RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_5
# 121 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case MULTI_B_PRESSED, RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_5
RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_1:
# 124 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_GiveFossil
	end

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_3:
# 115 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_EXCHANGE_ITEM, ITEM_CLAW_FOSSIL
# 116 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 2
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_1

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_4:
# 118 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_EXCHANGE_ITEM, ITEM_ROOT_FOSSIL
# 119 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 1
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_1

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_5:
	release_end


RustboroCity_DevonCorp_2F_EventScript_GiveFossil::
# 129 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, VAR_EXCHANGE_ITEM
# 130 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher, MSGBOX_DEFAULT
# 131 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem VAR_EXCHANGE_ITEM
# 132 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 1
	release_end


RustboroCity_DevonCorp_2F_EventScript_ReceiveFossil::
# 137 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon VAR_TEMP_TRANSFERRED_SPECIES, 20
# 138 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	switch VAR_RESULT
# 139 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case MON_GIVEN_TO_PARTY, RustboroCity_DevonCorp_2F_EventScript_ReceiveFossil_3
# 146 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case MON_GIVEN_TO_PC, RustboroCity_DevonCorp_2F_EventScript_ReceiveFossil_4
# 153 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case MON_CANT_GIVE, RustboroCity_DevonCorp_2F_EventScript_ReceiveFossil_5
RustboroCity_DevonCorp_2F_EventScript_ReceiveFossil_1:
# 157 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 0
# 158 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setflag FLAG_RECEIVED_REVIVED_FOSSIL_MON
	release_end

RustboroCity_DevonCorp_2F_EventScript_ReceiveFossil_3:
# 140 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedFossilFanfare
# 141 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 142 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceiveFossil_6
	goto RustboroCity_DevonCorp_2F_EventScript_ReceiveFossil_1

RustboroCity_DevonCorp_2F_EventScript_ReceiveFossil_4:
# 147 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedFossilFanfare
# 148 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 149 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceiveFossil_9
RustboroCity_DevonCorp_2F_EventScript_ReceiveFossil_8:
# 152 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
	goto RustboroCity_DevonCorp_2F_EventScript_ReceiveFossil_1

RustboroCity_DevonCorp_2F_EventScript_ReceiveFossil_5:
# 154 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	end

RustboroCity_DevonCorp_2F_EventScript_ReceiveFossil_6:
# 143 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 144 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto RustboroCity_DevonCorp_2F_EventScript_ReceiveFossil_1

RustboroCity_DevonCorp_2F_EventScript_ReceiveFossil_9:
# 150 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto RustboroCity_DevonCorp_2F_EventScript_ReceiveFossil_8


RustboroCity_DevonCorp_2F_EventScript_ReceivedFossilFanfare::
# 163 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_TEMP_TRANSFERRED_SPECIES
# 164 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 165 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher
# 166 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 167 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 168 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_TRANSFERRED_SPECIES
	return


RustboroCity_DevonCorp_2F_EventScript_MatchCallScientist::
# 173 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock_faceplayer
# 174 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_FOSSIL_RESURRECTION_STATE, 1
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_MatchCallScientist_2
RustboroCity_DevonCorp_2F_EventScript_MatchCallScientist_1:
# 177 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RUSTBORO_CITY_STATE, 6
	goto_if_ge RustboroCity_DevonCorp_2F_EventScript_MatchCallScientist_5
# 181 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopNewPokenavFeature, MSGBOX_DEFAULT
	release_end

RustboroCity_DevonCorp_2F_EventScript_MatchCallScientist_2:
# 175 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
	goto RustboroCity_DevonCorp_2F_EventScript_MatchCallScientist_1

RustboroCity_DevonCorp_2F_EventScript_MatchCallScientist_5:
# 178 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WhatToWorkOnNext, MSGBOX_DEFAULT
	release_end


RustboroCity_DevonCorp_2F_Text_DeviceForTalkingToPokemon::
# 185 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "We're developing a device for talking\n"
	.string "with POKéMON.\p"
	.string "But we haven't had much success…$"

RustboroCity_DevonCorp_2F_Text_DevelopingNewBalls::
# 192 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I'm developing new kinds of\n"
	.string "POKé BALLS…\p"
	.string "But I haven't made much headway…$"

RustboroCity_DevonCorp_2F_Text_WeFinallyMadeNewBalls::
# 199 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "We finally made new kinds of\n"
	.string "POKé BALLS!\p"
	.string "The REPEAT BALL makes it easier to\n"
	.string "catch POKéMON you've caught before.\p"
	.string "The TIMER BALL gets better at catching\n"
	.string "POKéMON the longer a battle runs.\p"
	.string "Both are proudly developed by\n"
	.string "the DEVON CORPORATION.\p"
	.string "Please give them a try!$"

RustboroCity_DevonCorp_2F_Text_IMadePokenav::
# 215 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I made the POKéNAV!\p"
	.string "As an engineer, I feel blessed to have\n"
	.string "made something so great!$"

RustboroCity_DevonCorp_2F_Text_WowThatsAPokenav::
# 222 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Oh, wow!\n"
	.string "That's a POKéNAV!\p"
	.string "It came about as a result of our\n"
	.string "PRESIDENT's desire to learn about\l"
	.string "the feelings of POKéMON.\p"
	.string "Would you like me to describe its\n"
	.string "features in detail?\p"
	.string "No, no. I think you'll find out just by\n"
	.string "trying the POKéNAV out.$"

RustboroCity_DevonCorp_2F_Text_DeviceToVisualizePokemonDreams::
# 237 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I'm trying to develop a device that\n"
	.string "visually reproduces the dreams of\l"
	.string "POKéMON…\p"
	.string "But it's not going well.$"

RustboroCity_DevonCorp_2F_Text_DevelopDeviceToResurrectFossils::
# 245 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I've been trying to develop a device\n"
	.string "that resurrects POKéMON from fossils…\p"
	.string "And, it's working!$"

RustboroCity_DevonCorp_2F_Text_WantToBringFossilBackToLife::
# 252 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Wait! That thing you have there…\n"
	.string "Is that a POKéMON fossil?\p"
	.string "Would you like to bring that POKéMON\n"
	.string "back to life?\p"
	.string "I can with my newly developed\n"
	.string "FOSSIL REGENERATOR.$"

RustboroCity_DevonCorp_2F_Text_OhIsThatSo::
# 263 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Oh, is that so?\p"
	.string "DEVON's technological expertise\n"
	.string "is outstanding, I tell you.$"

RustboroCity_DevonCorp_2F_Text_TwoFossilsPickOne::
# 270 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Oh, now that's a surprise!\n"
	.string "You have not one, but two, fossils?\p"
	.string "Unfortunately, my machine can only\n"
	.string "regenerate one POKéMON at a time.\p"
	.string "Would you like to pick one of your\n"
	.string "fossils for regeneration?$"

RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher::
# 281 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Excellent!\n"
	.string "Let's do this right away.\p"
	.string "{PLAYER} handed the {STR_VAR_1} to\n"
	.string "the DEVON RESEARCHER.$"

RustboroCity_DevonCorp_2F_Text_FossilRegeneratorTakesTime::
# 289 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "The FOSSIL REGENERATOR, which I made,\n"
	.string "is incredible.\p"
	.string "But it has one drawback--it takes\n"
	.string "a long time to work.\p"
	.string "So, uh… How about you go for a stroll\n"
	.string "and look around for a while?$"

RustboroCity_DevonCorp_2F_Text_FossilizedMonBroughtBackToLife::
# 300 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Thanks for waiting!\p"
	.string "Your fossilized POKéMON has been\n"
	.string "brought back to life!\p"
	.string "The fossil was an ancient POKéMON.\n"
	.string "{STR_VAR_2}, it was!$"

RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher::
# 310 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "{PLAYER} received {STR_VAR_2} from\n"
	.string "the DEVON RESEARCHER.$"

RustboroCity_DevonCorp_2F_Text_TooManyPokemon::
# 315 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Uh-oh, you've got too many POKéMON.\n"
	.string "You have no room for this one.$"

RustboroCity_DevonCorp_2F_Text_DevelopNewPokenavFeature::
# 320 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I'm trying to develop a new feature\n"
	.string "for the POKéNAV…\p"
	.string "But it's not going well.$"

RustboroCity_DevonCorp_2F_Text_WhatToWorkOnNext::
# 327 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Well, now what shall I work on\n"
	.string "developing next?\p"
	.string "Our company allows us to make our\n"
	.string "inspirations into reality.\p"
	.string "One couldn't ask for a better\n"
	.string "environment as an engineer.$"
