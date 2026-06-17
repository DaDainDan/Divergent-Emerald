OneIsland_PokemonCenter_1F_Frlg_MapScripts::
# 2 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OneIsland_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 19 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 20 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, OneIsland_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD
# 29 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, OneIsland_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

OneIsland_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_ONE_ISLAND
# 4 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	switch VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F
# 5 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	case 6, OneIsland_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 6 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	case 0, OneIsland_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 11 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	case 2, OneIsland_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
OneIsland_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

OneIsland_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 5 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 7
	goto OneIsland_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

OneIsland_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 7 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setobjectxyperm LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, 9, 8
# 8 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, MOVEMENT_TYPE_FACE_UP
# 9 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setobjectxyperm LOCALID_CELIO, 15, 6
# 10 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_CELIO, MOVEMENT_TYPE_FACE_UP
	goto OneIsland_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

OneIsland_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 12 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setobjectxyperm LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, 14, 7
# 13 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, MOVEMENT_TYPE_FACE_LEFT
# 14 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setobjectxyperm LOCALID_CELIO, 14, 8
# 15 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_CELIO, MOVEMENT_TYPE_FACE_LEFT
	goto OneIsland_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

OneIsland_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD:
# 21 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 5
	goto_if_ge OneIsland_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2
OneIsland_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 24 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, OneIsland_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_5
OneIsland_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_4:
	end

OneIsland_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 22 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setmetatile 13, 4, METATILE_PokemonCenterFrlg_NetworkMachine_Ruby, 1
	goto OneIsland_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_1

OneIsland_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 25 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_SetNetworkMachineOn
	goto OneIsland_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_LOAD_4

OneIsland_PokemonCenter_1F_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 30 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 0, OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene
	.2byte 0


OneIsland_PokemonCenter_1F_EventScript_SetNetworkMachineOn::
# 35 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setmetatile 16, 4, METATILE_PokemonCenterFrlg_NetworkMachine_Sapphire, 1
# 36 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setmetatile 14, 4, METATILE_PokemonCenterFrlg_NetworkMachine_ScreenLeft_On, 1
# 37 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setmetatile 15, 4, METATILE_PokemonCenterFrlg_NetworkMachine_ScreenRight_On, 1
	return


OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene::
# 42 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lockall
# 43 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 44 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene_Movement_0
# 45 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene_Movement_1
# 46 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 47 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillHeyThereCelio
# 48 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterRight
# 49 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 50 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	playse SE_PIN
# 51 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_ExclamationMark
# 52 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 53 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_StepFasterLeft
# 54 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 55 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_Delay48
# 56 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 57 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioCantBelieveYouCameOut
# 58 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillHowsYourResearchComing
# 59 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_StepFasterDown
# 60 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
# 61 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 62 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_ThisIsMyBuddyCelio
# 63 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_StepFasterRight
# 64 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 65 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterRight
# 66 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 67 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene_2
# 70 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_PlayerIsRisingPokemonChamp
OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene_1:
# 72 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_StepFasterDown
# 73 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 74 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioThatsReallyImpressive
# 75 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillBringMeUpToSpeed
# 76 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_StepFasterLeft
# 77 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 78 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioPCsCantLinkWithYours
# 79 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	closemessage
# 80 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_StepFasterUp
# 81 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 82 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillLetMeHelpYou
# 83 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_StepFasterDown
# 84 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 85 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
# 86 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 87 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CanYouDeliverThisMeteoritePlayer
# 88 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgreceiveditem OneIsland_PokemonCenter_1F_Text_AcceptedMeteoriteFromBill, ITEM_METEORITE, 1, MUS_RG_OBTAIN_KEY_ITEM
# 89 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	additem ITEM_METEORITE
# 90 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_StepFasterDown
# 91 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 92 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioPleaseTakeThis
# 93 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	giveitem_msg OneIsland_PokemonCenter_1F_Text_ObtainedTriPass, ITEM_TRI_PASS, 1, MUS_RG_OBTAIN_KEY_ITEM
# 94 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_PassLetsYouTravelBetweenIslands
# 95 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2
	goto_if_ge OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene_6
# 103 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setflag FLAG_HIDE_TOWN_MAP
# 104 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2
# 105 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	giveitem_msg OneIsland_PokemonCenter_1F_Text_ReceivedTownMap, ITEM_TOWN_MAP, 1, MUS_RG_OBTAIN_KEY_ITEM
OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene_5:
# 107 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setflag FLAG_SYS_SEVII_MAP_123
# 108 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillCatchYouLater
# 109 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	closemessage
# 110 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_StepFasterUp
# 111 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 112 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_StepFasterUp
# 113 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 114 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setflag FLAG_SYS_PC_STORAGE_DISABLED
# 115 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 1
# 116 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	releaseall
	end

OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene_2:
# 68 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_PlayerIsReigningPokemonChamp
	goto OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene_1

OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene_6:
# 96 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 97 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 98 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	message OneIsland_PokemonCenter_1F_Text_ReceivedExtraPageForTownMap
# 99 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmessage
# 100 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitfanfare
# 101 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
	goto OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene_5


# 121 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_WalkUp:
# 123 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_up
	step_end

# 127 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_StepAsideLeft::
# 129 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 130 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_faster_right
	step_end

OneIsland_PokemonCenter_1F_EventScript_Nurse::
# 134 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lock_faceplayer
# 135 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
	release_end


OneIsland_PokemonCenter_1F_EventScript_Bill::
# 140 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 141 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_set FLAG_SEVII_DETOUR_FINISHED, OneIsland_PokemonCenter_1F_EventScript_Bill_2
# 147 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_HmmHowAboutLikeThis
	release_end

OneIsland_PokemonCenter_1F_EventScript_Bill_2:
# 142 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_FacePlayer
# 143 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 144 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_GotPCWorkingStrollAWhileMore
	release_end


OneIsland_PokemonCenter_1F_EventScript_Celio::
# 152 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lock_faceplayer
# 153 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 7
	goto_if_eq OneIsland_PokemonCenter_1F_EventScript_Celio_2
# 156 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 6
	goto_if_eq OneIsland_PokemonCenter_1F_EventScript_Celio_3
# 159 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_set FLAG_RECOVERED_SAPPHIRE, OneIsland_PokemonCenter_1F_EventScript_Celio_4
# 162 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 5
	goto_if_eq OneIsland_PokemonCenter_1F_EventScript_Celio_5
# 165 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_RUBY, OneIsland_PokemonCenter_1F_EventScript_Celio_6
# 168 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 4
	goto_if_eq OneIsland_PokemonCenter_1F_EventScript_Celio_7
	specialvar VAR_RESULT, IsNationalPokedexEnabled
# 0 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OneIsland_PokemonCenter_1F_EventScript_Celio_8
# 182 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 3
	goto_if_eq OneIsland_PokemonCenter_1F_EventScript_Celio_9
# 186 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_SorryForBeingPoorHost
# 187 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto Common_EventScript_FaceOriginalDirection
OneIsland_PokemonCenter_1F_EventScript_Celio_1:
	release_end

OneIsland_PokemonCenter_1F_EventScript_Celio_2:
# 154 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_CelioGiveBillFact
	goto OneIsland_PokemonCenter_1F_EventScript_Celio_1

OneIsland_PokemonCenter_1F_EventScript_Celio_3:
# 157 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_WishYouBestOfLuck
	goto OneIsland_PokemonCenter_1F_EventScript_Celio_1

OneIsland_PokemonCenter_1F_EventScript_Celio_4:
# 160 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_GiveCelioSapphire
	goto OneIsland_PokemonCenter_1F_EventScript_Celio_1

OneIsland_PokemonCenter_1F_EventScript_Celio_5:
# 163 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_PassLetYouGetToAllIslands
	goto OneIsland_PokemonCenter_1F_EventScript_Celio_1

OneIsland_PokemonCenter_1F_EventScript_Celio_6:
# 166 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_GiveCelioRuby
	goto OneIsland_PokemonCenter_1F_EventScript_Celio_1

OneIsland_PokemonCenter_1F_EventScript_Celio_7:
# 169 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_TryingToFindGem
	goto OneIsland_PokemonCenter_1F_EventScript_Celio_1

OneIsland_PokemonCenter_1F_EventScript_Celio_8:
# 172 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioCaughtMoreMonMaybeICanBeUseful
# 173 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_StepFasterUp
# 174 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 175 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_YoullBeTradingFromTrainersFarAway
# 176 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_FacePlayer
# 177 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 178 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_NeedsSpecialGemstone
# 179 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_MT_EMBER_EXTERIOR, 1
# 180 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 4
	goto OneIsland_PokemonCenter_1F_EventScript_Celio_1

OneIsland_PokemonCenter_1F_EventScript_Celio_9:
# 183 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioImModifyingMyNetworkMachine
	goto OneIsland_PokemonCenter_1F_EventScript_Celio_1


