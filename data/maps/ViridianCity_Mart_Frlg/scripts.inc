ViridianCity_Mart_Frlg_MapScripts::
# 2 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ViridianCity_Mart_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD
# 9 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ViridianCity_Mart_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ViridianCity_Mart_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	goto_if_unset FLAG_SYS_POKEDEX_GET, ViridianCity_Mart_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2
ViridianCity_Mart_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

ViridianCity_Mart_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 4 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	setmetatile 1, 3, METATILE_Mart_CounterMid_Top, 1
# 5 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	setmetatile 1, 4, METATILE_Mart_CounterMid_Bottom, 1
	goto ViridianCity_Mart_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1

ViridianCity_Mart_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 0, ViridianCity_Mart_EventScript_ParcelScene
	.2byte 0


ViridianCity_Mart_EventScript_ParcelScene::
# 15 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	lockall
# 16 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 17 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	applymovement LOCALID_VIRIDIAN_MART_CLERK, Common_Movement_StepFasterDown
# 18 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	waitmovement 0
# 19 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	msgbox ViridianCity_Mart_Text_YouCameFromPallet
# 20 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	closemessage
# 21 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	applymovement LOCALID_VIRIDIAN_MART_CLERK, ViridianCity_Mart_EventScript_ParcelScene_Movement_0
# 22 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, ViridianCity_Mart_EventScript_ParcelScene_Movement_1
# 23 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	waitmovement 0
# 24 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	msgbox ViridianCity_Mart_Text_TakeThisToProfOak
# 25 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 1
# 26 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	giveitem_msg ViridianCity_Mart_Text_ReceivedOaksParcelFromClerk, ITEM_OAKS_PARCEL, 1, MUS_RG_OBTAIN_KEY_ITEM
# 27 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 5
# 28 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	releaseall
	end


ViridianCity_Mart_EventScript_Clerk::
# 33 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	lock_faceplayer
# 34 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 1
	goto_if_eq ViridianCity_Mart_EventScript_Clerk_2
# 38 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 39 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	waitmessage
# 40 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	pokemart ViridianCity_Mart_Items
# 41 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
	release_end

ViridianCity_Mart_EventScript_Clerk_2:
# 35 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	msgbox ViridianCity_Mart_Text_SayHiToOakForMe
	release_end


	.align 2
# 45 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
ViridianCity_Mart_Items:
# 46 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_POKE_BALL
# 47 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_POTION
# 48 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 49 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_NONE

ViridianCity_Mart_EventScript_Woman::
# 53 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	msgbox ViridianCity_Mart_Text_ShopDoesGoodBusinessInAntidotes, MSGBOX_NPC
	end


ViridianCity_Mart_EventScript_Youngster::
# 58 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	msgbox ViridianCity_Mart_Text_GotToBuySomePotions, MSGBOX_NPC
	end


# 21 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
ViridianCity_Mart_EventScript_ParcelScene_Movement_0:
# 21 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	delay_16
# 21 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	delay_16
# 21 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	delay_16
# 21 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	delay_16
# 21 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	step_faster_right
	step_end

# 22 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
ViridianCity_Mart_EventScript_ParcelScene_Movement_1:
# 22 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	walk_up
# 22 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	walk_up
# 22 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	walk_up
# 22 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	walk_up
# 22 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	step_faster_left
	step_end

ViridianCity_Mart_Text_YouCameFromPallet::
# 62 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	.string "Hey!\n"
	.string "You came from PALLET TOWN?$"

ViridianCity_Mart_Text_TakeThisToProfOak::
# 67 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	.string "You know PROF. OAK, right?\p"
	.string "His order came in.\n"
	.string "Can I get you to take it to him?$"

ViridianCity_Mart_Text_ReceivedOaksParcelFromClerk::
# 74 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	.string "{PLAYER} received OAK'S PARCEL\n"
	.string "from the POKéMON MART clerk.$"

ViridianCity_Mart_Text_SayHiToOakForMe::
# 79 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	.string "Okay, thanks! Please say hi to\n"
	.string "PROF. OAK for me, too.$"

ViridianCity_Mart_Text_ShopDoesGoodBusinessInAntidotes::
# 84 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	.string "This shop does good business in\n"
	.string "ANTIDOTES, I've heard.$"

ViridianCity_Mart_Text_GotToBuySomePotions::
# 89 "data/maps/ViridianCity_Mart_Frlg/scripts.pory"
	.string "I've got to buy some POTIONS.\p"
	.string "You never know when your POKéMON\n"
	.string "will need quick healing.$"
