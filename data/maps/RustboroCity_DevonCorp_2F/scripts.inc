RustboroCity_DevonCorp_2F_MapScripts::
	.byte 0


RustboroCity_DevonCorp_2F_EventScript_TalkToPokemonScientist::
# 4 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DeviceForTalkingToPokemon, MSGBOX_NPC
	end


RustboroCity_DevonCorp_2F_EventScript_BallScientist::
# 9 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock_faceplayer
# 10 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_set FLAG_MET_DEVON_EMPLOYEE, RustboroCity_DevonCorp_2F_EventScript_BallScientist_2
# 14 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopingNewBalls, MSGBOX_DEFAULT
	release_end

RustboroCity_DevonCorp_2F_EventScript_BallScientist_2:
# 11 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WeFinallyMadeNewBalls, MSGBOX_DEFAULT
	release_end


RustboroCity_DevonCorp_2F_EventScript_PokenavScientist::
# 19 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock_faceplayer
# 20 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKENAV, RustboroCity_DevonCorp_2F_EventScript_PokenavScientist_2
# 24 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_IMadePokenav, MSGBOX_DEFAULT
	release_end

RustboroCity_DevonCorp_2F_EventScript_PokenavScientist_2:
# 21 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WowThatsAPokenav, MSGBOX_DEFAULT
	release_end


RustboroCity_DevonCorp_2F_EventScript_PokemonDreamsScientist::
# 29 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DeviceToVisualizePokemonDreams, MSGBOX_NPC
	end


RustboroCity_DevonCorp_2F_EventScript_FossilScientist::
# 34 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock_faceplayer
# 35 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_FOSSIL_RESURRECTION_STATE, 1
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilScientist_2
RustboroCity_DevonCorp_2F_EventScript_FossilScientist_1:
# 38 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopDeviceToResurrectFossils, MSGBOX_DEFAULT
	specialvar VAR_RESULT, DoesPlayerHaveFossil
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilScientist_5
RustboroCity_DevonCorp_2F_EventScript_FossilScientist_4:
	release_end

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_2:
# 36 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientist_1

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_5:
# 40 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	closemessage
# 41 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playse SE_PIN
# 42 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement LOCALID_FOSSIL_SCIENTIST, Common_Movement_ExclamationMark
# 43 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 44 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement LOCALID_FOSSIL_SCIENTIST, Common_Movement_Delay48
# 45 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 46 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WantToBringFossilBackToLife, MSGBOX_YESNO
# 47 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilScientist_8
# 51 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientist_4

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_8:
# 48 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_OhIsThatSo, MSGBOX_DEFAULT
	release_end


RustboroCity_DevonCorp_2F_EventScript_ChooseFossil::
# 57 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_Text_0, MSGBOX_DEFAULT
	checkitem ITEM_HELIX_FOSSIL
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_2
RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_1:
	checkitem ITEM_DOME_FOSSIL
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_5
RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_4:
	checkitem ITEM_ROOT_FOSSIL
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_8
RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_7:
	checkitem ITEM_CLAW_FOSSIL
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_11
RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_10:
	checkitem ITEM_SKULL_FOSSIL
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_14
RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_13:
	checkitem ITEM_ARMOR_FOSSIL
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_17
RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_16:
	checkitem ITEM_PLUME_FOSSIL
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_20
RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_19:
	checkitem ITEM_OLD_AMBER
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_23
RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_22:
	checkitem ITEM_JAW_FOSSIL
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_26
RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_25:
	checkitem ITEM_SAIL_FOSSIL
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_29
RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_28:
# 88 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_Text_11, 0
# 89 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 90 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	switch VAR_RESULT
# 91 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 1, RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_33
# 94 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 2, RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_34
# 97 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 3, RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_35
# 100 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 4, RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_36
# 103 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 5, RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_37
# 106 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 6, RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_38
# 109 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 7, RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_39
# 112 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 8, RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_40
# 115 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 9, RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_41
# 118 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 10, RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_42
# 121 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 0, RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_43
# 122 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case MULTI_B_PRESSED, RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_43
RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_31:
# 126 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_2, VAR_EXCHANGE_ITEM
# 127 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_TRANSFERRED_SPECIES
# 128 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher, MSGBOX_DEFAULT
# 129 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem VAR_EXCHANGE_ITEM
# 130 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 131 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 132 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_FossilizedMonBroughtBackToLife, MSGBOX_DEFAULT
# 133 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_ReceiveFossil
	end

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_2:
# 59 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_Text_1, 1
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_1

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_5:
# 62 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_Text_2, 2
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_4

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_8:
# 65 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_Text_3, 3
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_7

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_11:
# 68 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_Text_4, 4
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_10

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_14:
# 71 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_Text_5, 5
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_13

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_17:
# 74 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_Text_6, 6
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_16

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_20:
# 77 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_Text_7, 7
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_19

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_23:
# 80 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_Text_8, 8
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_22

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_26:
# 83 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_Text_9, 9
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_25

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_29:
# 86 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	dynmultipush RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_Text_10, 10
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_28

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_33:
# 92 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_EXCHANGE_ITEM, ITEM_HELIX_FOSSIL
# 93 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_OMANYTE
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_31

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_34:
# 95 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_EXCHANGE_ITEM, ITEM_DOME_FOSSIL
# 96 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_KABUTO
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_31

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_35:
# 98 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_EXCHANGE_ITEM, ITEM_ROOT_FOSSIL
# 99 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_LILEEP
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_31

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_36:
# 101 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_EXCHANGE_ITEM, ITEM_CLAW_FOSSIL
# 102 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ANORITH
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_31

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_37:
# 104 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_EXCHANGE_ITEM, ITEM_SKULL_FOSSIL
# 105 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CRANIDOS
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_31

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_38:
# 107 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_EXCHANGE_ITEM, ITEM_ARMOR_FOSSIL
# 108 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_SHIELDON
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_31

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_39:
# 110 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_EXCHANGE_ITEM, ITEM_PLUME_FOSSIL
# 111 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ARCHEN
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_31

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_40:
# 113 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_EXCHANGE_ITEM, ITEM_OLD_AMBER
# 114 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_AERODACTYL
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_31

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_41:
# 116 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_EXCHANGE_ITEM, ITEM_JAW_FOSSIL
# 117 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TYRUNT
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_31

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_42:
# 119 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_EXCHANGE_ITEM, ITEM_SAIL_FOSSIL
# 120 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_AMAURA
	goto RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_31

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_43:
# 123 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_OhIsThatSo, MSGBOX_DEFAULT
	release_end


