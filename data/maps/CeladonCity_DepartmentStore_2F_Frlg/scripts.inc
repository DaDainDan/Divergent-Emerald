CeladonCity_DepartmentStore_2F_Frlg_MapScripts::
	.byte 0


CeladonCity_DepartmentStore_2F_EventScript_UnusedNPC::
# 4 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_2F_Text_SuperRepelMorePowerfulRepel, MSGBOX_NPC
	end


CeladonCity_DepartmentStore_2F_EventScript_Lass::
# 9 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_2F_Text_BuyReviveForLongOutings, MSGBOX_NPC
	end


CeladonCity_DepartmentStore_2F_EventScript_FloorSign::
# 14 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	msgbox CeladonCity_DepartmentStore_2F_Text_FloorSign, MSGBOX_SIGN
	end


CeladonCity_DepartmentStore_2F_EventScript_ClerkItems::
# 19 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	lock_faceplayer
# 20 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 21 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	waitmessage
# 22 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	pokemart CeladonCity_DepartmentStore_2F_Items
# 23 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
	release_end


	.align 2
# 27 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
CeladonCity_DepartmentStore_2F_Items:
# 28 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 29 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 30 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	.2byte ITEM_REVIVE
# 31 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 32 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 33 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	.2byte ITEM_AWAKENING
# 34 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 35 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 36 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_NONE

CeladonCity_DepartmentStore_2F_EventScript_ClerkTMs::
# 40 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	lock_faceplayer
# 41 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 42 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	waitmessage
# 43 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	pokemart CeladonCity_DepartmentStore_2F_TMs
# 44 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
	release_end


	.align 2
# 48 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
CeladonCity_DepartmentStore_2F_TMs:
# 49 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	.2byte ITEM_TM05
# 50 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	.2byte ITEM_TM15
# 51 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	.2byte ITEM_TM28
# 52 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	.2byte ITEM_TM31
# 53 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	.2byte ITEM_TM43
# 54 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	.2byte ITEM_TM45
	.2byte ITEM_NONE

CeladonCity_DepartmentStore_2F_Text_SuperRepelMorePowerfulRepel::
# 57 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	.string "SUPER REPEL keeps weak POKéMON at\n"
	.string "bay…\p"
	.string "Hmm, it's a more powerful REPEL.$"

CeladonCity_DepartmentStore_2F_Text_BuyReviveForLongOutings::
# 64 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	.string "For long outings, you should buy\n"
	.string "REVIVE.$"

CeladonCity_DepartmentStore_2F_Text_FloorSign::
# 69 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	.string "Top-Grade Items for TRAINERS!\p"
	.string "2F: TRAINER'S MARKET$"

CeladonCity_DepartmentStore_2F_Text_LanceComesToBuyCapes::
# 75 "data/maps/CeladonCity_DepartmentStore_2F_Frlg/scripts.pory"
	.string "We have a customer, LANCE, who\n"
	.string "occasionally comes.\p"
	.string "He always buys capes.\p"
	.string "I wonder… Does he have many\n"
	.string "identical capes at home?$"