OneIsland_PokemonCenter_1F_EventScript_CelioGiveBillFact::
# 193 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioHearingRumorsAboutYou
# 194 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	random 3
# 195 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	switch VAR_RESULT
# 196 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	case 0, OneIsland_PokemonCenter_1F_EventScript_CelioGiveBillFact_3
# 199 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	case 1, OneIsland_PokemonCenter_1F_EventScript_CelioGiveBillFact_4
# 203 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	famechecker FAMECHECKER_BILL, 5
# 204 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillCantStomachMilk
OneIsland_PokemonCenter_1F_EventScript_CelioGiveBillFact_1:
	release_end

OneIsland_PokemonCenter_1F_EventScript_CelioGiveBillFact_3:
# 197 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	famechecker FAMECHECKER_BILL, 3
# 198 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillsFirstMonWasAbra
	goto OneIsland_PokemonCenter_1F_EventScript_CelioGiveBillFact_1

OneIsland_PokemonCenter_1F_EventScript_CelioGiveBillFact_4:
# 200 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	famechecker FAMECHECKER_BILL, 4
# 201 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillsHometownInGoldenrod
	goto OneIsland_PokemonCenter_1F_EventScript_CelioGiveBillFact_1


OneIsland_PokemonCenter_1F_EventScript_GiveCelioSapphire::
# 210 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 211 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 212 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	message OneIsland_PokemonCenter_1F_Text_HandedSapphireToCelio
# 213 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmessage
# 214 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitfanfare
# 215 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 216 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	removeitem ITEM_SAPPHIRE
# 217 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_ThankYouGiveMeTime
# 218 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	closemessage
# 219 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CELIO, OneIsland_PokemonCenter_1F_EventScript_GiveCelioSapphire_Movement_0
# 220 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 221 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	playse SE_CLICK
# 222 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setmetatile 16, 4, METATILE_PokemonCenterFrlg_NetworkMachine_Sapphire, 1
# 223 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	special DrawWholeMapView
# 224 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_OkayThisIsGood
# 225 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	closemessage
# 226 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay 60
# 227 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CELIO, OneIsland_PokemonCenter_1F_EventScript_GiveCelioSapphire_Movement_1
# 228 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 229 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay 30
# 230 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CELIO, OneIsland_PokemonCenter_1F_EventScript_GiveCelioSapphire_Movement_1
# 231 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 232 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay 40
# 233 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	playse SE_PC_ON
# 234 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_SetNetworkMachineOn
# 235 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	special DrawWholeMapView
# 236 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_LinkedUpWithLanette
# 237 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_FacePlayer
# 238 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 239 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_ManagedToLinkWithHoennThankYou
# 240 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	special SetPostgameFlags
# 241 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setflag FLAG_IS_CHAMPION
# 242 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setflag FLAG_HIDE_CERULEAN_CAVE_GUARD
# 243 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setflag FLAG_HIDE_LORELEI_IN_HER_HOUSE
# 244 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 6
# 245 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	special InitRoamer
	release_end


OneIsland_PokemonCenter_1F_EventScript_GiveCelioRuby::
# 250 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_OhThats
# 251 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 252 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 253 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	message OneIsland_PokemonCenter_1F_Text_HandedRubyToCelio
# 254 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmessage
# 255 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitfanfare
# 256 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 257 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	closemessage
# 258 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CELIO, OneIsland_PokemonCenter_1F_EventScript_GiveCelioSapphire_Movement_0
# 259 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 260 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	playse SE_CLICK
# 261 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setmetatile 13, 4, METATILE_PokemonCenterFrlg_NetworkMachine_Ruby, 1
# 262 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	special DrawWholeMapView
# 263 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay 30
# 264 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_FacePlayer
# 265 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 266 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_MayIAskOneMoreFavor, MSGBOX_YESNO
# 267 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq OneIsland_PokemonCenter_1F_EventScript_GiveCelioRuby_2
OneIsland_PokemonCenter_1F_EventScript_GiveCelioRuby_1:
# 272 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_AnotherGemstoneInSeviiIslands
# 273 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	removeitem ITEM_RUBY
# 274 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	removeitem ITEM_TRI_PASS
# 275 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 5
# 276 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	additem ITEM_RAINBOW_PASS
# 277 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setflag FLAG_SYS_SEVII_MAP_4567
# 278 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 279 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 280 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	message OneIsland_PokemonCenter_1F_Text_ReturnedTriPassForRainbowPass
# 281 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmessage
# 282 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitfanfare
# 283 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 284 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	message OneIsland_PokemonCenter_1F_Text_ObtainedExtraMapPage
# 285 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmessage
# 286 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitfanfare
# 287 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 288 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_PassLetYouGetToAllIslands
	release_end

