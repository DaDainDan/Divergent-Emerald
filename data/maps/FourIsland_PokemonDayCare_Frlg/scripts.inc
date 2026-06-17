FourIsland_PokemonDayCare_Frlg_MapScripts::
	.byte 0


FourIsland_PokemonDayCare_EventScript_DaycareWoman::
# 4 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	lock_faceplayer
# 5 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 6 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	compare VAR_RESULT, DAYCARE_EGG_WAITING
	goto_if_eq FourIsland_PokemonDayCare_EventScript_DaycareWoman_2
# 10 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	compare VAR_RESULT, DAYCARE_ONE_MON
	goto_if_eq FourIsland_PokemonDayCare_EventScript_DaycareWoman_5
FourIsland_PokemonDayCare_EventScript_DaycareWoman_4:
# 13 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	compare VAR_RESULT, DAYCARE_TWO_MONS
	goto_if_eq FourIsland_PokemonDayCare_EventScript_DaycareWoman_8
FourIsland_PokemonDayCare_EventScript_DaycareWoman_7:
# 16 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_WouldYouLikeUsToRaiseMon, MSGBOX_YESNO
# 17 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FourIsland_PokemonDayCare_EventScript_DaycareWoman_11
FourIsland_PokemonDayCare_EventScript_DaycareWoman_10:
# 20 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_FineThenComeAgain
	release_end

FourIsland_PokemonDayCare_EventScript_DaycareWoman_2:
# 7 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_HusbandWasLookingForYou
	release_end

FourIsland_PokemonDayCare_EventScript_DaycareWoman_5:
# 11 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_OneMonInDaycare
	goto FourIsland_PokemonDayCare_EventScript_DaycareWoman_4

FourIsland_PokemonDayCare_EventScript_DaycareWoman_8:
# 14 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_TwoMonsInDaycare
	goto FourIsland_PokemonDayCare_EventScript_DaycareWoman_7

FourIsland_PokemonDayCare_EventScript_DaycareWoman_11:
# 18 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_GiveMonToRaise
	goto FourIsland_PokemonDayCare_EventScript_DaycareWoman_10


FourIsland_PokemonDayCare_OneMonInDaycare::
# 25 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_GoodToSeeYou
# 26 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 27 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	call FourIsland_PokemonDayCare_DisplayLevelsGained
# 28 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_WeCanRaiseOneMore, MSGBOX_YESNO
# 29 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FourIsland_PokemonDayCare_OneMonInDaycare_2
FourIsland_PokemonDayCare_OneMonInDaycare_1:
# 32 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_TakeYourMonBack, MSGBOX_YESNO
# 33 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FourIsland_PokemonDayCare_OneMonInDaycare_5
FourIsland_PokemonDayCare_OneMonInDaycare_4:
# 36 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_ComeAgain
	end

FourIsland_PokemonDayCare_OneMonInDaycare_2:
# 30 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_GiveMonToRaise
	goto FourIsland_PokemonDayCare_OneMonInDaycare_1

FourIsland_PokemonDayCare_OneMonInDaycare_5:
# 34 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_TryRetrieveMon
	goto FourIsland_PokemonDayCare_OneMonInDaycare_4


FourIsland_PokemonDayCare_TwoMonsInDaycare::
# 41 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_GoodToSeeYou
# 42 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 43 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	call FourIsland_PokemonDayCare_DisplayLevelsGained
# 44 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	setvar VAR_0x8004, 1
# 45 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	call FourIsland_PokemonDayCare_DisplayLevelsGained
# 46 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_TakeYourMonBack, MSGBOX_YESNO
# 47 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FourIsland_PokemonDayCare_TwoMonsInDaycare_2
FourIsland_PokemonDayCare_TwoMonsInDaycare_1:
# 50 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_ComeAgain
	release_end

FourIsland_PokemonDayCare_TwoMonsInDaycare_2:
# 48 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_TryRetrieveMon
	goto FourIsland_PokemonDayCare_TwoMonsInDaycare_1


