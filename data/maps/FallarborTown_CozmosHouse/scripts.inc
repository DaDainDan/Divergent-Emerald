FallarborTown_CozmosHouse_MapScripts::
	.byte 0


FallarborTown_CozmosHouse_EventScript_ProfCozmo::
# 4 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	lock_faceplayer
# 5 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_RETURN, FallarborTown_CozmosHouse_EventScript_ProfCozmo_2
	checkitem ITEM_METEORITE
# 0 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FallarborTown_CozmosHouse_EventScript_ProfCozmo_3
FallarborTown_CozmosHouse_EventScript_ProfCozmo_1:
# 12 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_MeteoriteWillNeverBeMineNow, MSGBOX_DEFAULT
	release_end

FallarborTown_CozmosHouse_EventScript_ProfCozmo_2:
# 6 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_ReallyGoingToHelpMyResearch, MSGBOX_DEFAULT
	release_end

FallarborTown_CozmosHouse_EventScript_ProfCozmo_3:
# 10 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto FallarborTown_CozmosHouse_EventScript_PlayerHasMeteorite
	goto FallarborTown_CozmosHouse_EventScript_ProfCozmo_1


FallarborTown_CozmosHouse_EventScript_PlayerHasMeteorite::
# 17 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_unset FLAG_TEMP_2, FallarborTown_CozmosHouse_EventScript_PlayerHasMeteorite_2
# 21 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_MayIHaveMeteorite, MSGBOX_YESNO
FallarborTown_CozmosHouse_EventScript_PlayerHasMeteorite_1:
# 23 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FallarborTown_CozmosHouse_EventScript_PlayerHasMeteorite_6
# 33 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setflag FLAG_TEMP_2
# 34 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_CrushedWithDisappointment, MSGBOX_DEFAULT
FallarborTown_CozmosHouse_EventScript_PlayerHasMeteorite_5:
	release_end

FallarborTown_CozmosHouse_EventScript_PlayerHasMeteorite_2:
# 18 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_MeteoriteWillNeverBeMineNow, MSGBOX_DEFAULT
# 19 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_IsThatMeteoriteMayIHaveIt, MSGBOX_YESNO
	goto FallarborTown_CozmosHouse_EventScript_PlayerHasMeteorite_1

FallarborTown_CozmosHouse_EventScript_PlayerHasMeteorite_6:
# 24 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_PleaseUseThisTM, MSGBOX_DEFAULT
	giveitem ITEM_TM_RETURN
# 0 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FallarborTown_CozmosHouse_EventScript_PlayerHasMeteorite_10
FallarborTown_CozmosHouse_EventScript_PlayerHasMeteorite_9:
# 28 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setvar VAR_0x8004, ITEM_METEORITE
# 29 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	call Common_EventScript_PlayerHandedOverTheItem
# 30 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setflag FLAG_RECEIVED_TM_RETURN
# 31 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_ReallyGoingToHelpMyResearch, MSGBOX_DEFAULT
	goto FallarborTown_CozmosHouse_EventScript_PlayerHasMeteorite_5

FallarborTown_CozmosHouse_EventScript_PlayerHasMeteorite_10:
# 26 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto FallarborTown_CozmosHouse_EventScript_PlayerHasMeteorite_9


FallarborTown_CozmosHouse_EventScript_CozmosWife::
# 40 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	lock_faceplayer
# 41 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_RETURN, FallarborTown_CozmosHouse_EventScript_CozmosWife_2
# 44 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, FallarborTown_CozmosHouse_EventScript_CozmosWife_3
# 48 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_CozmoWentToMeteorFalls, MSGBOX_DEFAULT
FallarborTown_CozmosHouse_EventScript_CozmosWife_1:
	release_end

FallarborTown_CozmosHouse_EventScript_CozmosWife_2:
# 42 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_CozmoIsSoHappy, MSGBOX_DEFAULT
	goto FallarborTown_CozmosHouse_EventScript_CozmosWife_1

FallarborTown_CozmosHouse_EventScript_CozmosWife_3:
# 45 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_FeelSorryForCozmo, MSGBOX_DEFAULT
	goto FallarborTown_CozmosHouse_EventScript_CozmosWife_1


FallarborTown_CozmosHouse_Text_MeteoriteWillNeverBeMineNow::
# 53 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "PROF. COZMO: Oh…\n"
	.string "I never should have let myself be\l"
	.string "conned into telling TEAM MAGMA where\l"
	.string "you can find METEORITES…\p"
	.string "That METEORITE from METEOR FALLS…\n"
	.string "It's never going to be mine now…$"

FallarborTown_CozmosHouse_Text_IsThatMeteoriteMayIHaveIt::
# 63 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Oh!\n"
	.string "Hah?\p"
	.string "That item…\p"
	.string "Could it be?\p"
	.string "Is it the METEORITE that TEAM MAGMA\n"
	.string "took from METEOR FALLS?\p"
	.string "Please, may I have it?\p"
	.string "I'm not asking for it for free.\n"
	.string "How about in exchange for this TM?$"

FallarborTown_CozmosHouse_Text_PleaseUseThisTM::
# 80 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "PROF. COZMO: This TM, it represents\n"
	.string "my feeling of gratitude.\l"
	.string "Please use it!$"

FallarborTown_CozmosHouse_Text_ReallyGoingToHelpMyResearch::
# 86 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "PROF. COZMO: Oh, I can't believe it.\n"
	.string "This is really, really great!\p"
	.string "This is really going to help my research!$"

FallarborTown_CozmosHouse_Text_CrushedWithDisappointment::
# 93 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "PROF. COZMO: Oh, but…\n"
	.string "I'm crushed with disappointment…$"

FallarborTown_CozmosHouse_Text_MayIHaveMeteorite::
# 98 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "PROF. COZMO: Please, may I have that\n"
	.string "METEORITE?\p"
	.string "I'm not asking for it for free.\n"
	.string "How about in exchange for this TM?$"

FallarborTown_CozmosHouse_Text_CozmoWentToMeteorFalls::
# 106 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "PROF. COZMO went off to METEOR FALLS\n"
	.string "on ROUTE 114 with some people from\l"
	.string "TEAM MAGMA.$"

FallarborTown_CozmosHouse_Text_FeelSorryForCozmo::
# 112 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Poor PROF. COZMO…\n"
	.string "He's so depressed… I feel sorry for him.$"

FallarborTown_CozmosHouse_Text_CozmoIsSoHappy::
# 117 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Look at PROF. COZMO…\n"
	.string "He's so happy! I think it's cute.$"