OneIsland_PokemonCenter_1F_EventScript_GiveCelioRuby_2:
OneIsland_PokemonCenter_1F_EventScript_GiveCelioRuby_5:
# 269 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_PleaseINeedYourHelp, MSGBOX_YESNO
# 270 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq OneIsland_PokemonCenter_1F_EventScript_GiveCelioRuby_5
	goto OneIsland_PokemonCenter_1F_EventScript_GiveCelioRuby_1


OneIsland_PokemonCenter_1F_EventScript_LittleBoy::
# 293 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CameFromPalletDontKnowIt, MSGBOX_NPC
	end


OneIsland_PokemonCenter_1F_EventScript_Hiker::
# 298 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_EnormousVolcanoOnIsland, MSGBOX_NPC
	end


OneIsland_PokemonCenter_1F_EventScript_BattleGirl::
# 303 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lock_faceplayer
# 304 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, OneIsland_PokemonCenter_1F_EventScript_BattleGirl_2
# 308 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_WishICouldTradeWithBoyfriend
	release_end

OneIsland_PokemonCenter_1F_EventScript_BattleGirl_2:
# 305 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_TradedWithFarAwayBoyfriend
	release_end


OneIsland_PokemonCenter_1F_EventScript_NetworkMachine::
# 313 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lockall
# 314 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, OneIsland_PokemonCenter_1F_EventScript_NetworkMachine_2
# 317 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_set FLAG_SEVII_DETOUR_FINISHED, OneIsland_PokemonCenter_1F_EventScript_NetworkMachine_3
# 321 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_MachineUnderAdjustment
OneIsland_PokemonCenter_1F_EventScript_NetworkMachine_1:
# 323 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	releaseall
	end

OneIsland_PokemonCenter_1F_EventScript_NetworkMachine_2:
# 315 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_MachineLinkedWithKantoAndHoenn
	goto OneIsland_PokemonCenter_1F_EventScript_NetworkMachine_1

OneIsland_PokemonCenter_1F_EventScript_NetworkMachine_3:
# 318 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_MachineLinkedWithKanto
	goto OneIsland_PokemonCenter_1F_EventScript_NetworkMachine_1


OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandTriggerTop::
# 328 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lockall
# 329 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 330 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene
	end


OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandTriggerMidTop::
# 335 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lockall
# 336 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 2
# 337 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene
	end


OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandTriggerMidBottom::
# 342 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lockall
# 343 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 3
# 344 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene
	end


OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandTriggerBottom::
# 349 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lockall
# 350 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 4
# 351 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene
	end


OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene::
# 356 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 357 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	playse SE_PIN
# 358 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_ExclamationMark
# 359 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 360 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillOhHeyPlayer
# 361 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	closemessage
# 362 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	switch VAR_TEMP_1
# 363 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	case 1, OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene_3
# 364 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	case 2, OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene_4
# 365 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	case 3, OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene_5
# 366 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	case 4, OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene_6
OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene_1:
# 368 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 369 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay 10
# 370 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillWeGotItDone
# 371 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterDown
# 372 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 373 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioJobWentQuick
# 374 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_StepFasterDown
# 375 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 376 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_StepFasterUp
# 377 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 378 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillYouveLearnedALot
# 379 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioOhReallyEhehe
# 380 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	closemessage
# 381 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_StepFasterLeft
# 382 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 383 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay 10
# 384 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterRight
# 385 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 386 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay 15
# 387 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillWeShouldHeadBackToKanto
# 388 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	closemessage
# 389 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, Common_Movement_StepFasterDown
# 390 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 391 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay 15
# 392 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_StepFasterLeft
# 393 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 394 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterDown
# 395 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 396 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioPromiseIllShowYouAroundSometime
# 397 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	closemessage
# 398 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay 25
# 399 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene_Movement_3
# 400 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_POKEMON_CENTER_BILL, OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene_Movement_4
# 401 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	waitmovement 0
# 402 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	playse SE_EXIT
# 403 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setflag FLAG_HIDE_ONE_ISLAND_POKECENTER_BILL
# 404 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 3
# 405 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	clearflag FLAG_HIDE_CINNABAR_BILL
# 406 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND, 3
# 407 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_ONE_ISLAND
# 408 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_0x8006, SEAGALLOP_CINNABAR_ISLAND
# 409 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	goto EventScript_SetSail
	end

OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene_3:
# 363 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene_Movement_0
	goto OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene_1

OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene_4:
# 364 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight
	goto OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene_1

OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene_5:
# 365 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene_Movement_1
	goto OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene_1

OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene_6:
# 366 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene_Movement_2
	goto OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene_1


# 414 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_DelayStepLeft::
# 416 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay_16
# 416 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay_16
# 417 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay_4
# 418 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_faster_left
	step_end

# 422 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_StepDown::
# 424 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_fast_down
	step_end

# 44 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene_Movement_0:
# 44 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_up
# 44 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_up
# 44 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_right
# 44 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_right
# 44 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_right
# 44 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_right
# 44 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_right
# 44 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_faster_up
	step_end

# 45 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene_Movement_1:
# 45 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_up
# 45 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_right
# 45 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_right
# 45 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_right
# 45 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_right
# 45 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_right
# 45 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_up
# 45 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_faster_right
	step_end

# 219 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_GiveCelioSapphire_Movement_0:
# 219 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_faster_up
# 219 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_up
# 219 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay_16
# 219 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_up
# 219 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_up
	step_end

# 227 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_GiveCelioSapphire_Movement_1:
# 227 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_up
# 227 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	delay_8
# 227 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_up
	step_end

# 363 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene_Movement_0:
# 363 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_right
# 363 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 363 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_faster_right
	step_end

# 365 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene_Movement_1:
# 365 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_right
# 365 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_up
# 365 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_faster_right
	step_end

# 366 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene_Movement_2:
# 366 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_right
# 366 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_up
# 366 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_up
# 366 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	step_faster_right
	step_end

# 399 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene_Movement_3:
# 399 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 399 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 399 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 399 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 399 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
# 399 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
	step_end

# 400 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene_Movement_4:
# 400 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 400 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 400 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 400 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 400 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_left
# 400 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	walk_down
	step_end

OneIsland_PokemonCenter_1F_Text_BillHeyThereCelio::
# 427 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "BILL: Hey, there!\n"
	.string "CELIO!$"

OneIsland_PokemonCenter_1F_Text_CelioCantBelieveYouCameOut::
# 432 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "CELIO: BILL!\n"
	.string "I can't believe you came out here.$"

OneIsland_PokemonCenter_1F_Text_BillHowsYourResearchComing::
# 437 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "BILL: Well, absolutely!\n"
	.string "How's your research coming along?\p"
	.string "…Oh, wait a sec.$"

OneIsland_PokemonCenter_1F_Text_ThisIsMyBuddyCelio::
# 444 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "{PLAYER}, this is my buddy CELIO.\n"
	.string "He's one dedicated PC MANIAC!$"

OneIsland_PokemonCenter_1F_Text_PlayerIsRisingPokemonChamp::
# 449 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "CELIO, this is {PLAYER}, a rising\n"
	.string "contender as the POKéMON CHAMP!$"

OneIsland_PokemonCenter_1F_Text_PlayerIsReigningPokemonChamp::
# 454 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "CELIO, this is {PLAYER}, the\n"
	.string "reigning POKéMON CHAMP!$"

OneIsland_PokemonCenter_1F_Text_CelioThatsReallyImpressive::
# 459 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "CELIO: That's really impressive.\p"
	.string "I hate to say it, but I have zero\n"
	.string "aptitude for battling.\p"
	.string "Anyways, I'm glad to meet you.$"

OneIsland_PokemonCenter_1F_Text_BillBringMeUpToSpeed::
# 468 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "BILL: So, bring me up to speed.\n"
	.string "How's your machine running?$"

OneIsland_PokemonCenter_1F_Text_CelioPCsCantLinkWithYours::
# 473 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "CELIO: It's running fine, but we're\n"
	.string "too remote out here.\p"
	.string "The PCs on this island just can't\n"
	.string "link with your PC, BILL.$"

OneIsland_PokemonCenter_1F_Text_BillLetMeHelpYou::
# 481 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "BILL: Oh, yeah?\n"
	.string "Okay, let me take a look-see.\p"
	.string "…Hang on here…\n"
	.string "I think we can make it work.\l"
	.string "Let me help you, okay?$"