FourIsland_PokemonDayCare_GiveMonToRaise::
	specialvar VAR_RESULT, CountPartyNonEggMons
# 0 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FourIsland_PokemonDayCare_GiveMonToRaise_2
# 59 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_WhichMonShouldWeRaise
# 60 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	fadescreen FADE_TO_BLACK
# 61 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	special ChooseSendDaycareMon
# 62 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge FourIsland_PokemonDayCare_GiveMonToRaise_5
FourIsland_PokemonDayCare_GiveMonToRaise_4:
	specialvar VAR_RESULT, CountPartyAliveNonEggMons_IgnoreVar0x8004Slot
# 0 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq FourIsland_PokemonDayCare_GiveMonToRaise_8
# 69 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	specialvar VAR_0x8005, GetSelectedMonNicknameAndSpecies
# 70 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	waitse
# 71 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	playmoncry VAR_0x8005, CRY_MODE_NORMAL
# 72 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_WellRaiseYourMon
# 73 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	waitmoncry
# 74 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	special StoreSelectedPokemonInDaycare
# 75 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	callnative UpdateFollowingPokemon
# 76 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	incrementgamestat GAME_STAT_USED_DAYCARE
	specialvar VAR_RESULT, GetDaycareState
# 0 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	compare VAR_RESULT, DAYCARE_ONE_MON
	goto_if_eq FourIsland_PokemonDayCare_GiveMonToRaise_11
FourIsland_PokemonDayCare_GiveMonToRaise_10:
	release_end

FourIsland_PokemonDayCare_GiveMonToRaise_2:
# 56 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_YouHaveJustOneMon
	release_end

FourIsland_PokemonDayCare_GiveMonToRaise_5:
# 63 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_ComeAgain
	goto FourIsland_PokemonDayCare_GiveMonToRaise_4

FourIsland_PokemonDayCare_GiveMonToRaise_8:
# 66 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_WhatWillYouBattleWith
	release_end

FourIsland_PokemonDayCare_GiveMonToRaise_11:
# 78 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_WeCanRaiseOneMore, MSGBOX_YESNO
# 79 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FourIsland_PokemonDayCare_GiveMonToRaise_14
FourIsland_PokemonDayCare_GiveMonToRaise_13:
# 82 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_ComeAgain
	goto FourIsland_PokemonDayCare_GiveMonToRaise_10

FourIsland_PokemonDayCare_GiveMonToRaise_14:
# 80 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_GiveMonToRaise
	goto FourIsland_PokemonDayCare_GiveMonToRaise_13


FourIsland_PokemonDayCare_ComeAgain::
# 88 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_ComeAgain
	release_end


FourIsland_PokemonDayCare_DisplayLevelsGained::
	specialvar VAR_RESULT, GetNumLevelsGainedFromDaycare
# 0 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne FourIsland_PokemonDayCare_DisplayLevelsGained_2
FourIsland_PokemonDayCare_DisplayLevelsGained_1:
	return

FourIsland_PokemonDayCare_DisplayLevelsGained_2:
# 94 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_YourMonHasGrownXLevels
	goto FourIsland_PokemonDayCare_DisplayLevelsGained_1


FourIsland_PokemonDayCare_TryRetrieveMon::
# 100 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 101 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq FourIsland_PokemonDayCare_TryRetrieveMon_2
# 105 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 106 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 107 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	compare VAR_RESULT, DAYCARE_ONE_MON
	goto_if_ne FourIsland_PokemonDayCare_TryRetrieveMon_5
FourIsland_PokemonDayCare_TryRetrieveMon_4:
# 114 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	special GetDaycareCost
# 115 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_ItWillCostX, MSGBOX_YESNO
# 116 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FourIsland_PokemonDayCare_TryRetrieveMon_8
# 141 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_ComeAgain
	end

FourIsland_PokemonDayCare_TryRetrieveMon_2:
# 102 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_YourPartyIsFull
	release_end

