Route104_PrettyPetalFlowerShop_MapScripts::
# 2 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route104_PrettyPetalFlowerShop_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route104_PrettyPetalFlowerShop_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	setflag FLAG_LANDMARK_FLOWER_SHOP
# 4 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto_if_unset FLAG_MET_PRETTY_PETAL_SHOP_OWNER, Route104_PrettyPetalFlowerShop_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 4 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, Route104_PrettyPetalFlowerShop_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 7 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	setflag FLAG_TEMP_1
Route104_PrettyPetalFlowerShop_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

Route104_PrettyPetalFlowerShop_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	setobjectxyperm LOCALID_FLOWER_SHOP_OWNER, 4, 6
	goto Route104_PrettyPetalFlowerShop_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


Route104_PrettyPetalFlowerShop_EventScript_ShopOwner::
# 14 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	lock_faceplayer
# 15 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto_if_set FLAG_TEMP_1, Route104_PrettyPetalFlowerShop_EventScript_ShopOwner_2
Route104_PrettyPetalFlowerShop_EventScript_ShopOwner_1:
# 18 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_ThisIsPrettyPetalFlowerShop, MSGBOX_DEFAULT
# 19 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto_if_unset FLAG_MET_PRETTY_PETAL_SHOP_OWNER, Route104_PrettyPetalFlowerShop_EventScript_ShopOwner_5
# 23 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_LearnAboutBerries, MSGBOX_YESNO
Route104_PrettyPetalFlowerShop_EventScript_ShopOwner_4:
# 25 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	switch VAR_RESULT
# 26 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	case YES, Route104_PrettyPetalFlowerShop_EventScript_ShopOwner_10
# 27 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	case NO, Route104_PrettyPetalFlowerShop_EventScript_ShopOwner_11
Route104_PrettyPetalFlowerShop_EventScript_ShopOwner_8:
	release_end

Route104_PrettyPetalFlowerShop_EventScript_ShopOwner_2:
# 16 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto Route104_PrettyPetalFlowerShop_EventScript_SellDecorations
	goto Route104_PrettyPetalFlowerShop_EventScript_ShopOwner_1

Route104_PrettyPetalFlowerShop_EventScript_ShopOwner_5:
# 20 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	setflag FLAG_MET_PRETTY_PETAL_SHOP_OWNER
# 21 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_IntroLearnAboutBerries, MSGBOX_YESNO
	goto Route104_PrettyPetalFlowerShop_EventScript_ShopOwner_4

Route104_PrettyPetalFlowerShop_EventScript_ShopOwner_10:
# 26 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_BerriesExplanation, MSGBOX_DEFAULT
	goto Route104_PrettyPetalFlowerShop_EventScript_ShopOwner_8

Route104_PrettyPetalFlowerShop_EventScript_ShopOwner_11:
# 27 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_FlowersBringHappiness, MSGBOX_DEFAULT
	goto Route104_PrettyPetalFlowerShop_EventScript_ShopOwner_8


Route104_PrettyPetalFlowerShop_EventScript_SellMisc::
# 33 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	message gText_HowMayIServeYou
# 34 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	waitmessage
# 35 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	pokemart Route104_PrettyPetalFlowerShop_Pokemart_Misc
# 36 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release_end


	.align 2
# 40 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_Pokemart_Misc:
# 41 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte ITEM_WAILMER_PAIL
# 42 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte ITEM_RICH_MULCH
# 43 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 44 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte ITEM_SNACK
# 45 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte ITEM_GRASSY_SEED
# 46 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte ITEM_ELECTRIC_SEED
# 47 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte ITEM_MISTY_SEED
# 48 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte ITEM_PSYCHIC_SEED
# 49 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte ITEM_LUCKY_SEED
# 50 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte ITEM_MOUNTAIN_SEED
# 51 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte ITEM_SPOOKY_SEED
	.2byte ITEM_NONE

Route104_PrettyPetalFlowerShop_EventScript_SellDecorations::
# 56 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	message gText_PlayerWhatCanIDoForYou
# 57 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	waitmessage
# 58 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	pokemartdecoration2 Route104_PrettyPetalFlowerShop_Pokemart_Plants
# 59 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release_end


	.align 2
# 63 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_Pokemart_Plants:
# 64 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte DECOR_RED_PLANT
# 65 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte DECOR_TROPICAL_PLANT
# 66 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte DECOR_PRETTY_FLOWERS
# 67 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte DECOR_COLORFUL_PLANT
# 68 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte DECOR_BIG_PLANT
# 69 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte DECOR_GORGEOUS_PLANT
	.2byte ITEM_NONE

Route104_PrettyPetalFlowerShop_EventScript_WailmerPailGirl::
# 73 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	lock_faceplayer
# 74 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto_if_unset FLAG_RECEIVED_WAILMER_PAIL, Route104_PrettyPetalFlowerShop_EventScript_WailmerPailGirl_2
Route104_PrettyPetalFlowerShop_EventScript_WailmerPailGirl_1:
# 81 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_WailmerPailExplanation, MSGBOX_DEFAULT
	release_end

Route104_PrettyPetalFlowerShop_EventScript_WailmerPailGirl_2:
# 75 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_YouCanHaveThis, MSGBOX_DEFAULT
	giveitem ITEM_SITRUS_BERRY
# 0 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route104_PrettyPetalFlowerShop_EventScript_WailmerPailGirl_5
Route104_PrettyPetalFlowerShop_EventScript_WailmerPailGirl_4:
# 79 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	setflag FLAG_RECEIVED_WAILMER_PAIL
	goto Route104_PrettyPetalFlowerShop_EventScript_WailmerPailGirl_1

Route104_PrettyPetalFlowerShop_EventScript_WailmerPailGirl_5:
# 77 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto Route104_PrettyPetalFlowerShop_EventScript_WailmerPailGirl_4


Route104_PrettyPetalFlowerShop_EventScript_RandomBerryGirl::
# 86 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	lock_faceplayer
# 87 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	dotimebasedevents
# 88 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto_if_set FLAG_DAILY_FLOWER_SHOP_RECEIVED_BERRY, Route104_PrettyPetalFlowerShop_EventScript_RandomBerryGirl_2
# 92 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_ImGrowingFlowers, MSGBOX_DEFAULT
# 93 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	giverandomberry BERRY_ID_CHERI, BERRY_ID_PERSIM
# 94 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route104_PrettyPetalFlowerShop_EventScript_RandomBerryGirl_5
Route104_PrettyPetalFlowerShop_EventScript_RandomBerryGirl_4:
# 97 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	setflag FLAG_DAILY_FLOWER_SHOP_RECEIVED_BERRY
# 98 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_MachineMixesBerries, MSGBOX_DEFAULT
	release_end

Route104_PrettyPetalFlowerShop_EventScript_RandomBerryGirl_2:
# 89 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_MachineMixesBerries, MSGBOX_DEFAULT
	release_end

Route104_PrettyPetalFlowerShop_EventScript_RandomBerryGirl_5:
# 95 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto Route104_PrettyPetalFlowerShop_EventScript_RandomBerryGirl_4