OneIsland_PokemonCenter_1F_Text_CanYouDeliverThisMeteoritePlayer::
# 490 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "{PLAYER}, can I get you to wait for\n"
	.string "me just a bit?\p"
	.string "…Actually, can I get you to do\n"
	.string "me a favor?\p"
	.string "The island next to this one's\n"
	.string "called TWO ISLAND.\p"
	.string "There's a guy there that runs\n"
	.string "a GAME CORNER.\p"
	.string "He has this thing for rare rocks\n"
	.string "and gems.\p"
	.string "We keep in touch, being fellow\n"
	.string "maniacs.\p"
	.string "So, can I get you to deliver this\n"
	.string "METEORITE to him?$"

OneIsland_PokemonCenter_1F_Text_AcceptedMeteoriteFromBill::
# 513 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "{PLAYER} accepted the METEORITE\n"
	.string "from BILL.$"

OneIsland_PokemonCenter_1F_Text_CelioPleaseTakeThis::
# 518 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "CELIO: {PLAYER}, if you are going\n"
	.string "to TWO ISLAND, please take this.$"

OneIsland_PokemonCenter_1F_Text_PassLetsYouTravelBetweenIslands::
# 523 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "It's a PASS for the ferry service\n"
	.string "serving the local islands.\p"
	.string "It will let you travel between the\n"
	.string "ISLANDS ONE, TWO, and THREE.\p"
	.string "Oh, you should have this, too.$"

OneIsland_PokemonCenter_1F_Text_ReceivedExtraPageForTownMap::
# 533 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "{PLAYER} received an extra page\n"
	.string "for the TOWN MAP!$"

OneIsland_PokemonCenter_1F_Text_ReceivedTownMap::
# 538 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "{PLAYER} received\n"
	.string "a TOWN MAP!$"

OneIsland_PokemonCenter_1F_Text_BillCatchYouLater::
# 543 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "BILL: I'll catch you later!\n"
	.string "Say hi to the guy for me!$"

OneIsland_PokemonCenter_1F_Text_HmmHowAboutLikeThis::
# 548 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Hmm…\p"
	.string "How about we try this like this…$"

OneIsland_PokemonCenter_1F_Text_GotPCWorkingStrollAWhileMore::
# 554 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Oh, hey, {PLAYER}!\p"
	.string "Did you see?\n"
	.string "We got the PC working!\p"
	.string "I've got a few things to show\n"
	.string "CELIO here.\p"
	.string "Can you go out on a stroll or\n"
	.string "something for a while more?$"

OneIsland_PokemonCenter_1F_Text_SorryForBeingPoorHost::
# 567 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I'm sorry for taking up so much of\n"
	.string "BILL's time.\p"
	.string "I'm also sorry for being such a \n"
	.string "poor host on your visit here.$"

OneIsland_PokemonCenter_1F_Text_UsualPCServicesUnavailable::
# 575 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "The usual PC services aren't\n"
	.string "available…$"

OneIsland_PokemonCenter_1F_Text_BillOhHeyPlayer::
# 580 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "BILL: Oh, hey!\n"
	.string "{PLAYER}!$"

OneIsland_PokemonCenter_1F_Text_BillWeGotItDone::
# 585 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "BILL: What kept you so long?\n"
	.string "Been out having a good time?\p"
	.string "We got it done.\n"
	.string "The PCs are up and running!$"

OneIsland_PokemonCenter_1F_Text_CelioJobWentQuick::
# 593 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "CELIO: The job went incredibly\n"
	.string "quick.\p"
	.string "BILL is one amazing guy…$"

OneIsland_PokemonCenter_1F_Text_BillYouveLearnedALot::
# 600 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "BILL: No, no! There was almost\n"
	.string "nothing left for me to do.\p"
	.string "CELIO, I have to hand it to you.\n"
	.string "You've learned a lot.$"

OneIsland_PokemonCenter_1F_Text_CelioOhReallyEhehe::
# 608 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "CELIO: Oh, really?\n"
	.string "Ehehe…$"

OneIsland_PokemonCenter_1F_Text_BillWeShouldHeadBackToKanto::
# 613 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "BILL: Well, there you have it.\n"
	.string "I'm finished with the job.\l"
	.string "We should head back to KANTO.\p"
	.string "CELIO, I'll be seeing you again.$"

OneIsland_PokemonCenter_1F_Text_CelioPromiseIllShowYouAroundSometime::
# 621 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "CELIO: {PLAYER}, I'm really sorry\n"
	.string "that we sent you off alone today.\p"
	.string "I promise, I will show you around\n"
	.string "these islands sometime.$"

