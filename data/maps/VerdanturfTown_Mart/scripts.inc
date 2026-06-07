VerdanturfTown_Mart_MapScripts::
	.byte 0


VerdanturfTown_Mart_EventScript_Clerk::
# 4 "data/maps/VerdanturfTown_Mart/scripts.pory"
	lock_faceplayer
# 5 "data/maps/VerdanturfTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 6 "data/maps/VerdanturfTown_Mart/scripts.pory"
	waitmessage
# 7 "data/maps/VerdanturfTown_Mart/scripts.pory"
	pokemart VerdanturfTown_Mart_Pokemart
# 8 "data/maps/VerdanturfTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release_end


	.align 2
# 12 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_Pokemart:
# 13 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 14 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_NEST_BALL
# 15 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 16 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 17 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 18 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 19 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 20 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 21 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 22 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_X_SP_ATK
# 23 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_FLUFFY_TAIL
	.2byte ITEM_NONE

VerdanturfTown_Mart_EventScript_Boy::
# 27 "data/maps/VerdanturfTown_Mart/scripts.pory"
	msgbox VerdanturfTown_Mart_Text_XSpecialIsCrucial, MSGBOX_NPC
	end


VerdanturfTown_Mart_EventScript_ExpertF::
# 32 "data/maps/VerdanturfTown_Mart/scripts.pory"
	msgbox VerdanturfTown_Mart_Text_NoStrategyGuidesForBattleTent, MSGBOX_NPC
	end


VerdanturfTown_Mart_EventScript_Lass::
# 37 "data/maps/VerdanturfTown_Mart/scripts.pory"
	msgbox VerdanturfTown_Mart_Text_NestBallOnWeakenedPokemon, MSGBOX_NPC
	end


VerdanturfTown_Mart_Text_XSpecialIsCrucial::
# 41 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "For any POKéMON match, X SPECIAL\n"
	.string "is crucial.\p"
	.string "It jacks up the power of some moves\n"
	.string "even though it's only for one battle.$"

VerdanturfTown_Mart_Text_NoStrategyGuidesForBattleTent::
# 49 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "They don't seem to sell any winning\n"
	.string "strategy guides for the BATTLE TENT…\p"
	.string "It seems one must rely on one's\n"
	.string "own wits after all…$"

VerdanturfTown_Mart_Text_NestBallOnWeakenedPokemon::
# 57 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "The NEST BALL works better on\n"
	.string "weakened POKéMON.\p"
	.string "VERDANTURF is the only place you can\n"
	.string "buy it.$"
