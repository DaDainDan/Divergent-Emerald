LilycoveCity_DepartmentStore_5F_MapScripts::
# 2 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LilycoveCity_DepartmentStore_5F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

LilycoveCity_DepartmentStore_5F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 1, LilycoveCity_DepartmentStore_5F_EventScript_BlockRoofStairs
# 4 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 2, LilycoveCity_DepartmentStore_5F_EventScript_BlockRoofStairs
# 5 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	map_script_2 VAR_SOOTOPOLIS_CITY_STATE, 3, LilycoveCity_DepartmentStore_5F_EventScript_BlockRoofStairs
	.2byte 0


LilycoveCity_DepartmentStore_5F_EventScript_BlockRoofStairs::
# 12 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	setobjectxy LOCALID_DEPARTMENT_STORE_STAIRS_WOMAN, 16, 2
# 13 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	turnobject LOCALID_DEPARTMENT_STORE_STAIRS_WOMAN, DIR_NORTH
	end


LilycoveCity_DepartmentStore_5F_EventScript_ClerkFarLeft::
# 18 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	lock_faceplayer
# 19 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	setvar VAR_0x8007, 0
# 20 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	goto LilycoveCity_DepartmentStore_5F_EventScript_ClerkMain
	end


LilycoveCity_DepartmentStore_5F_EventScript_ClerkMain::
# 25 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	message gText_HowMayIServeYou
# 26 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitmessage
# 27 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	switch VAR_0x8007
# 28 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	case 0, LilycoveCity_DepartmentStore_5F_EventScript_ClerkMain_3
# 29 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	case 1, LilycoveCity_DepartmentStore_5F_EventScript_ClerkMain_4
# 30 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	case 2, LilycoveCity_DepartmentStore_5F_EventScript_ClerkMain_5
# 31 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	case 3, LilycoveCity_DepartmentStore_5F_EventScript_ClerkMain_6
LilycoveCity_DepartmentStore_5F_EventScript_ClerkMain_1:
# 33 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	pokemartdecoration2 LilycoveCity_DepartmentStore_5F_Pokemart_Dolls
# 34 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release_end

LilycoveCity_DepartmentStore_5F_EventScript_ClerkMain_3:
# 28 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	pokemartdecoration2 LilycoveCity_DepartmentStore_5F_Pokemart_Dolls
	goto LilycoveCity_DepartmentStore_5F_EventScript_ClerkMain_1

LilycoveCity_DepartmentStore_5F_EventScript_ClerkMain_4:
# 29 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	pokemartdecoration2 LilycoveCity_DepartmentStore_5F_Pokemart_Cushions
	goto LilycoveCity_DepartmentStore_5F_EventScript_ClerkMain_1

LilycoveCity_DepartmentStore_5F_EventScript_ClerkMain_5:
# 30 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	pokemartdecoration2 LilycoveCity_DepartmentStore_5F_Pokemart_Posters
	goto LilycoveCity_DepartmentStore_5F_EventScript_ClerkMain_1

LilycoveCity_DepartmentStore_5F_EventScript_ClerkMain_6:
# 31 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	pokemartdecoration2 LilycoveCity_DepartmentStore_5F_Pokemart_Mats
	goto LilycoveCity_DepartmentStore_5F_EventScript_ClerkMain_1


	.align 2
# 38 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_Pokemart_Dolls:
# 39 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_PICHU_DOLL
# 40 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_PIKACHU_DOLL
# 41 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_MARILL_DOLL
# 42 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_JIGGLYPUFF_DOLL
# 43 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_DUSKULL_DOLL
# 44 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_WYNAUT_DOLL
# 45 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_BALTOY_DOLL
# 46 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_KECLEON_DOLL
# 47 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_AZURILL_DOLL
# 48 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_SKITTY_DOLL
# 49 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_SWABLU_DOLL
# 50 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_GULPIN_DOLL
	.2byte ITEM_NONE

LilycoveCity_DepartmentStore_5F_EventScript_ClerkMidLeft::
# 54 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	lock_faceplayer
# 55 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	setvar VAR_0x8007, 1
# 56 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	goto LilycoveCity_DepartmentStore_5F_EventScript_ClerkMain
	end


	.align 2