OneIsland_PokemonCenter_1F_Text_CelioImModifyingMyNetworkMachine::
# 629 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "CELIO: Hello!\n"
	.string "You look awfully busy as always.\p"
	.string "How am I doing?\p"
	.string "Well, I'm modifying my Network\n"
	.string "Machine.\p"
	.string "When I get done with the machine,\n"
	.string "I hope you'll be first to use it,\l"
	.string "{PLAYER}.$"

OneIsland_PokemonCenter_1F_Text_CelioCaughtMoreMonMaybeICanBeUseful::
# 643 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "CELIO: {PLAYER}, how have things\n"
	.string "been for you?\p"
	.string "Oh, is that right?\n"
	.string "You've caught more POKéMON.\p"
	.string "Do you know what?\n"
	.string "Maybe I can be useful to you.$"

OneIsland_PokemonCenter_1F_Text_YoullBeTradingFromTrainersFarAway::
# 654 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I'm modifying the Network Machine\n"
	.string "right now.\p"
	.string "I'm changing it so it can handle\n"
	.string "trades over long distances.\p"
	.string "When I get finished, you'll be\n"
	.string "trading for exotic POKéMON from\l"
	.string "TRAINERS far away.$"

OneIsland_PokemonCenter_1F_Text_NeedsSpecialGemstone::
# 666 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "But, there is a slight catch.\p"
	.string "For the link to work, the Machine\n"
	.string "needs a special gemstone.\p"
	.string "It's supposed to be on ONE ISLAND,\n"
	.string "but I haven't found one yet.\p"
	.string "Who knows where it could be.$"

OneIsland_PokemonCenter_1F_Text_TryingToFindGem::
# 678 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I was trying to find the gem\n"
	.string "even while I was studying.\p"
	.string "As a result, I've made no headway\n"
	.string "in both my search and studies…\p"
	.string "If I relied on BILL, I'm sure my\n"
	.string "research would progress.\p"
	.string "But this time, I want to try to do\n"
	.string "things by myself.$"

OneIsland_PokemonCenter_1F_Text_OhThats::
# 692 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Oh!\n"
	.string "Th-that's…$"

OneIsland_PokemonCenter_1F_Text_HandedRubyToCelio::
# 697 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "{PLAYER} handed the RUBY\n"
	.string "to CELIO.$"

OneIsland_PokemonCenter_1F_Text_MayIAskOneMoreFavor::
# 702 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Thank you!\n"
	.string "{PLAYER}, you're simply amazing.\p"
	.string "… … …  … … …\p"
	.string "Um… May I ask one more giant favor\n"
	.string "of you?$"

OneIsland_PokemonCenter_1F_Text_PleaseINeedYourHelp::
# 712 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "It… It's not anything weird.\n"
	.string "Please, I need your help.$"

OneIsland_PokemonCenter_1F_Text_AnotherGemstoneInSeviiIslands::
# 717 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "While I was studying gemstones,\n"
	.string "I discovered something important.\p"
	.string "There is another gem that forms\n"
	.string "a pair with this RUBY.\p"
	.string "That other gemstone is supposed to\n"
	.string "be in the SEVII ISLANDS.\p"
	.string "{PLAYER}, please, I need you to go\n"
	.string "find the other gem.\p"
	.string "{PLAYER}, may I have your ferry\n"
	.string "PASS and the TOWN MAP?$"

OneIsland_PokemonCenter_1F_Text_ReturnedTriPassForRainbowPass::
# 734 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "{PLAYER} returned the TRI-PASS and\n"
	.string "received the RAINBOW PASS.$"

OneIsland_PokemonCenter_1F_Text_ObtainedExtraMapPage::
# 739 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Obtained an extra page for the\n"
	.string "TOWN MAP!$"

OneIsland_PokemonCenter_1F_Text_PassLetYouGetToAllIslands::
# 744 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "This is my own ferry PASS.\p"
	.string "It will let you get to all the\n"
	.string "SEVII ISLANDS.\p"
	.string "{PLAYER}, please, I can't do\n"
	.string "it without your help.$"

OneIsland_PokemonCenter_1F_Text_HandedSapphireToCelio::
# 754 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "{PLAYER} handed the SAPPHIRE\n"
	.string "to CELIO.$"

OneIsland_PokemonCenter_1F_Text_ThankYouGiveMeTime::
# 759 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "CELIO: So this is the gem that\n"
	.string "forms a pair with the RUBY…\p"
	.string "{PLAYER}, you've gone through a lot\n"
	.string "to get this, didn't you?\p"
	.string "You don't have to tell me. I know\n"
	.string "it wasn't easy.\p"
	.string "Thank you so much!\p"
	.string "Now it's my turn to work for you!\n"
	.string "Please give me a little time.$"

