Route123_MapScripts::
# 2 "data/maps/Route123/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route123_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route123_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route123/scripts.pory"
	special SetRoute123Weather
	end


Route123_EventScript_GigaDrainGirl::
# 9 "data/maps/Route123/scripts.pory"
	lock_faceplayer
# 10 "data/maps/Route123/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_GIGA_DRAIN, Route123_EventScript_GigaDrainGirl_2
# 14 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_LoveGrassMonsHaveAny, MSGBOX_DEFAULT
# 15 "data/maps/Route123/scripts.pory"
	special IsGrassTypeInParty
# 16 "data/maps/Route123/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route123_EventScript_GigaDrainGirl_5
Route123_EventScript_GigaDrainGirl_4:
	release_end

Route123_EventScript_GigaDrainGirl_2:
# 11 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CheckTreesWithMyGrassMon, MSGBOX_DEFAULT
	release_end

Route123_EventScript_GigaDrainGirl_5:
# 17 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_YouLikeGrassMonsTooHaveThis, MSGBOX_DEFAULT
	giveitem ITEM_TM_GIGA_DRAIN
# 0 "data/maps/Route123/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route123_EventScript_GigaDrainGirl_8
Route123_EventScript_GigaDrainGirl_7:
# 21 "data/maps/Route123/scripts.pory"
	setflag FLAG_RECEIVED_TM_GIGA_DRAIN
# 22 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CheckTreesWithMyGrassMon, MSGBOX_DEFAULT
	goto Route123_EventScript_GigaDrainGirl_4

Route123_EventScript_GigaDrainGirl_8:
# 19 "data/maps/Route123/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto Route123_EventScript_GigaDrainGirl_7


Route123_EventScript_RouteSign::
# 28 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_RouteSign, MSGBOX_SIGN
	end


Route123_EventScript_RouteSignMtPyre::
# 33 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_RouteSignMtPyre, MSGBOX_SIGN
	end


Route123_EventScript_BerryMastersHouseSign::
# 38 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_BerryMastersHouse, MSGBOX_SIGN
	end


Route123_EventScript_Wendy::
# 43 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_WENDY, Route123_Text_WendyIntro, Route123_Text_WendyDefeat
# 44 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_WendyPostBattle, MSGBOX_AUTOCLOSE
	end


Route123_EventScript_Braxton::
# 49 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_BRAXTON, Route123_Text_BraxtonIntro, Route123_Text_BraxtonDefeat
# 50 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_BraxtonPostBattle, MSGBOX_AUTOCLOSE
	end


Route123_EventScript_Violet::
# 55 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_VIOLET, Route123_Text_VioletIntro, Route123_Text_VioletDefeat
# 56 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_VioletPostBattle, MSGBOX_AUTOCLOSE
	end


Route123_EventScript_Cameron::
# 61 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_CAMERON_1, Route123_Text_CameronIntro, Route123_Text_CameronDefeat, Route123_EventScript_RegisterCameron
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route123/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route123_EventScript_Cameron_2
# 67 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CameronPostBattle, MSGBOX_DEFAULT
	release_end

Route123_EventScript_Cameron_2:
# 63 "data/maps/Route123/scripts.pory"
	trainerbattle_rematch TRAINER_CAMERON_1, Route123_Text_CameronRematchIntro, Route123_Text_CameronRematchDefeat
# 64 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CameronPostRematch, MSGBOX_AUTOCLOSE
	end


Route123_EventScript_RegisterCameron::
# 72 "data/maps/Route123/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 73 "data/maps/Route123/scripts.pory"
	waitmovement 0
# 74 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CameronRegister, MSGBOX_DEFAULT
# 75 "data/maps/Route123/scripts.pory"
	register_matchcall TRAINER_CAMERON_1
	release_end


Route123_EventScript_Jacki::
# 80 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_JACKI_1, Route123_Text_JackiIntro, Route123_Text_JackiDefeat, Route123_EventScript_RegisterJacki
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route123/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route123_EventScript_Jacki_2
# 86 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JackiPostBattle, MSGBOX_DEFAULT
	release_end

Route123_EventScript_Jacki_2:
# 82 "data/maps/Route123/scripts.pory"
	trainerbattle_rematch TRAINER_JACKI_1, Route123_Text_JackiRematchIntro, Route123_Text_JackiRematchDefeat
# 83 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JackiPostRematch, MSGBOX_AUTOCLOSE
	end


Route123_EventScript_RegisterJacki::
# 91 "data/maps/Route123/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 92 "data/maps/Route123/scripts.pory"
	waitmovement 0
# 93 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JackiRegister, MSGBOX_DEFAULT
# 94 "data/maps/Route123/scripts.pory"
	register_matchcall TRAINER_JACKI_1
	release_end


