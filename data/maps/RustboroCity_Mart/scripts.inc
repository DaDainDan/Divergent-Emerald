RustboroCity_Mart_MapScripts::
	.byte 0


RustboroCity_Mart_EventScript_Clerk::
# 4 "data/maps/RustboroCity_Mart/scripts.pory"
	lock_faceplayer
# 5 "data/maps/RustboroCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 6 "data/maps/RustboroCity_Mart/scripts.pory"
	waitmessage
# 7 "data/maps/RustboroCity_Mart/scripts.pory"
	goto_if_unset FLAG_MET_DEVON_EMPLOYEE, RustboroCity_Mart_EventScript_Clerk_2
# 10 "data/maps/RustboroCity_Mart/scripts.pory"
	pokemart RustboroCity_Mart_Pokemart_Expanded
RustboroCity_Mart_EventScript_Clerk_1:
# 12 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release_end

RustboroCity_Mart_EventScript_Clerk_2:
# 8 "data/maps/RustboroCity_Mart/scripts.pory"
	pokemart RustboroCity_Mart_Pokemart_Basic
	goto RustboroCity_Mart_EventScript_Clerk_1


	.align 2
# 16 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_Pokemart_Basic:
# 17 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 18 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 19 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 20 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 21 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 22 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 23 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_LURE
	.2byte ITEM_NONE

	.align 2
# 26 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_Pokemart_Expanded:
# 27 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 28 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 29 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 30 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 31 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 32 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 33 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_LURE
	.2byte ITEM_NONE

RustboroCity_Mart_EventScript_EnchancementClerk::
# 37 "data/maps/RustboroCity_Mart/scripts.pory"
	lock_faceplayer
# 38 "data/maps/RustboroCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 39 "data/maps/RustboroCity_Mart/scripts.pory"
	waitmessage
# 40 "data/maps/RustboroCity_Mart/scripts.pory"
	pokemart RustboroCity_Mart_Pokemart_Enhancement
# 41 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release_end


	.align 2
# 45 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_Pokemart_Enhancement:
# 46 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 47 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_HP_UP
# 48 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_PROTEIN
# 49 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_IRON
# 50 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_CARBOS
# 51 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_CALCIUM
# 52 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ZINC
# 53 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_PP_UP
	.2byte ITEM_NONE

RustboroCity_Mart_EventScript_PokefanF::
# 57 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox RustboroCity_Mart_Text_BuyingHealsInCaseOfShroomish, MSGBOX_NPC
	end


RustboroCity_Mart_EventScript_Boy::
# 62 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox RustboroCity_Mart_Text_ShouldBuySuperPotionsInstead, MSGBOX_NPC
	end


RustboroCity_Mart_EventScript_BugCatcher::
# 67 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox RustboroCity_Mart_Text_GettingEscapeRopeJustInCase, MSGBOX_NPC
	end


RustboroCity_Mart_Text_BuyingHealsInCaseOfShroomish::
# 71 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "I'm buying some PARLYZ HEALS and\n"
	.string "ANTIDOTES.\p"
	.string "Just in case I run into SHROOMISH\n"
	.string "in PETALBURG WOODS.$"

RustboroCity_Mart_Text_ShouldBuySuperPotionsInstead::
# 79 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "My POKéMON evolved.\n"
	.string "It has a lot of HP now.\p"
	.string "I should buy SUPER POTIONS for it\n"
	.string "instead of ordinary POTIONS.$"

RustboroCity_Mart_Text_GettingEscapeRopeJustInCase::
# 87 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "I'm getting an ESCAPE ROPE just in\n"
	.string "case I get lost in a cave.\p"
	.string "I just need to use it to get back to\n"
	.string "the entrance.$"
