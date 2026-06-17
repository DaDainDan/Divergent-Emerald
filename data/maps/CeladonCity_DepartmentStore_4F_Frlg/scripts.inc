CeladonCity_DepartmentStore_4F_Frlg_MapScripts::
	.byte 0


CeladonCity_DepartmentStore_4F_EventScript_Man::
# 4 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_4F_Text_GettingPokeDollAsPresent, MSGBOX_NPC
	end


CeladonCity_DepartmentStore_4F_EventScript_Youngster::
# 9 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_4F_Text_CanRunAwayWithPokeDoll, MSGBOX_NPC
	end


CeladonCity_DepartmentStore_4F_EventScript_FloorSign::
# 14 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_4F_Text_FloorSign, MSGBOX_SIGN
	end


CeladonCity_DepartmentStore_4F_EventScript_Clerk::
# 19 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	lock_faceplayer
# 20 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 21 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	waitmessage
# 22 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	pokemart CeladonCity_DepartmentStore_4F_Items
# 23 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
	release_end


	.align 2
# 27 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
CeladonCity_DepartmentStore_4F_Items:
# 28 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	.2byte ITEM_POKE_DOLL
# 29 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	.2byte ITEM_RETRO_MAIL
# 30 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 31 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 32 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	.2byte ITEM_WATER_STONE
# 33 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	.2byte ITEM_LEAF_STONE
	.2byte ITEM_NONE

CeladonCity_DepartmentStore_4F_Text_GettingPokeDollAsPresent::
# 36 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	.string "I'm getting a present for my\n"
	.string "girlfriend.\p"
	.string "I guess a POKé DOLL will be it.\n"
	.string "It's the popular thing.$"

CeladonCity_DepartmentStore_4F_Text_CanRunAwayWithPokeDoll::
# 44 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	.string "I heard something useful.\p"
	.string "If a wild POKéMON appears, you can\n"
	.string "distract it with a POKé DOLL.\p"
	.string "You can run away while the wild\n"
	.string "POKéMON is distracted.$"

CeladonCity_DepartmentStore_4F_Text_FloorSign::
# 54 "data/maps/CeladonCity_DepartmentStore_4F_Frlg/scripts.pory"
	.string "Express yourself with gifts!\n"
	.string "4F: WISE MAN GIFTS\p"
	.string "Evolution Special!\n"
	.string "Element STONES on sale now!$"