# 60 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_Pokemart_Cushions:
# 61 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_PIKA_CUSHION
# 62 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_ROUND_CUSHION
# 63 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_ZIGZAG_CUSHION
# 64 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_SPIN_CUSHION
# 65 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_DIAMOND_CUSHION
# 66 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_BALL_CUSHION
# 67 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_GRASS_CUSHION
# 68 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_FIRE_CUSHION
# 69 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_WATER_CUSHION
	.2byte ITEM_NONE

LilycoveCity_DepartmentStore_5F_EventScript_ClerkMidRight::
# 73 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	lock_faceplayer
# 74 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	setvar VAR_0x8007, 2
# 75 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	goto LilycoveCity_DepartmentStore_5F_EventScript_ClerkMain
	end


	.align 2
# 79 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_Pokemart_Posters:
# 80 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_BALL_POSTER
# 81 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_GREEN_POSTER
# 82 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_RED_POSTER
# 83 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_BLUE_POSTER
# 84 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_CUTE_POSTER
# 85 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_PIKA_POSTER
# 86 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_LONG_POSTER
# 87 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_SEA_POSTER
# 88 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_SKY_POSTER
	.2byte ITEM_NONE

LilycoveCity_DepartmentStore_5F_EventScript_ClerkFarRight::
# 92 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	lock_faceplayer
# 93 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	setvar VAR_0x8007, 3
# 94 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	goto LilycoveCity_DepartmentStore_5F_EventScript_ClerkMain
	end


	.align 2
# 98 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
LilycoveCity_DepartmentStore_5F_Pokemart_Mats:
# 99 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_SURF_MAT
# 100 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_THUNDER_MAT
# 101 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_FIRE_BLAST_MAT
# 102 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_POWDER_SNOW_MAT
# 103 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_ATTRACT_MAT
# 104 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_FISSURE_MAT
# 105 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_SPIKES_MAT
# 106 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_GLITTER_MAT
# 107 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_JUMP_MAT
# 108 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.2byte DECOR_SPIN_MAT
	.2byte ITEM_NONE

LilycoveCity_DepartmentStore_5F_EventScript_PokefanF::
# 112 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_5F_Text_PlaceFullOfCuteDolls, MSGBOX_NPC
	end


LilycoveCity_DepartmentStore_5F_EventScript_Woman::
# 117 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	lockall
# 118 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	applymovement LOCALID_DEPARTMENT_STORE_STAIRS_WOMAN, Common_Movement_FacePlayer
# 119 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitmovement 0
# 120 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 0
	goto_if_eq LilycoveCity_DepartmentStore_5F_EventScript_Woman_2
# 120 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 4
	goto_if_ge LilycoveCity_DepartmentStore_5F_EventScript_Woman_2
# 124 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_5F_Text_ClosedRooftopForWeather, MSGBOX_DEFAULT
# 125 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	closemessage
# 126 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	applymovement LOCALID_DEPARTMENT_STORE_STAIRS_WOMAN, Common_Movement_StepFasterUp
# 127 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	waitmovement 0
LilycoveCity_DepartmentStore_5F_EventScript_Woman_1:
# 129 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	releaseall
	end

LilycoveCity_DepartmentStore_5F_EventScript_Woman_2:
# 121 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_5F_Text_SellManyCuteMatsHere, MSGBOX_DEFAULT
# 122 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	closemessage
	goto LilycoveCity_DepartmentStore_5F_EventScript_Woman_1


LilycoveCity_DepartmentStore_5F_EventScript_LittleGirl::
# 134 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_5F_Text_GettingDollInsteadOfPokemon, MSGBOX_NPC
	end


LilycoveCity_DepartmentStore_5F_Text_PlaceFullOfCuteDolls::
# 138 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "This place is full of cute DOLLS.\p"
	.string "I should buy some for me, instead of\n"
	.string "just for my children.$"

LilycoveCity_DepartmentStore_5F_Text_GettingDollInsteadOfPokemon::
# 145 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "I'm not big enough to raise POKéMON,\n"
	.string "so I'm getting a cute DOLL instead.$"

LilycoveCity_DepartmentStore_5F_Text_SellManyCuteMatsHere::
# 150 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "They sell many cute MATS here.\p"
	.string "I wonder which one I should get?\n"
	.string "Maybe I'll buy them all…$"

LilycoveCity_DepartmentStore_5F_Text_ClosedRooftopForWeather::
# 157 "data/maps/LilycoveCity_DepartmentStore_5F/scripts.pory"
	.string "I think they closed the rooftop\n"
	.string "because the weather is wild today.$"