OneIsland_PokemonCenter_1F_Text_OkayThisIsGood::
# 775 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Okay, this is good…$"

OneIsland_PokemonCenter_1F_Text_LinkedUpWithLanette::
# 779 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I did it!\n"
	.string "I linked up with LANETTE!$"

OneIsland_PokemonCenter_1F_Text_ManagedToLinkWithHoennThankYou::
# 784 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "{PLAYER}…\n"
	.string "{PLAYER}, I did it!\p"
	.string "I've managed to link up with\n"
	.string "TRAINERS in the HOENN region!\p"
	.string "Finally, the Network Machine is\n"
	.string "fully operational!\p"
	.string "{PLAYER}, I owe it all to you!\p"
	.string "Thanks to you, my dream came\n"
	.string "true…$"

OneIsland_PokemonCenter_1F_Text_WishYouBestOfLuck::
# 800 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I…\n"
	.string "I'm not crying.\p"
	.string "That's enough about me!\p"
	.string "{PLAYER}, you're going to keep\n"
	.string "looking for exotic POKéMON, right?\p"
	.string "I wish you the best of luck!$"

OneIsland_PokemonCenter_1F_Text_CelioHearingRumorsAboutYou::
# 812 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "CELIO: Hello!\p"
	.string "{PLAYER}, I've been hearing rumors\n"
	.string "about you.$"

OneIsland_PokemonCenter_1F_Text_BillsFirstMonWasAbra::
# 819 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "{PLAYER}, what's your favorite kind\n"
	.string "of POKéMON?\p"
	.string "BILL is a POKéMANIAC, so he loves\n"
	.string "every kind.\p"
	.string "Apparently, the first one he caught\n"
	.string "was an ABRA.$"

OneIsland_PokemonCenter_1F_Text_BillsHometownInGoldenrod::
# 830 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "By the way, {PLAYER}, you're from\n"
	.string "PALLET TOWN, aren't you?\p"
	.string "I've heard that it's a quiet and\n"
	.string "pleasant place.\p"
	.string "BILL's hometown is GOLDENROD CITY,\n"
	.string "where his folks still live.\p"
	.string "I've heard that it's quite the\n"
	.string "festive, bustling city.\p"
	.string "I'd like to go there one day.$"

OneIsland_PokemonCenter_1F_Text_BillCantStomachMilk::
# 846 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "{PLAYER}, is there anything that\n"
	.string "you can't stand?\p"
	.string "Apparently, BILL simply can't\n"
	.string "stomach milk at all.$"

OneIsland_PokemonCenter_1F_Text_CameFromPalletDontKnowIt::
# 854 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Oh, you're a stranger here!\n"
	.string "Hi! Where did you come from?\p"
	.string "…PALLET TOWN?\n"
	.string "I don't know it!$"

OneIsland_PokemonCenter_1F_Text_EnormousVolcanoOnIsland::
# 862 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "On this island, there's an enormous\n"
	.string "volcano.\p"
	.string "It hasn't erupted lately, so why\n"
	.string "not enjoy a hike?$"

OneIsland_PokemonCenter_1F_Text_WishICouldTradeWithBoyfriend::
# 870 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I wish I could trade POKéMON with\n"
	.string "my boyfriend who lives far away…$"

OneIsland_PokemonCenter_1F_Text_TradedWithFarAwayBoyfriend::
# 875 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I traded POKéMON with my boyfriend\n"
	.string "far away!\p"
	.string "Everyone's saying that we can\n"
	.string "thank you and CELIO.\p"
	.string "So, thank you!$"

OneIsland_PokemonCenter_1F_Text_MachineUnderAdjustment::
# 885 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Network Machine\n"
	.string "Link Level 0\p"
	.string "…POKéMON Storage System under\n"
	.string "adjustment…$"

OneIsland_PokemonCenter_1F_Text_MachineLinkedWithKanto::
# 893 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Network Machine\n"
	.string "Link Level 1\p"
	.string "Link established with the KANTO\n"
	.string "region.$"

OneIsland_PokemonCenter_1F_Text_MachineLinkedWithKantoAndHoenn::
# 901 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Network Machine\n"
	.string "Link Level 2\p"
	.string "Link established with the KANTO\n"
	.string "and HOENN regions.$"

OneIsland_PokemonCenter_1F_Text_ObtainedTriPass::
# 909 "data/maps/OneIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Obtained the TRI-PASS!$"
