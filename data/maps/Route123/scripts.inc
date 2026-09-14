Route123_MapScripts::
# 2 "data/maps/Route123/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route123_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route123_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route123/scripts.pory"
	special SetRoute123Weather
# 4 "data/maps/Route123/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 5 "data/maps/Route123/scripts.pory"
	compare VAR_TEMP_0, 29
	goto_if_gt Route123_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Route123_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 8 "data/maps/Route123/scripts.pory"
	compare VAR_TEMP_0, 29
	goto_if_lt Route123_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
Route123_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	end

Route123_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 6 "data/maps/Route123/scripts.pory"
	call Route123_WildSet1Trigger
	goto Route123_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route123_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 9 "data/maps/Route123/scripts.pory"
	call Route123_WildSet2Trigger
	goto Route123_MapScripts_MAP_SCRIPT_ON_TRANSITION_4


Route123_WildSet1Trigger::
# 16 "data/maps/Route123/scripts.pory"
	setvar VAR_ROUTE123_WILD_SET, 0
	return


Route123_WildSet2Trigger::
# 21 "data/maps/Route123/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 22 "data/maps/Route123/scripts.pory"
	compare VAR_TEMP_0, 10
	goto_if_gt Route123_WildSet2Trigger_2
Route123_WildSet2Trigger_1:
# 25 "data/maps/Route123/scripts.pory"
	setvar VAR_ROUTE123_WILD_SET, 1
	return

Route123_WildSet2Trigger_2:
# 23 "data/maps/Route123/scripts.pory"
	fadenewbgm MUS_FALLARBOR
	goto Route123_WildSet2Trigger_1


Route123_WildSet3Trigger::
# 30 "data/maps/Route123/scripts.pory"
	compare VAR_ROUTE123_WILD_SET, 1
	goto_if_eq Route123_WildSet3Trigger_2
Route123_WildSet3Trigger_1:
# 33 "data/maps/Route123/scripts.pory"
	setvar VAR_ROUTE123_WILD_SET, 2
	return

Route123_WildSet3Trigger_2:
# 31 "data/maps/Route123/scripts.pory"
	fadenewbgm MUS_RG_SEVII_ROUTE
	goto Route123_WildSet3Trigger_1


Route123_EventScript_GigaDrainGirl::
# 38 "data/maps/Route123/scripts.pory"
	lock_faceplayer
# 39 "data/maps/Route123/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_GIGA_DRAIN, Route123_EventScript_GigaDrainGirl_2
# 43 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_LoveGrassMonsHaveAny, MSGBOX_DEFAULT
# 44 "data/maps/Route123/scripts.pory"
	special IsGrassTypeInParty
# 45 "data/maps/Route123/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route123_EventScript_GigaDrainGirl_5
Route123_EventScript_GigaDrainGirl_4:
	release_end

Route123_EventScript_GigaDrainGirl_2:
# 40 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CheckTreesWithMyGrassMon, MSGBOX_DEFAULT
	release_end

Route123_EventScript_GigaDrainGirl_5:
# 46 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_YouLikeGrassMonsTooHaveThis, MSGBOX_DEFAULT
	giveitem ITEM_TM_GIGA_DRAIN
# 0 "data/maps/Route123/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route123_EventScript_GigaDrainGirl_8
Route123_EventScript_GigaDrainGirl_7:
# 50 "data/maps/Route123/scripts.pory"
	setflag FLAG_RECEIVED_TM_GIGA_DRAIN
# 51 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CheckTreesWithMyGrassMon, MSGBOX_DEFAULT
	goto Route123_EventScript_GigaDrainGirl_4

Route123_EventScript_GigaDrainGirl_8:
# 48 "data/maps/Route123/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto Route123_EventScript_GigaDrainGirl_7


Route123_EventScript_RouteSign::
# 57 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_RouteSign, MSGBOX_SIGN
	end


Route123_EventScript_RouteSignMtPyre::
# 62 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_RouteSignMtPyre, MSGBOX_SIGN
	end


Route123_EventScript_BerryMastersHouseSign::
# 67 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_BerryMastersHouse, MSGBOX_SIGN
	end


Route123_EventScript_Wendy::
# 72 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_WENDY, Route123_Text_WendyIntro, Route123_Text_WendyDefeat
# 73 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_WendyPostBattle, MSGBOX_AUTOCLOSE
	end