RustboroCity_DevonCorp_2F_EventScript_ReceiveFossil::
	givemon VAR_TEMP_TRANSFERRED_SPECIES, 1
# 0 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_CANT_GIVE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceiveFossil_2
RustboroCity_DevonCorp_2F_EventScript_ReceiveFossil_1:
# 141 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	copyvar VAR_0x8007, VAR_RESULT
# 142 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 143 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher
# 144 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 145 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 146 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 147 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	switch VAR_0x8007
# 148 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case MON_GIVEN_TO_PARTY, RustboroCity_DevonCorp_2F_EventScript_ReceiveFossil_6
# 153 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case MON_GIVEN_TO_PC, RustboroCity_DevonCorp_2F_EventScript_ReceiveFossil_7
RustboroCity_DevonCorp_2F_EventScript_ReceiveFossil_4:
# 159 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 1
# 160 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setflag FLAG_RECEIVED_REVIVED_FOSSIL_MON
	release_end

RustboroCity_DevonCorp_2F_EventScript_ReceiveFossil_2:
# 139 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	goto RustboroCity_DevonCorp_2F_EventScript_ReceiveFossil_1

RustboroCity_DevonCorp_2F_EventScript_ReceiveFossil_6:
# 149 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceiveFossil_8
	goto RustboroCity_DevonCorp_2F_EventScript_ReceiveFossil_4

RustboroCity_DevonCorp_2F_EventScript_ReceiveFossil_7:
# 154 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceiveFossil_11
RustboroCity_DevonCorp_2F_EventScript_ReceiveFossil_10:
# 157 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
	goto RustboroCity_DevonCorp_2F_EventScript_ReceiveFossil_4

RustboroCity_DevonCorp_2F_EventScript_ReceiveFossil_8:
# 150 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 151 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto RustboroCity_DevonCorp_2F_EventScript_ReceiveFossil_4

RustboroCity_DevonCorp_2F_EventScript_ReceiveFossil_11:
# 155 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto RustboroCity_DevonCorp_2F_EventScript_ReceiveFossil_10


RustboroCity_DevonCorp_2F_EventScript_MatchCallScientist::
# 165 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock_faceplayer
# 166 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RUSTBORO_CITY_STATE, 6
	goto_if_ge RustboroCity_DevonCorp_2F_EventScript_MatchCallScientist_2
# 170 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopNewPokenavFeature, MSGBOX_DEFAULT
	release_end

RustboroCity_DevonCorp_2F_EventScript_MatchCallScientist_2:
# 167 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WhatToWorkOnNext, MSGBOX_DEFAULT
	release_end


RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_Text_0:
# 57 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Do you have a fossil that you would like\n"
	.string "to revive?$"

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_Text_1:
# 59 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "HELIX FOSSIL$"

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_Text_2:
# 62 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "DOME FOSSIL$"

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_Text_3:
# 65 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "ROOT FOSSIL$"

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_Text_4:
# 68 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "CLAW_FOSSIL$"

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_Text_5:
# 71 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "SKULL FOSSIL$"

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_Text_6:
# 74 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "ARMOR FOSSIL$"

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_Text_7:
# 77 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "PLUME FOSSIL$"

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_Text_8:
# 80 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "OLD AMBER$"

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_Text_9:
# 83 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "JAW FOSSIL$"

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_Text_10:
# 86 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "SAIL FOSSIL$"

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil_Text_11:
# 88 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "EXIT$"

RustboroCity_DevonCorp_2F_Text_DeviceForTalkingToPokemon::
# 174 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "We're developing a device for talking\n"
	.string "with POKéMON.\p"
	.string "But we haven't had much success…$"

RustboroCity_DevonCorp_2F_Text_DevelopingNewBalls::
# 181 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I'm developing new kinds of\n"
	.string "POKé BALLS…\p"
	.string "But I haven't made much headway…$"

RustboroCity_DevonCorp_2F_Text_WeFinallyMadeNewBalls::
# 188 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
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
# 204 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I made the POKéNAV!\p"
	.string "As an engineer, I feel blessed to have\n"
	.string "made something so great!$"

RustboroCity_DevonCorp_2F_Text_WowThatsAPokenav::
# 211 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
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
# 226 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I'm trying to develop a device that\n"
	.string "visually reproduces the dreams of\l"
	.string "POKéMON…\p"
	.string "But it's not going well.$"

RustboroCity_DevonCorp_2F_Text_DevelopDeviceToResurrectFossils::
# 234 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I've been trying to develop a device\n"
	.string "that resurrects POKéMON from fossils…\p"
	.string "And, it's working!$"

RustboroCity_DevonCorp_2F_Text_WantToBringFossilBackToLife::
# 241 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Wait! That thing you have there…\n"
	.string "Is that a POKéMON fossil?\p"
	.string "Would you like to bring that POKéMON\n"
	.string "back to life?\p"
	.string "I can with my newly developed\n"
	.string "FOSSIL REGENERATOR.$"

RustboroCity_DevonCorp_2F_Text_OhIsThatSo::
# 252 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Oh, is that so?\p"
	.string "DEVON's technological expertise\n"
	.string "is outstanding, I tell you.$"

RustboroCity_DevonCorp_2F_Text_TwoFossilsPickOne::
# 259 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Oh, now that's a surprise!\n"
	.string "You have not one, but two, fossils?\p"
	.string "Unfortunately, my machine can only\n"
	.string "regenerate one POKéMON at a time.\p"
	.string "Would you like to pick one of your\n"
	.string "fossils for regeneration?$"

RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher::
# 270 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Excellent!\n"
	.string "Let's do this right away.\p"
	.string "{PLAYER} handed the {STR_VAR_2} to\n"
	.string "the DEVON RESEARCHER.$"

RustboroCity_DevonCorp_2F_Text_FossilRegeneratorTakesTime::
# 278 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "The FOSSIL REGENERATOR, which I made,\n"
	.string "is incredible.\p"
	.string "But it has one drawback--it takes\n"
	.string "a long time to work.\p"
	.string "So, uh… How about you go for a stroll\n"
	.string "and look around for a while?$"

RustboroCity_DevonCorp_2F_Text_FossilizedMonBroughtBackToLife::
# 289 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Your fossilized POKéMON has been\n"
	.string "brought back to life!\p"
	.string "The fossil was an ancient POKéMON.\n"
	.string "{STR_VAR_1}, it was!$"

RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher::
# 297 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "{PLAYER} received {STR_VAR_1} from\n"
	.string "the DEVON RESEARCHER.$"

RustboroCity_DevonCorp_2F_Text_TooManyPokemon::
# 302 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Uh-oh, you've got too many POKéMON.\n"
	.string "You have no room for this one.$"

RustboroCity_DevonCorp_2F_Text_DevelopNewPokenavFeature::
# 307 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I'm trying to develop a new feature\n"
	.string "for the POKéNAV…\p"
	.string "But it's not going well.$"

RustboroCity_DevonCorp_2F_Text_WhatToWorkOnNext::
# 314 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Well, now what shall I work on\n"
	.string "developing next?\p"
	.string "Our company allows us to make our\n"
	.string "inspirations into reality.\p"
	.string "One couldn't ask for a better\n"
	.string "environment as an engineer.$"