Route123_EventScript_Miu::
# 99 "data/maps/Route123/scripts.pory"
	trainerbattle_double TRAINER_MIU_AND_YUKI, Route123_Text_MiuIntro, Route123_Text_MiuDefeat, Route123_Text_MiuNotEnoughMons
# 100 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_MiuPostBattle, MSGBOX_AUTOCLOSE
	end


Route123_EventScript_Yuki::
# 105 "data/maps/Route123/scripts.pory"
	trainerbattle_double TRAINER_MIU_AND_YUKI, Route123_Text_YukiIntro, Route123_Text_YukiDefeat, Route123_Text_YukiNotEnoughMons
# 106 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_YukiPostBattle, MSGBOX_AUTOCLOSE
	end


Route123_EventScript_Kindra::
# 111 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_KINDRA, Route123_Text_KindraIntro, Route123_Text_KindraDefeat
# 112 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_KindraPostBattle, MSGBOX_AUTOCLOSE
	end


Route123_EventScript_Frederick::
# 117 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_FREDRICK, Route123_Text_FrederickIntro, Route123_Text_FrederickDefeat
# 118 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_FrederickPostBattle, MSGBOX_AUTOCLOSE
	end


Route123_EventScript_Alberto::
# 123 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_ALBERTO, Route123_Text_AlbertoIntro, Route123_Text_AlbertoDefeat
# 124 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_AlbertoPostBattle, MSGBOX_AUTOCLOSE
	end


Route123_EventScript_Ed::
# 129 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_ED, Route123_Text_EdIntro, Route123_Text_EdDefeat
# 130 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_EdPostBattle, MSGBOX_AUTOCLOSE
	end


Route123_EventScript_Kayley::
# 135 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_KAYLEY, Route123_Text_KayleyIntro, Route123_Text_KayleyDefeat
# 136 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_KayleyPostBattle, MSGBOX_AUTOCLOSE
	end


Route123_EventScript_Jonas::
# 141 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_JONAS, Route123_Text_JonasIntro, Route123_Text_JonasDefeat
# 142 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JonasPostBattle, MSGBOX_AUTOCLOSE
	end


Route123_EventScript_Jazmyn::
# 147 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_JAZMYN, Route123_Text_JazmynIntro, Route123_Text_JazmynDefeat
# 148 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JazmynPostBattle, MSGBOX_AUTOCLOSE
	end


Route123_EventScript_Davis::
# 153 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_DAVIS, Route123_Text_DavisIntro, Route123_Text_DavisDefeat
# 154 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_DavisPostBattle, MSGBOX_AUTOCLOSE
	end


Route123_EventScript_Fernando::
# 159 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_FERNANDO_1, Route123_Text_FernandoIntro, Route123_Text_FernandoDefeat, Route123_EventScript_RegisterFernando
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route123/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route123_EventScript_Fernando_2
# 165 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_FernandoPostBattle, MSGBOX_DEFAULT
	release_end

Route123_EventScript_Fernando_2:
# 161 "data/maps/Route123/scripts.pory"
	trainerbattle_rematch TRAINER_FERNANDO_1, Route123_Text_FernandoRematchIntro, Route123_Text_FernandoRematchDefeat
# 162 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_FernandoPostRematch, MSGBOX_AUTOCLOSE
	end


Route123_EventScript_RegisterFernando::
# 170 "data/maps/Route123/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 171 "data/maps/Route123/scripts.pory"
	waitmovement 0
# 172 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_FernandoRegister, MSGBOX_DEFAULT
# 173 "data/maps/Route123/scripts.pory"
	register_matchcall TRAINER_FERNANDO_1
	release_end


Route123_Text_LoveGrassMonsHaveAny::
# 177 "data/maps/Route123/scripts.pory"
	.string "I love GRASS-type POKéMON!\p"
	.string "Do you have any GRASS-type POKéMON?$"

Route123_Text_YouLikeGrassMonsTooHaveThis::
# 183 "data/maps/Route123/scripts.pory"
	.string "Oh?\p"
	.string "You like GRASS-type POKéMON, too,\n"
	.string "don't you?\p"
	.string "I'm so happy, you can have this!\n"
	.string "It's a token of our friendship.$"

Route123_Text_CheckTreesWithMyGrassMon::
# 193 "data/maps/Route123/scripts.pory"
	.string "I check trees with my GRASS-type\n"
	.string "POKéMON. I'm like a tree doctor.$"

Route123_Text_RouteSign::
# 198 "data/maps/Route123/scripts.pory"
	.string "{RIGHT_ARROW} ROUTE 123\n"
	.string "{LEFT_ARROW} ROUTE 118$"

Route123_Text_RouteSignMtPyre::
# 203 "data/maps/Route123/scripts.pory"
	.string "{UP_ARROW} MT. PYRE\n"
	.string "“Forbidden to the faint of heart.”$"

Route123_Text_BerryMastersHouse::
# 208 "data/maps/Route123/scripts.pory"
	.string "BERRY MASTER'S HOUSE$"