Route123_EventScript_Braxton::
# 78 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_BRAXTON, Route123_Text_BraxtonIntro, Route123_Text_BraxtonDefeat
# 79 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_BraxtonPostBattle, MSGBOX_AUTOCLOSE
	end


Route123_EventScript_Violet::
# 84 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_VIOLET, Route123_Text_VioletIntro, Route123_Text_VioletDefeat
# 85 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_VioletPostBattle, MSGBOX_AUTOCLOSE
	end


Route123_EventScript_Cameron::
# 90 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_CAMERON_1, Route123_Text_CameronIntro, Route123_Text_CameronDefeat, Route123_EventScript_RegisterCameron
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route123/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route123_EventScript_Cameron_2
# 99 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CameronPostBattle, MSGBOX_DEFAULT
	release_end

Route123_EventScript_Cameron_2:
# 92 "data/maps/Route123/scripts.pory"
	trainerbattle_rematch TRAINER_CAMERON_1, Route123_Text_CameronRematchIntro, Route123_Text_CameronRematchDefeat
# 93 "data/maps/Route123/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_MOONBLAST, Route123_EventScript_Cameron_5
Route123_EventScript_Cameron_4:
# 96 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CameronPostRematch, MSGBOX_AUTOCLOSE
	end

Route123_EventScript_Cameron_5:
# 94 "data/maps/Route123/scripts.pory"
	goto Route123_EventScript_Cameron_GiveMoonblast
	goto Route123_EventScript_Cameron_4


Route123_EventScript_RegisterCameron::
# 104 "data/maps/Route123/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 105 "data/maps/Route123/scripts.pory"
	waitmovement 0
# 106 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CameronRegister, MSGBOX_DEFAULT
# 107 "data/maps/Route123/scripts.pory"
	register_matchcall TRAINER_CAMERON_1
# 108 "data/maps/Route123/scripts.pory"
	goto Route123_EventScript_Cameron_GiveMoonblast
	end


Route123_EventScript_Cameron_GiveMoonblast::
# 113 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_TakeThis, MSGBOX_DEFAULT
# 114 "data/maps/Route123/scripts.pory"
	giveitem ITEM_TM_MOONBLAST
# 115 "data/maps/Route123/scripts.pory"
	setflag FLAG_RECEIVED_TM_MOONBLAST
	release_end


Route123_EventScript_Jacki::
# 120 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_JACKI_1, Route123_Text_JackiIntro, Route123_Text_JackiDefeat, Route123_EventScript_RegisterJacki
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route123/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route123_EventScript_Jacki_2
# 126 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JackiPostBattle, MSGBOX_DEFAULT
	release_end

Route123_EventScript_Jacki_2:
# 122 "data/maps/Route123/scripts.pory"
	trainerbattle_rematch TRAINER_JACKI_1, Route123_Text_JackiRematchIntro, Route123_Text_JackiRematchDefeat
# 123 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JackiPostRematch, MSGBOX_AUTOCLOSE
	end


Route123_EventScript_RegisterJacki::
# 131 "data/maps/Route123/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 132 "data/maps/Route123/scripts.pory"
	waitmovement 0
# 133 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JackiRegister, MSGBOX_DEFAULT
# 134 "data/maps/Route123/scripts.pory"
	register_matchcall TRAINER_JACKI_1
	release_end


Route123_EventScript_Miu::
# 139 "data/maps/Route123/scripts.pory"
	trainerbattle_double TRAINER_MIU_AND_YUKI, Route123_Text_MiuIntro, Route123_Text_MiuDefeat, Route123_Text_MiuNotEnoughMons
# 140 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_MiuPostBattle, MSGBOX_AUTOCLOSE
	end


Route123_EventScript_Yuki::
# 145 "data/maps/Route123/scripts.pory"
	trainerbattle_double TRAINER_MIU_AND_YUKI, Route123_Text_YukiIntro, Route123_Text_YukiDefeat, Route123_Text_YukiNotEnoughMons
# 146 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_YukiPostBattle, MSGBOX_AUTOCLOSE
	end


Route123_EventScript_Kindra::
# 151 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_KINDRA, Route123_Text_KindraIntro, Route123_Text_KindraDefeat
# 152 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_KindraPostBattle, MSGBOX_AUTOCLOSE
	end


