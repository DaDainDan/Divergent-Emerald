LilycoveCity_DepartmentStore_4F_MapScripts::
	.byte 0


LilycoveCity_DepartmentStore_4F_EventScript_Gentleman::
# 4 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_4F_Text_AttackOrDefenseTM, MSGBOX_NPC
	end


LilycoveCity_DepartmentStore_4F_EventScript_Woman::
# 9 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_4F_Text_FiftyDifferentTMs, MSGBOX_NPC
	end


LilycoveCity_DepartmentStore_4F_EventScript_Youngster::
# 14 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_4F_Text_PokemonOnlyHaveFourMoves, MSGBOX_NPC
	end


LilycoveCity_DepartmentStore_4F_EventScript_ClerkLeft::
# 19 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	lock_faceplayer
# 20 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	message gText_HowMayIServeYou
# 21 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	waitmessage
# 22 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_AttackTMs
# 23 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release_end


	.align 2
# 27 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_Pokemart_AttackTMs:
# 28 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_FIRE_BLAST
# 29 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_THUNDER
# 30 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_BLIZZARD
# 31 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_HYPER_BEAM
	.2byte ITEM_NONE

LilycoveCity_DepartmentStore_4F_EventScript_ClerkRight::
# 35 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	lock_faceplayer
# 36 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	message gText_HowMayIServeYou
# 37 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	waitmessage
# 38 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_DefenseTMs
# 39 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release_end


	.align 2
# 43 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_Pokemart_DefenseTMs:
# 44 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_PROTECT
# 45 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_SAFEGUARD
# 46 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_REFLECT
# 47 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM_LIGHT_SCREEN
	.2byte ITEM_NONE

LilycoveCity_DepartmentStore_4F_Text_AttackOrDefenseTM::
# 50 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "Hmm…\p"
	.string "An attacking move…\n"
	.string "Or a defensive move…\p"
	.string "It's no easy matter to decide which TM\n"
	.string "moves should be taught to POKéMON…$"

LilycoveCity_DepartmentStore_4F_Text_FiftyDifferentTMs::
# 60 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "There are so many different kinds of\n"
	.string "TM moves.\p"
	.string "A catalog I read said there are fifty\n"
	.string "different kinds.$"

LilycoveCity_DepartmentStore_4F_Text_PokemonOnlyHaveFourMoves::
# 68 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "I'd like to get all the different TMs,\n"
	.string "but a POKéMON learns only four moves.$"