FourIsland_PokemonDayCare_TryRetrieveMon_5:
# 108 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	special ShowDaycareLevelMenu
# 109 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 110 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	compare VAR_RESULT, DAYCARE_EXITED_LEVEL_MENU
	goto_if_eq FourIsland_PokemonDayCare_TryRetrieveMon_10
	goto FourIsland_PokemonDayCare_TryRetrieveMon_4

FourIsland_PokemonDayCare_TryRetrieveMon_8:
	specialvar VAR_RESULT, IsEnoughForCostInVar0x8005
# 0 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FourIsland_PokemonDayCare_TryRetrieveMon_13
FourIsland_PokemonDayCare_TryRetrieveMon_12:
# 138 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_NotEnoughMoney
	release_end

FourIsland_PokemonDayCare_TryRetrieveMon_10:
# 111 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_ComeAgain
	goto FourIsland_PokemonDayCare_TryRetrieveMon_4

FourIsland_PokemonDayCare_TryRetrieveMon_13:
# 118 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	applymovement LOCALID_FOUR_ISLAND_DAYCARE_WOMAN, FourIsland_PokemonDayCare_Movement_RetrieveMon
# 119 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	waitmovement 0
# 120 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	specialvar VAR_RESULT, TakePokemonFromDaycare
# 121 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	special SubtractMoneyFromVar0x8005
# 122 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	playse SE_SHOP
# 123 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_HeresYourMon
# 124 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	waitse
# 125 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	playmoncry VAR_RESULT, CRY_MODE_NORMAL
# 126 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 127 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_TookBackMon
# 128 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 129 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	waitmoncry
	specialvar VAR_RESULT, GetDaycareState
# 0 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	compare VAR_RESULT, DAYCARE_ONE_MON
	goto_if_eq FourIsland_PokemonDayCare_TryRetrieveMon_16
FourIsland_PokemonDayCare_TryRetrieveMon_15:
# 136 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_ComeAgain
	goto FourIsland_PokemonDayCare_TryRetrieveMon_12

FourIsland_PokemonDayCare_TryRetrieveMon_16:
# 131 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_TakeOtherOneBackToo, MSGBOX_YESNO
# 132 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FourIsland_PokemonDayCare_TryRetrieveMon_18
	goto FourIsland_PokemonDayCare_TryRetrieveMon_15

FourIsland_PokemonDayCare_TryRetrieveMon_18:
# 133 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_TryRetrieveMon
	goto FourIsland_PokemonDayCare_TryRetrieveMon_15


# 145 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_Movement_RetrieveMon:
# 147 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	delay_16
# 147 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	delay_16
# 148 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	face_right
# 149 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	delay_16
# 149 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	delay_16
# 150 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	face_left
# 151 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	delay_16
# 151 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	delay_16
# 152 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	face_up
# 153 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	creep_up
# 154 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	set_invisible
# 155 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	delay_16
# 155 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	delay_16
# 155 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	delay_16
# 155 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	delay_16
# 155 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	delay_16
# 156 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	face_down
# 157 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	set_visible
# 158 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	creep_down
	step_end

FourIsland_PokemonDayCare_EventScript_UnusedEnd::
	end


FourIsland_PokemonDayCare_EventScript_UnusedRetrieveMon::
# 168 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	special ShowDaycareLevelMenu
# 169 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq FourIsland_PokemonDayCare_EventScript_UnusedRetrieveMon_2
FourIsland_PokemonDayCare_EventScript_UnusedRetrieveMon_1:
# 172 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 173 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	specialvar VAR_RESULT, TakePokemonFromDaycare
# 174 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_HeresYourMon
# 175 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_ComeAgain
	release_end

FourIsland_PokemonDayCare_EventScript_UnusedRetrieveMon_2:
# 170 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_ComeAgain
	goto FourIsland_PokemonDayCare_EventScript_UnusedRetrieveMon_1