Route123_EventScript_Frederick::
# 157 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_FREDRICK, Route123_Text_FrederickIntro, Route123_Text_FrederickDefeat
# 158 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_FrederickPostBattle, MSGBOX_AUTOCLOSE
	end


Route123_EventScript_Abraham::
# 163 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_ABRAHAM, Route123_Text_AbrahamIntro, Route123_Text_AbrahamDefeat
# 164 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_AbrahamPostBattle, MSGBOX_AUTOCLOSE
	end


Route123_EventScript_Ed::
# 169 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_ED, Route123_Text_EdIntro, Route123_Text_EdDefeat
# 170 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_EdPostBattle, MSGBOX_AUTOCLOSE
	end


Route123_EventScript_Kayley::
# 175 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_KAYLEY, Route123_Text_KayleyIntro, Route123_Text_KayleyDefeat
# 176 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_KayleyPostBattle, MSGBOX_AUTOCLOSE
	end


Route123_EventScript_Jonas::
# 181 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_JONAS, Route123_Text_JonasIntro, Route123_Text_JonasDefeat
# 182 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JonasPostBattle, MSGBOX_AUTOCLOSE
	end


Route123_EventScript_Jazmyn::
# 187 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_JAZMYN, Route123_Text_JazmynIntro, Route123_Text_JazmynDefeat
# 188 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JazmynPostBattle, MSGBOX_AUTOCLOSE
	end


Route123_EventScript_Davis::
# 193 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_DAVIS, Route123_Text_DavisIntro, Route123_Text_DavisDefeat
# 194 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_DavisPostBattle, MSGBOX_AUTOCLOSE
	end


Route123_EventScript_Fernando::
# 199 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_FERNANDO_1, Route123_Text_FernandoIntro, Route123_Text_FernandoDefeat, Route123_EventScript_RegisterFernando
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route123/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route123_EventScript_Fernando_2
# 205 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_FernandoPostBattle, MSGBOX_DEFAULT
	release_end

Route123_EventScript_Fernando_2:
# 201 "data/maps/Route123/scripts.pory"
	trainerbattle_rematch TRAINER_FERNANDO_1, Route123_Text_FernandoRematchIntro, Route123_Text_FernandoRematchDefeat
# 202 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_FernandoPostRematch, MSGBOX_AUTOCLOSE
	end


Route123_EventScript_RegisterFernando::
# 210 "data/maps/Route123/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 211 "data/maps/Route123/scripts.pory"
	waitmovement 0
# 212 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_FernandoRegister, MSGBOX_DEFAULT
# 213 "data/maps/Route123/scripts.pory"
	register_matchcall TRAINER_FERNANDO_1
	release_end


Route123_Text_LoveGrassMonsHaveAny::
# 217 "data/maps/Route123/scripts.pory"
	.string "I love GRASS-type POKéMON!\p"
	.string "Do you have any GRASS-type POKéMON?$"

Route123_Text_YouLikeGrassMonsTooHaveThis::
# 223 "data/maps/Route123/scripts.pory"
	.string "Oh?\p"
	.string "You like GRASS-type POKéMON, too,\n"
	.string "don't you?\p"
	.string "I'm so happy, you can have this!\n"
	.string "It's a token of our friendship.$"

Route123_Text_CheckTreesWithMyGrassMon::
# 233 "data/maps/Route123/scripts.pory"
	.string "I check trees with my GRASS-type\n"
	.string "POKéMON. I'm like a tree doctor.$"

Route123_Text_RouteSign::
# 238 "data/maps/Route123/scripts.pory"
	.string "{RIGHT_ARROW} ROUTE 123\n"
	.string "{LEFT_ARROW} ROUTE 118$"

Route123_Text_RouteSignMtPyre::
# 243 "data/maps/Route123/scripts.pory"
	.string "{UP_ARROW} MT. PYRE\n"
	.string "“Forbidden to the faint of heart.”$"

Route123_Text_BerryMastersHouse::
# 248 "data/maps/Route123/scripts.pory"
	.string "BERRY MASTER'S HOUSE$"

Route123_Text_TakeThis::
# 252 "data/maps/Route123/scripts.pory"
	.string "You should take this as well.$"
