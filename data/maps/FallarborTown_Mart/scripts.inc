FallarborTown_Mart_MapScripts::
	.byte 0


FallarborTown_Mart_EventScript_Clerk::
# 4 "data/maps/FallarborTown_Mart/scripts.pory"
	lock_faceplayer
# 5 "data/maps/FallarborTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 6 "data/maps/FallarborTown_Mart/scripts.pory"
	waitmessage
# 7 "data/maps/FallarborTown_Mart/scripts.pory"
	pokemart FallarborTown_Mart_Pokemart
# 8 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release_end


	.align 2
# 12 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_Pokemart:
# 13 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 14 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 15 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 16 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 17 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 18 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 19 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_X_SP_ATK
# 20 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_X_SPEED
# 21 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_X_ATTACK
# 22 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 23 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 24 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_GUARD_SPEC
	.2byte ITEM_NONE

FallarborTown_Mart_EventScript_Woman::
# 28 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox FallarborTown_Mart_Text_DecidingSkittyEvolve, MSGBOX_NPC
	end


FallarborTown_Mart_EventScript_PokefanM::
# 33 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox FallarborTown_Mart_Text_SellNuggetIFound, MSGBOX_NPC
	end


FallarborTown_Mart_EventScript_Skitty::
# 38 "data/maps/FallarborTown_Mart/scripts.pory"
	lock_faceplayer
# 39 "data/maps/FallarborTown_Mart/scripts.pory"
	waitse
# 40 "data/maps/FallarborTown_Mart/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 41 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox FallarborTown_Mart_Text_Skitty, MSGBOX_DEFAULT
# 42 "data/maps/FallarborTown_Mart/scripts.pory"
	waitmoncry
	release_end


FallarborTown_Mart_Text_DecidingSkittyEvolve::
# 46 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "I'm having a hard time deciding if I\n"
	.string "should make my SKITTY evolve or not.\p"
	.string "I only have to use this MOON STONE,\n"
	.string "but it's so hard to decide…\p"
	.string "If I make it evolve, it will become\n"
	.string "much stronger.\p"
	.string "But it will look so different, too.$"

FallarborTown_Mart_Text_Skitty::
# 59 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "SKITTY: Miyao?$"

FallarborTown_Mart_Text_SellNuggetIFound::
# 63 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "This NUGGET I found here…\n"
	.string "I suppose I'll have to sell it, seeing\l"
	.string "as how it has no other use.$"
