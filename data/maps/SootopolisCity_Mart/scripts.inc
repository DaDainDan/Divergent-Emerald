SootopolisCity_Mart_MapScripts::
	.byte 0


SootopolisCity_Mart_EventScript_Clerk::
# 4 "data/maps/SootopolisCity_Mart/scripts.pory"
	lock_faceplayer
# 5 "data/maps/SootopolisCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 6 "data/maps/SootopolisCity_Mart/scripts.pory"
	waitmessage
# 7 "data/maps/SootopolisCity_Mart/scripts.pory"
	pokemart SootopolisCity_Mart_Pokemart
# 8 "data/maps/SootopolisCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release_end


	.align 2
# 12 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_Pokemart:
# 13 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 14 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_LURE_BALL
# 15 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_MAX_POTION
# 16 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_MAX_REVIVE
# 17 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 18 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_MAX_ELIXIR
# 19 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 20 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_MAX_LURE
	.2byte ITEM_NONE

SootopolisCity_Mart_EventScript_EnhancementClerk::
# 24 "data/maps/SootopolisCity_Mart/scripts.pory"
	lock_faceplayer
# 25 "data/maps/SootopolisCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 26 "data/maps/SootopolisCity_Mart/scripts.pory"
	waitmessage
# 27 "data/maps/SootopolisCity_Mart/scripts.pory"
	pokemart SootopolisCity_Mart_Pokemart_Enhancement
# 28 "data/maps/SootopolisCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release_end


	.align 2
# 32 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_Pokemart_Enhancement:
# 33 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_L
# 34 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_HP_UP
# 35 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_PROTEIN
# 36 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_IRON
# 37 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_CARBOS
# 38 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_CALCIUM
# 39 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_ZINC
# 40 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_PP_UP
	.2byte ITEM_NONE

SootopolisCity_Mart_EventScript_FatMan::
# 44 "data/maps/SootopolisCity_Mart/scripts.pory"
	lock_faceplayer
# 45 "data/maps/SootopolisCity_Mart/scripts.pory"
	compare VAR_SKY_PILLAR_STATE, 2
	goto_if_ge SootopolisCity_Mart_EventScript_FatMan_2
# 45 "data/maps/SootopolisCity_Mart/scripts.pory"
	goto_if_unset FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, SootopolisCity_Mart_EventScript_FatMan_2
# 49 "data/maps/SootopolisCity_Mart/scripts.pory"
	msgbox SootopolisCity_Mart_Text_TooScaryOutside, MSGBOX_DEFAULT
	release_end

SootopolisCity_Mart_EventScript_FatMan_2:
# 46 "data/maps/SootopolisCity_Mart/scripts.pory"
	msgbox SootopolisCity_Mart_Text_PPUpIsGreat, MSGBOX_DEFAULT
	release_end


SootopolisCity_Mart_EventScript_Gentleman::
# 54 "data/maps/SootopolisCity_Mart/scripts.pory"
	lock_faceplayer
# 55 "data/maps/SootopolisCity_Mart/scripts.pory"
	compare VAR_SKY_PILLAR_STATE, 2
	goto_if_ge SootopolisCity_Mart_EventScript_Gentleman_2
# 55 "data/maps/SootopolisCity_Mart/scripts.pory"
	goto_if_unset FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, SootopolisCity_Mart_EventScript_Gentleman_2
# 59 "data/maps/SootopolisCity_Mart/scripts.pory"
	msgbox SootopolisCity_Mart_Text_DidSomethingAwaken, MSGBOX_DEFAULT
	release_end

SootopolisCity_Mart_EventScript_Gentleman_2:
# 56 "data/maps/SootopolisCity_Mart/scripts.pory"
	msgbox SootopolisCity_Mart_Text_FullRestoreItemOfDreams, MSGBOX_DEFAULT
	release_end


SootopolisCity_Mart_Text_PPUpIsGreat::
# 63 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "PP UP is great!\p"
	.string "It raises the POWER POINTS, the PP,\n"
	.string "of a POKéMON move.$"

SootopolisCity_Mart_Text_TooScaryOutside::
# 70 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "What…\n"
	.string "What is happening?\p"
	.string "I really want to know, but it's too\n"
	.string "scary to go outside.$"

SootopolisCity_Mart_Text_FullRestoreItemOfDreams::
# 78 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "Do you know FULL RESTORE?\p"
	.string "Full restoration of HP!\n"
	.string "Eradication of all status problems!\p"
	.string "It's truly an item of your dreams!$"

SootopolisCity_Mart_Text_DidSomethingAwaken::
# 87 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "This weather…\n"
	.string "Did something awaken?$"
