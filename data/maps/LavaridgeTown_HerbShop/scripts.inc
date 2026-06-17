LavaridgeTown_HerbShop_MapScripts::
	.byte 0


LavaridgeTown_HerbShop_EventScript_Clerk::
# 4 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	lock_faceplayer
# 5 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	message LavaridgeTown_HerbShop_Text_WelcomeToHerbShop
# 6 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	waitmessage
# 7 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	pokemart LavaridgeTown_HerbShop_Pokemart
# 8 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release_end


	.align 2
# 12 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Pokemart:
# 13 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_ENERGY_POWDER
# 14 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_ENERGY_ROOT
# 15 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_HEAL_POWDER
# 16 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_REVIVAL_HERB
	.2byte ITEM_NONE

LavaridgeTown_HerbShop_EventScript_ExpertM::
# 20 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox LavaridgeTown_HerbShop_Text_HerbalMedicineWorksButMonWillDislike, MSGBOX_NPC
	end


LavaridgeTown_HerbShop_EventScript_OldMan::
# 25 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	lock_faceplayer
# 26 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHARCOAL, LavaridgeTown_HerbShop_EventScript_OldMan_2
# 30 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox LavaridgeTown_HerbShop_Text_YouveComeToLookAtHerbalMedicine, MSGBOX_DEFAULT
	giveitem ITEM_CHARCOAL
# 0 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LavaridgeTown_HerbShop_EventScript_OldMan_5
LavaridgeTown_HerbShop_EventScript_OldMan_4:
# 34 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	setflag FLAG_RECEIVED_CHARCOAL
	release_end

LavaridgeTown_HerbShop_EventScript_OldMan_2:
# 27 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox LavaridgeTown_HerbShop_Text_ExplainCharcoal, MSGBOX_DEFAULT
	release_end

LavaridgeTown_HerbShop_EventScript_OldMan_5:
# 32 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto LavaridgeTown_HerbShop_EventScript_OldMan_4


LavaridgeTown_HerbShop_Text_WelcomeToHerbShop::
# 38 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "Welcome to the HERB SHOP, home of\n"
	.string "effective and inexpensive medicine!$"

LavaridgeTown_HerbShop_Text_YouveComeToLookAtHerbalMedicine::
# 43 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "You've come to look at herbal medicine\n"
	.string "in LAVARIDGE?\p"
	.string "That's rather commendable.\p"
	.string "I like you! Take this!$"

LavaridgeTown_HerbShop_Text_ExplainCharcoal::
# 52 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "That CHARCOAL I gave you, it's used\n"
	.string "for making herbal medicine.\p"
	.string "It also does wonders when held by\n"
	.string "a POKéMON.\p"
	.string "It intensifies the power of FIRE-type\n"
	.string "moves.$"

LavaridgeTown_HerbShop_Text_HerbalMedicineWorksButMonWillDislike::
# 63 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "Herbal medicine works impressively well.\n"
	.string "But your POKéMON will dislike you for it.\l"
	.string "It must be horribly bitter!$"
