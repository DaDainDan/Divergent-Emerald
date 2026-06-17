Route104_MapScripts::
# 9 "data/maps/Route104/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route104_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 2 "data/maps/Route104/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route104_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route104_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 10 "data/maps/Route104/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 11 "data/maps/Route104/scripts.pory"
	compare VAR_BOARD_BRINEY_BOAT_STATE, 1
	goto_if_lt Route104_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
Route104_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 14 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_MET_PRETTY_PETAL_SHOP_OWNER, Route104_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
# 14 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, Route104_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
# 17 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
Route104_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
	end

Route104_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 12 "data/maps/Route104/scripts.pory"
	setobjectxyperm LOCALID_ROUTE104_RIVAL, 17, 52
	goto Route104_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route104_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 11 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_REGISTER_RIVAL_POKENAV, Route104_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	goto Route104_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route104_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 11 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_MET_RIVAL_RUSTBORO, Route104_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
	goto Route104_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route104_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 15 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
	goto Route104_MapScripts_MAP_SCRIPT_ON_TRANSITION_8

Route104_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/Route104/scripts.pory"
	map_script_2 VAR_BOARD_BRINEY_BOAT_STATE, 1, Route104_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

Route104_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 4 "data/maps/Route104/scripts.pory"
	lockall
# 5 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_SailToDewford
	end


Route104_EventScript_Rival::
# 24 "data/maps/Route104/scripts.pory"
	lockall
# 25 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8008, 1
# 26 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Common_Movement_FacePlayer
# 27 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 28 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_RivalEncounter
	return


Route104_EventScript_RivalTrigger::
# 32 "data/maps/Route104/scripts.pory"
	lockall
# 33 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 34 "data/maps/Route104/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 35 "data/maps/Route104/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 36 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
# 37 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 38 "data/maps/Route104/scripts.pory"
	delay 10
# 39 "data/maps/Route104/scripts.pory"
	addobject LOCALID_ROUTE104_RIVAL
# 40 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_RIVAL
# 41 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_EventScript_RivalTrigger_Movement_0
# 42 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 43 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Common_Movement_WalkDown
# 44 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 45 "data/maps/Route104/scripts.pory"
	delay 20
# 46 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8008, 0
# 47 "data/maps/Route104/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 48 "data/maps/Route104/scripts.pory"
	playse SE_PIN
# 49 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Common_Movement_ExclamationMark
# 50 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 51 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Common_Movement_Delay48
# 52 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 53 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_RivalEncounter
	return


Route104_EventScript_PlayRivalMusic::
	checkplayergender
# 0 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route104_EventScript_PlayRivalMusic_2
# 61 "data/maps/Route104/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
Route104_EventScript_PlayRivalMusic_1:
	return

Route104_EventScript_PlayRivalMusic_2:
# 59 "data/maps/Route104/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
	goto Route104_EventScript_PlayRivalMusic_1


Route104_EventScript_RivalEncounter::
	checkplayergender
# 0 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route104_EventScript_RivalEncounter_2
# 70 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BrendanEncounter
Route104_EventScript_RivalEncounter_1:
	end

Route104_EventScript_RivalEncounter_2:
# 68 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_MayEncounter
	goto Route104_EventScript_RivalEncounter_1


Route104_EventScript_MayEncounter::
# 76 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE_104, Route104_EventScript_MayEncounter_2
Route104_EventScript_MayEncounter_1:
# 79 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_MayEncounter_5
# 88 "data/maps/Route104/scripts.pory"
	setflag FLAG_REGISTER_RIVAL_POKENAV
# 89 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayWeShouldRegister, MSGBOX_DEFAULT
# 90 "data/maps/Route104/scripts.pory"
	closemessage
# 91 "data/maps/Route104/scripts.pory"
	delay 30
# 92 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 93 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredMay, MSGBOX_DEFAULT
# 94 "data/maps/Route104/scripts.pory"
	waitfanfare
# 95 "data/maps/Route104/scripts.pory"
	closemessage
# 96 "data/maps/Route104/scripts.pory"
	delay 30
# 97 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 98 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_EventScript_MayEncounter_Movement_0
# 99 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Common_Movement_CreepLeft
# 100 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayHowsYourPokedex, MSGBOX_DEFAULT
# 101 "data/maps/Route104/scripts.pory"
	closemessage
# 102 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 103 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Route104_EventScript_MayEncounter_Movement_1
# 104 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 105 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_ROUTE104_RIVAL
# 106 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayMinesDecentLetsBattle, MSGBOX_YESNO
# 107 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route104_EventScript_MayEncounter_8
Route104_EventScript_MayEncounter_7:
# 110 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayHaventRaisedPokemon, MSGBOX_DEFAULT
# 111 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_RestoreMusic
# 112 "data/maps/Route104/scripts.pory"
	releaseall
	end

Route104_EventScript_MayEncounter_2:
# 77 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_MayDefeated
	goto Route104_EventScript_MayEncounter_1

Route104_EventScript_MayEncounter_5:
# 80 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayLetsBattle, MSGBOX_YESNO
# 81 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route104_EventScript_MayEncounter_11
Route104_EventScript_MayEncounter_10:
# 84 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayHaventRaisedPokemon, MSGBOX_DEFAULT
# 85 "data/maps/Route104/scripts.pory"
	releaseall
	end

Route104_EventScript_MayEncounter_8:
# 108 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BattleMay
	goto Route104_EventScript_MayEncounter_7

Route104_EventScript_MayEncounter_11:
# 82 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BattleMay
	goto Route104_EventScript_MayEncounter_10


Route104_EventScript_BattleMay::
# 117 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayIntro, MSGBOX_DEFAULT
# 118 "data/maps/Route104/scripts.pory"
	switch VAR_STARTER_MON
# 119 "data/maps/Route104/scripts.pory"
	case PC_CHOSE_TREECKO, Route104_EventScript_BattleMay_3
# 120 "data/maps/Route104/scripts.pory"
	case PC_CHOSE_TORCHIC, Route104_EventScript_BattleMay_4
# 121 "data/maps/Route104/scripts.pory"
	case PC_CHOSE_MUDKIP, Route104_EventScript_BattleMay_5
Route104_EventScript_BattleMay_1:
# 123 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 124 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_MayDefeated
	end

Route104_EventScript_BattleMay_3:
# 119 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, Route104_Text_MayDefeat
	goto Route104_EventScript_BattleMay_1

Route104_EventScript_BattleMay_4:
# 120 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_MUDKIP, Route104_Text_MayDefeat
	goto Route104_EventScript_BattleMay_1

Route104_EventScript_BattleMay_5:
# 121 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, Route104_Text_MayDefeat
	goto Route104_EventScript_BattleMay_1


Route104_EventScript_MayDefeated::
# 129 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayPostBattle, MSGBOX_DEFAULT
# 130 "data/maps/Route104/scripts.pory"
	compare VAR_0x8008, 0
	goto_if_eq Route104_EventScript_MayDefeated_2
Route104_EventScript_MayDefeated_1:
# 133 "data/maps/Route104/scripts.pory"
	releaseall
	end

Route104_EventScript_MayDefeated_2:
# 131 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_RestoreMusic
	goto Route104_EventScript_MayDefeated_1


Route104_EventScript_RestoreMusic::
# 138 "data/maps/Route104/scripts.pory"
	savebgm MUS_DUMMY
# 139 "data/maps/Route104/scripts.pory"
	fadedefaultbgm
	return


Route104_EventScript_BrendanEncounter::
# 144 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE_104, Route104_EventScript_BrendanEncounter_2
Route104_EventScript_BrendanEncounter_1:
# 147 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_BrendanEncounter_5
# 156 "data/maps/Route104/scripts.pory"
	setflag FLAG_REGISTER_RIVAL_POKENAV
# 157 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanWeShouldRegister, MSGBOX_DEFAULT
# 158 "data/maps/Route104/scripts.pory"
	closemessage
# 159 "data/maps/Route104/scripts.pory"
	delay 30
# 160 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 161 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredBrendan, MSGBOX_DEFAULT
# 162 "data/maps/Route104/scripts.pory"
	waitfanfare
# 163 "data/maps/Route104/scripts.pory"
	closemessage
# 164 "data/maps/Route104/scripts.pory"
	delay 30
# 165 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 166 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_EventScript_MayEncounter_Movement_0
# 167 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Common_Movement_CreepLeft
# 168 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanHowsYourPokedex, MSGBOX_DEFAULT
# 169 "data/maps/Route104/scripts.pory"
	closemessage
# 170 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 171 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Route104_EventScript_MayEncounter_Movement_1
# 172 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 173 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_ROUTE104_RIVAL
# 174 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanDoingGreatLetsBattle, MSGBOX_YESNO
# 175 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route104_EventScript_BrendanEncounter_8
Route104_EventScript_BrendanEncounter_7:
# 178 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanNoConfidence, MSGBOX_DEFAULT
# 179 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_RestoreMusic
# 180 "data/maps/Route104/scripts.pory"
	releaseall
	end

Route104_EventScript_BrendanEncounter_2:
# 145 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
	goto Route104_EventScript_BrendanEncounter_1

Route104_EventScript_BrendanEncounter_5:
# 148 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanLetsBattle, MSGBOX_YESNO
# 149 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route104_EventScript_BrendanEncounter_11
Route104_EventScript_BrendanEncounter_10:
# 152 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanNoConfidence, MSGBOX_DEFAULT
# 153 "data/maps/Route104/scripts.pory"
	releaseall
	end

Route104_EventScript_BrendanEncounter_8:
# 176 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BattleBrendan
	goto Route104_EventScript_BrendanEncounter_7

Route104_EventScript_BrendanEncounter_11:
# 150 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BattleBrendan
	goto Route104_EventScript_BrendanEncounter_10


Route104_EventScript_BattleBrendan::
# 185 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanIntro, MSGBOX_DEFAULT
# 186 "data/maps/Route104/scripts.pory"
	switch VAR_STARTER_MON
# 187 "data/maps/Route104/scripts.pory"
	case PC_CHOSE_TREECKO, Route104_EventScript_BattleBrendan_3
# 188 "data/maps/Route104/scripts.pory"
	case PC_CHOSE_TORCHIC, Route104_EventScript_BattleBrendan_4
# 189 "data/maps/Route104/scripts.pory"
	case PC_CHOSE_MUDKIP, Route104_EventScript_BattleBrendan_5
Route104_EventScript_BattleBrendan_1:
# 191 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 192 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
	end

Route104_EventScript_BattleBrendan_3:
# 187 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TORCHIC, Route104_Text_BrendanDefeat
	goto Route104_EventScript_BattleBrendan_1

Route104_EventScript_BattleBrendan_4:
# 188 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_MUDKIP, Route104_Text_BrendanDefeat
	goto Route104_EventScript_BattleBrendan_1

Route104_EventScript_BattleBrendan_5:
# 189 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TREECKO, Route104_Text_BrendanDefeat
	goto Route104_EventScript_BattleBrendan_1


Route104_EventScript_BrendanDefeated::
# 197 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanPostBattle, MSGBOX_DEFAULT
# 198 "data/maps/Route104/scripts.pory"
	compare VAR_0x8008, 0
	goto_if_eq Route104_EventScript_BrendanDefeated_2
Route104_EventScript_BrendanDefeated_1:
# 201 "data/maps/Route104/scripts.pory"
	releaseall
	end

Route104_EventScript_BrendanDefeated_2:
# 199 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_RestoreMusic
	goto Route104_EventScript_BrendanDefeated_1


Route104_EventScript_ExpertF::
# 206 "data/maps/Route104/scripts.pory"
	lock_faceplayer
# 207 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104, Route104_EventScript_ExpertF_2
# 211 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_PlantBerriesInSoilTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_CHESTO_BERRY
# 0 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route104_EventScript_ExpertF_5
Route104_EventScript_ExpertF_4:
# 215 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104
# 216 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
	release_end

Route104_EventScript_ExpertF_2:
# 208 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
	release_end

Route104_EventScript_ExpertF_5:
# 213 "data/maps/Route104/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto Route104_EventScript_ExpertF_4


Route104_EventScript_WhiteHerbFlorist::
# 221 "data/maps/Route104/scripts.pory"
	lock_faceplayer
# 222 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_WHITE_HERB, Route104_EventScript_WhiteHerbFlorist_2
# 226 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_DontNeedThisTakeIt, MSGBOX_DEFAULT
	giveitem ITEM_WHITE_HERB
# 0 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route104_EventScript_WhiteHerbFlorist_5
Route104_EventScript_WhiteHerbFlorist_4:
# 230 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_WHITE_HERB
	release_end

Route104_EventScript_WhiteHerbFlorist_2:
# 223 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_FlowerShopSellingSaplings, MSGBOX_DEFAULT
	release_end

Route104_EventScript_WhiteHerbFlorist_5:
# 228 "data/maps/Route104/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto Route104_EventScript_WhiteHerbFlorist_4


Route104_EventScript_Girl1::
# 235 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrineyLivesInSeasideCottage, MSGBOX_NPC
	end


Route104_EventScript_BugCatcher::
# 240 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WhatsItLikeAtBottomOfSea, MSGBOX_SIGN
	end


Route104_EventScript_BrineysCottageSign::
# 245 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MrBrineysCottage, MSGBOX_SIGN
	end


Route104_EventScript_RouteSignPetalburg::
# 250 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RouteSignPetalburg, MSGBOX_SIGN
	end


Route104_EventScript_RouteSignRustboro::
# 255 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RouteSignRustboro, MSGBOX_SIGN
	end


Route104_EventScript_FlowerShopSign::
# 260 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_PrettyPetalFlowShop, MSGBOX_SIGN
	end


Route104_EventScript_TrainerTipsDoubleBattles::
# 265 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainerTipsDoubleBattles, MSGBOX_SIGN
	end


Route104_EventScript_Boy1::
# 270 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_ThrowBallAtWeakenedPokemon, MSGBOX_NPC
	end


Route104_EventScript_Woman::
# 275 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_OnlyThrowBallAtWildPokemon, MSGBOX_NPC
	end


Route104_EventScript_Boy2::
# 280 "data/maps/Route104/scripts.pory"
	lock_faceplayer
# 281 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_BULLET_SEED, Route104_EventScript_Boy2_2
# 285 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_LikeFillingMouthWithSeedsTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_TM_BULLET_SEED
# 0 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route104_EventScript_Boy2_5
Route104_EventScript_Boy2_4:
# 289 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULLET_SEED
	release_end

Route104_EventScript_Boy2_2:
# 282 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TMsAreOneTimeUse, MSGBOX_DEFAULT
	release_end

Route104_EventScript_Boy2_5:
# 287 "data/maps/Route104/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto Route104_EventScript_Boy2_4


Route104_EventScript_Girl2::
# 294 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_ImNotATrainer, MSGBOX_NPC
	end


Route104_EventScript_SailToDewford::
# 299 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_ROUTE104_BRINEY, MAP_ROUTE104, 0
# 300 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_ROUTE104, 0
# 301 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_BRINEY, Route104_EventScript_SailToDewford_Movement_0
# 302 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 303 "data/maps/Route104/scripts.pory"
	removeobject LOCALID_ROUTE104_BRINEY
# 304 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_EventScript_SailToDewford_Movement_1
# 305 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 306 "data/maps/Route104/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_ROUTE104
# 307 "data/maps/Route104/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 308 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_ENABLE_NORMAN_MATCH_CALL, Route104_EventScript_SailToDewford_2
Route104_EventScript_SailToDewford_1:
# 311 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_BOAT, Route104_Movement_SailToDewford
# 312 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_Movement_SailToDewford
# 313 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 314 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_ArriveInDewford
	end

Route104_EventScript_SailToDewford_2:
# 309 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_SailToDewfordDadCalls
	goto Route104_EventScript_SailToDewford_1


Route104_EventScript_SailToDewfordDadCalls::
# 319 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_BOAT, Route104_Movement_SailToDewfordBeforeDadCalls
# 320 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_Movement_SailToDewfordBeforeDadCalls
# 321 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 322 "data/maps/Route104/scripts.pory"
	pokenavcall Route104_Text_DadPokenavCall
# 323 "data/maps/Route104/scripts.pory"
	waitmessage
# 324 "data/maps/Route104/scripts.pory"
	delay 30
# 325 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 326 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredDadInPokenav, MSGBOX_DEFAULT
# 327 "data/maps/Route104/scripts.pory"
	waitfanfare
# 328 "data/maps/Route104/scripts.pory"
	closemessage
# 329 "data/maps/Route104/scripts.pory"
	delay 30
# 330 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_NORMAN_MATCH_CALL
# 331 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_Movement_SailToDewfordAfterDadCalls
# 332 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_BOAT, Route104_Movement_SailToDewfordAfterDadCalls, MAP_ROUTE104
# 333 "data/maps/Route104/scripts.pory"
	waitmovement LOCALID_ROUTE104_BOAT, MAP_ROUTE104
# 334 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 335 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_ArriveInDewford
	return


Route104_EventScript_ArriveInDewford::
# 339 "data/maps/Route104/scripts.pory"
	delay 50
# 340 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 341 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 342 "data/maps/Route104/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 343 "data/maps/Route104/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_DEWFORD_TOWN
# 344 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_EventScript_ArriveInDewford_Movement_0
# 345 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 346 "data/maps/Route104/scripts.pory"
	setobjectxyperm LOCALID_DEWFORD_BRINEY, 12, 8
# 347 "data/maps/Route104/scripts.pory"
	addobject LOCALID_DEWFORD_BRINEY
# 348 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_DEWFORD_BRINEY, MAP_DEWFORD_TOWN, 0
# 349 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
# 350 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_DEWFORD_BRINEY, Route104_EventScript_ArriveInDewford_Movement_1
# 351 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 352 "data/maps/Route104/scripts.pory"
	addobject LOCALID_DEWFORD_BOAT
# 353 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 354 "data/maps/Route104/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 355 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
# 356 "data/maps/Route104/scripts.pory"
	hideobjectat LOCALID_ROUTE104_BOAT, MAP_ROUTE104
# 357 "data/maps/Route104/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 358 "data/maps/Route104/scripts.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_ROUTE104
# 359 "data/maps/Route104/scripts.pory"
	resetobjectsubpriority LOCALID_DEWFORD_BRINEY, MAP_DEWFORD_TOWN
# 360 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_DEWFORD_BRINEY
# 361 "data/maps/Route104/scripts.pory"
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 0
# 362 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_DELIVERED_STEVEN_LETTER, Route104_EventScript_ArriveInDewford_2
# 365 "data/maps/Route104/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInDewford, MSGBOX_DEFAULT
Route104_EventScript_ArriveInDewford_1:
# 367 "data/maps/Route104/scripts.pory"
	releaseall
	end

Route104_EventScript_ArriveInDewford_2:
# 363 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_LandedInDewfordDeliverLetter, MSGBOX_DEFAULT
	goto Route104_EventScript_ArriveInDewford_1


# 371 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewfordBeforeDadCalls:
# 373 "data/maps/Route104/scripts.pory"
	walk_down
# 373 "data/maps/Route104/scripts.pory"
	walk_down
# 373 "data/maps/Route104/scripts.pory"
	walk_down
# 373 "data/maps/Route104/scripts.pory"
	walk_down
# 374 "data/maps/Route104/scripts.pory"
	run_down
# 374 "data/maps/Route104/scripts.pory"
	run_down
# 374 "data/maps/Route104/scripts.pory"
	run_down
# 374 "data/maps/Route104/scripts.pory"
	run_down
# 375 "data/maps/Route104/scripts.pory"
	sprint_down
# 375 "data/maps/Route104/scripts.pory"
	sprint_down
# 375 "data/maps/Route104/scripts.pory"
	sprint_down
# 375 "data/maps/Route104/scripts.pory"
	sprint_down
# 375 "data/maps/Route104/scripts.pory"
	sprint_down
# 375 "data/maps/Route104/scripts.pory"
	sprint_down
# 375 "data/maps/Route104/scripts.pory"
	sprint_down
# 375 "data/maps/Route104/scripts.pory"
	sprint_down
# 375 "data/maps/Route104/scripts.pory"
	sprint_down
# 375 "data/maps/Route104/scripts.pory"
	sprint_down
# 375 "data/maps/Route104/scripts.pory"
	sprint_down
# 375 "data/maps/Route104/scripts.pory"
	sprint_down
# 376 "data/maps/Route104/scripts.pory"
	run_down
# 376 "data/maps/Route104/scripts.pory"
	run_down
# 376 "data/maps/Route104/scripts.pory"
	run_down
# 376 "data/maps/Route104/scripts.pory"
	run_down
# 377 "data/maps/Route104/scripts.pory"
	run_right
# 377 "data/maps/Route104/scripts.pory"
	run_right
# 378 "data/maps/Route104/scripts.pory"
	sprint_right
# 378 "data/maps/Route104/scripts.pory"
	sprint_right
# 378 "data/maps/Route104/scripts.pory"
	sprint_right
# 378 "data/maps/Route104/scripts.pory"
	sprint_right
# 378 "data/maps/Route104/scripts.pory"
	sprint_right
# 378 "data/maps/Route104/scripts.pory"
	sprint_right
# 379 "data/maps/Route104/scripts.pory"
	run_right
# 379 "data/maps/Route104/scripts.pory"
	run_right
# 380 "data/maps/Route104/scripts.pory"
	run_down
# 380 "data/maps/Route104/scripts.pory"
	run_down
# 380 "data/maps/Route104/scripts.pory"
	run_down
# 380 "data/maps/Route104/scripts.pory"
	run_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
# 381 "data/maps/Route104/scripts.pory"
	sprint_down
	step_end

# 384 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewfordAfterDadCalls:
# 386 "data/maps/Route104/scripts.pory"
	sprint_down
# 386 "data/maps/Route104/scripts.pory"
	sprint_down
# 386 "data/maps/Route104/scripts.pory"
	sprint_down
# 386 "data/maps/Route104/scripts.pory"
	sprint_down
# 386 "data/maps/Route104/scripts.pory"
	sprint_down
# 386 "data/maps/Route104/scripts.pory"
	sprint_down
# 386 "data/maps/Route104/scripts.pory"
	sprint_down
# 386 "data/maps/Route104/scripts.pory"
	sprint_down
# 386 "data/maps/Route104/scripts.pory"
	sprint_down
# 386 "data/maps/Route104/scripts.pory"
	sprint_down
# 386 "data/maps/Route104/scripts.pory"
	sprint_down
# 386 "data/maps/Route104/scripts.pory"
	sprint_down
# 386 "data/maps/Route104/scripts.pory"
	sprint_down
# 386 "data/maps/Route104/scripts.pory"
	sprint_down
# 386 "data/maps/Route104/scripts.pory"
	sprint_down
# 386 "data/maps/Route104/scripts.pory"
	sprint_down
# 386 "data/maps/Route104/scripts.pory"
	sprint_down
# 386 "data/maps/Route104/scripts.pory"
	sprint_down
# 386 "data/maps/Route104/scripts.pory"
	sprint_down
# 386 "data/maps/Route104/scripts.pory"
	sprint_down
# 386 "data/maps/Route104/scripts.pory"
	sprint_down
# 386 "data/maps/Route104/scripts.pory"
	sprint_down
# 386 "data/maps/Route104/scripts.pory"
	sprint_down
# 386 "data/maps/Route104/scripts.pory"
	sprint_down
# 387 "data/maps/Route104/scripts.pory"
	run_down
# 387 "data/maps/Route104/scripts.pory"
	run_down
# 387 "data/maps/Route104/scripts.pory"
	run_down
# 387 "data/maps/Route104/scripts.pory"
	run_down
# 388 "data/maps/Route104/scripts.pory"
	run_right
# 388 "data/maps/Route104/scripts.pory"
	run_right
# 388 "data/maps/Route104/scripts.pory"
	run_right
# 388 "data/maps/Route104/scripts.pory"
	run_right
# 389 "data/maps/Route104/scripts.pory"
	sprint_right
# 389 "data/maps/Route104/scripts.pory"
	sprint_right
# 389 "data/maps/Route104/scripts.pory"
	sprint_right
# 389 "data/maps/Route104/scripts.pory"
	sprint_right
# 389 "data/maps/Route104/scripts.pory"
	sprint_right
# 389 "data/maps/Route104/scripts.pory"
	sprint_right
# 389 "data/maps/Route104/scripts.pory"
	sprint_right
# 389 "data/maps/Route104/scripts.pory"
	sprint_right
# 389 "data/maps/Route104/scripts.pory"
	sprint_right
# 389 "data/maps/Route104/scripts.pory"
	sprint_right
# 389 "data/maps/Route104/scripts.pory"
	sprint_right
# 389 "data/maps/Route104/scripts.pory"
	sprint_right
# 389 "data/maps/Route104/scripts.pory"
	sprint_right
# 389 "data/maps/Route104/scripts.pory"
	sprint_right
# 389 "data/maps/Route104/scripts.pory"
	sprint_right
# 389 "data/maps/Route104/scripts.pory"
	sprint_right
# 389 "data/maps/Route104/scripts.pory"
	sprint_right
# 389 "data/maps/Route104/scripts.pory"
	sprint_right
# 389 "data/maps/Route104/scripts.pory"
	sprint_right
# 389 "data/maps/Route104/scripts.pory"
	sprint_right
# 389 "data/maps/Route104/scripts.pory"
	sprint_right
# 389 "data/maps/Route104/scripts.pory"
	sprint_right
# 389 "data/maps/Route104/scripts.pory"
	sprint_right
# 389 "data/maps/Route104/scripts.pory"
	sprint_right
# 389 "data/maps/Route104/scripts.pory"
	sprint_right
# 389 "data/maps/Route104/scripts.pory"
	sprint_right
# 389 "data/maps/Route104/scripts.pory"
	sprint_right
# 389 "data/maps/Route104/scripts.pory"
	sprint_right
# 389 "data/maps/Route104/scripts.pory"
	sprint_right
# 389 "data/maps/Route104/scripts.pory"
	sprint_right
# 389 "data/maps/Route104/scripts.pory"
	sprint_right
# 389 "data/maps/Route104/scripts.pory"
	sprint_right
# 389 "data/maps/Route104/scripts.pory"
	sprint_right
# 389 "data/maps/Route104/scripts.pory"
	sprint_right
# 389 "data/maps/Route104/scripts.pory"
	sprint_right
# 389 "data/maps/Route104/scripts.pory"
	sprint_right
# 389 "data/maps/Route104/scripts.pory"
	sprint_right
# 389 "data/maps/Route104/scripts.pory"
	sprint_right
# 389 "data/maps/Route104/scripts.pory"
	sprint_right
# 389 "data/maps/Route104/scripts.pory"
	sprint_right
# 390 "data/maps/Route104/scripts.pory"
	run_right
# 390 "data/maps/Route104/scripts.pory"
	run_right
# 390 "data/maps/Route104/scripts.pory"
	run_right
# 390 "data/maps/Route104/scripts.pory"
	run_right
# 391 "data/maps/Route104/scripts.pory"
	walk_right
# 391 "data/maps/Route104/scripts.pory"
	walk_right
# 392 "data/maps/Route104/scripts.pory"
	walk_down
# 392 "data/maps/Route104/scripts.pory"
	walk_down
# 393 "data/maps/Route104/scripts.pory"
	run_down
# 393 "data/maps/Route104/scripts.pory"
	run_down
# 393 "data/maps/Route104/scripts.pory"
	run_down
# 393 "data/maps/Route104/scripts.pory"
	run_down
# 393 "data/maps/Route104/scripts.pory"
	run_down
# 393 "data/maps/Route104/scripts.pory"
	run_down
# 393 "data/maps/Route104/scripts.pory"
	run_down
# 393 "data/maps/Route104/scripts.pory"
	run_down
# 393 "data/maps/Route104/scripts.pory"
	run_down
# 393 "data/maps/Route104/scripts.pory"
	run_down
# 393 "data/maps/Route104/scripts.pory"
	run_down
# 393 "data/maps/Route104/scripts.pory"
	run_down
# 393 "data/maps/Route104/scripts.pory"
	run_down
# 393 "data/maps/Route104/scripts.pory"
	run_down
# 393 "data/maps/Route104/scripts.pory"
	run_down
# 394 "data/maps/Route104/scripts.pory"
	walk_down
# 394 "data/maps/Route104/scripts.pory"
	walk_down
	step_end

# 397 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewford:
# 398 "data/maps/Route104/scripts.pory"
	walk_down
# 398 "data/maps/Route104/scripts.pory"
	walk_down
# 398 "data/maps/Route104/scripts.pory"
	walk_down
# 398 "data/maps/Route104/scripts.pory"
	walk_down
# 399 "data/maps/Route104/scripts.pory"
	run_down
# 399 "data/maps/Route104/scripts.pory"
	run_down
# 399 "data/maps/Route104/scripts.pory"
	run_down
# 399 "data/maps/Route104/scripts.pory"
	run_down
# 400 "data/maps/Route104/scripts.pory"
	sprint_down
# 400 "data/maps/Route104/scripts.pory"
	sprint_down
# 400 "data/maps/Route104/scripts.pory"
	sprint_down
# 400 "data/maps/Route104/scripts.pory"
	sprint_down
# 400 "data/maps/Route104/scripts.pory"
	sprint_down
# 400 "data/maps/Route104/scripts.pory"
	sprint_down
# 400 "data/maps/Route104/scripts.pory"
	sprint_down
# 400 "data/maps/Route104/scripts.pory"
	sprint_down
# 400 "data/maps/Route104/scripts.pory"
	sprint_down
# 400 "data/maps/Route104/scripts.pory"
	sprint_down
# 400 "data/maps/Route104/scripts.pory"
	sprint_down
# 400 "data/maps/Route104/scripts.pory"
	sprint_down
# 401 "data/maps/Route104/scripts.pory"
	run_down
# 401 "data/maps/Route104/scripts.pory"
	run_down
# 401 "data/maps/Route104/scripts.pory"
	run_down
# 401 "data/maps/Route104/scripts.pory"
	run_down
# 402 "data/maps/Route104/scripts.pory"
	run_right
# 402 "data/maps/Route104/scripts.pory"
	run_right
# 403 "data/maps/Route104/scripts.pory"
	sprint_right
# 403 "data/maps/Route104/scripts.pory"
	sprint_right
# 403 "data/maps/Route104/scripts.pory"
	sprint_right
# 403 "data/maps/Route104/scripts.pory"
	sprint_right
# 403 "data/maps/Route104/scripts.pory"
	sprint_right
# 403 "data/maps/Route104/scripts.pory"
	sprint_right
# 404 "data/maps/Route104/scripts.pory"
	run_right
# 404 "data/maps/Route104/scripts.pory"
	run_right
# 405 "data/maps/Route104/scripts.pory"
	run_down
# 405 "data/maps/Route104/scripts.pory"
	run_down
# 405 "data/maps/Route104/scripts.pory"
	run_down
# 405 "data/maps/Route104/scripts.pory"
	run_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 406 "data/maps/Route104/scripts.pory"
	sprint_down
# 407 "data/maps/Route104/scripts.pory"
	run_down
# 407 "data/maps/Route104/scripts.pory"
	run_down
# 407 "data/maps/Route104/scripts.pory"
	run_down
# 407 "data/maps/Route104/scripts.pory"
	run_down
# 408 "data/maps/Route104/scripts.pory"
	run_right
# 408 "data/maps/Route104/scripts.pory"
	run_right
# 408 "data/maps/Route104/scripts.pory"
	run_right
# 408 "data/maps/Route104/scripts.pory"
	run_right
# 409 "data/maps/Route104/scripts.pory"
	sprint_right
# 409 "data/maps/Route104/scripts.pory"
	sprint_right
# 409 "data/maps/Route104/scripts.pory"
	sprint_right
# 409 "data/maps/Route104/scripts.pory"
	sprint_right
# 409 "data/maps/Route104/scripts.pory"
	sprint_right
# 409 "data/maps/Route104/scripts.pory"
	sprint_right
# 409 "data/maps/Route104/scripts.pory"
	sprint_right
# 409 "data/maps/Route104/scripts.pory"
	sprint_right
# 409 "data/maps/Route104/scripts.pory"
	sprint_right
# 409 "data/maps/Route104/scripts.pory"
	sprint_right
# 409 "data/maps/Route104/scripts.pory"
	sprint_right
# 409 "data/maps/Route104/scripts.pory"
	sprint_right
# 409 "data/maps/Route104/scripts.pory"
	sprint_right
# 409 "data/maps/Route104/scripts.pory"
	sprint_right
# 409 "data/maps/Route104/scripts.pory"
	sprint_right
# 409 "data/maps/Route104/scripts.pory"
	sprint_right
# 409 "data/maps/Route104/scripts.pory"
	sprint_right
# 409 "data/maps/Route104/scripts.pory"
	sprint_right
# 409 "data/maps/Route104/scripts.pory"
	sprint_right
# 409 "data/maps/Route104/scripts.pory"
	sprint_right
# 409 "data/maps/Route104/scripts.pory"
	sprint_right
# 409 "data/maps/Route104/scripts.pory"
	sprint_right
# 409 "data/maps/Route104/scripts.pory"
	sprint_right
# 409 "data/maps/Route104/scripts.pory"
	sprint_right
# 409 "data/maps/Route104/scripts.pory"
	sprint_right
# 409 "data/maps/Route104/scripts.pory"
	sprint_right
# 409 "data/maps/Route104/scripts.pory"
	sprint_right
# 409 "data/maps/Route104/scripts.pory"
	sprint_right
# 409 "data/maps/Route104/scripts.pory"
	sprint_right
# 409 "data/maps/Route104/scripts.pory"
	sprint_right
# 409 "data/maps/Route104/scripts.pory"
	sprint_right
# 409 "data/maps/Route104/scripts.pory"
	sprint_right
# 409 "data/maps/Route104/scripts.pory"
	sprint_right
# 409 "data/maps/Route104/scripts.pory"
	sprint_right
# 409 "data/maps/Route104/scripts.pory"
	sprint_right
# 409 "data/maps/Route104/scripts.pory"
	sprint_right
# 409 "data/maps/Route104/scripts.pory"
	sprint_right
# 409 "data/maps/Route104/scripts.pory"
	sprint_right
# 409 "data/maps/Route104/scripts.pory"
	sprint_right
# 409 "data/maps/Route104/scripts.pory"
	sprint_right
# 410 "data/maps/Route104/scripts.pory"
	run_right
# 410 "data/maps/Route104/scripts.pory"
	run_right
# 410 "data/maps/Route104/scripts.pory"
	run_right
# 410 "data/maps/Route104/scripts.pory"
	run_right
# 411 "data/maps/Route104/scripts.pory"
	walk_right
# 411 "data/maps/Route104/scripts.pory"
	walk_right
# 412 "data/maps/Route104/scripts.pory"
	walk_down
# 412 "data/maps/Route104/scripts.pory"
	walk_down
# 413 "data/maps/Route104/scripts.pory"
	run_down
# 413 "data/maps/Route104/scripts.pory"
	run_down
# 413 "data/maps/Route104/scripts.pory"
	run_down
# 413 "data/maps/Route104/scripts.pory"
	run_down
# 413 "data/maps/Route104/scripts.pory"
	run_down
# 413 "data/maps/Route104/scripts.pory"
	run_down
# 413 "data/maps/Route104/scripts.pory"
	run_down
# 413 "data/maps/Route104/scripts.pory"
	run_down
# 413 "data/maps/Route104/scripts.pory"
	run_down
# 413 "data/maps/Route104/scripts.pory"
	run_down
# 413 "data/maps/Route104/scripts.pory"
	run_down
# 413 "data/maps/Route104/scripts.pory"
	run_down
# 413 "data/maps/Route104/scripts.pory"
	run_down
# 413 "data/maps/Route104/scripts.pory"
	run_down
# 413 "data/maps/Route104/scripts.pory"
	run_down
# 414 "data/maps/Route104/scripts.pory"
	walk_down
# 414 "data/maps/Route104/scripts.pory"
	walk_down
	step_end

Route104_EventScript_Ivan::
# 418 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_IVAN, Route104_Text_IvanIntro, Route104_Text_IvanDefeat
# 419 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_IvanPostBattle, MSGBOX_AUTOCLOSE
	end


Route104_EventScript_Billy::
# 424 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_BILLY, Route104_Text_BillyIntro, Route104_Text_BillyDefeat
# 425 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BillyPostBattle, MSGBOX_AUTOCLOSE
	end


Route104_EventScript_Haley::
# 430 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_HALEY_1, Route104_Text_HaleyIntro, Route104_Text_HaleyDefeat, Route104_EventScript_TryRegisterHaleyAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route104_EventScript_Haley_2
# 436 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_HALEY_1
# 437 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_Haley_6
Route104_EventScript_Haley_4:
# 442 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
	release_end

Route104_EventScript_Haley_2:
# 432 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_HALEY_1, Route104_Text_HaleyRematchIntro, Route104_Text_HaleyRematchDefeat
# 433 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostRematch, MSGBOX_AUTOCLOSE
	end

Route104_EventScript_Haley_5:
# 438 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyRegister1, MSGBOX_DEFAULT
# 439 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_HALEY_1
	release_end

Route104_EventScript_Haley_6:
	specialvar VAR_RESULT, IsTrainerRegistered
# 0 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route104_EventScript_Haley_5
	goto Route104_EventScript_Haley_4


Route104_EventScript_TryRegisterHaleyAfterBattle::
# 447 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 448 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 449 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_TryRegisterHaleyAfterBattle_2
Route104_EventScript_TryRegisterHaleyAfterBattle_1:
	release_end

Route104_EventScript_TryRegisterHaleyAfterBattle_2:
# 450 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyRegister2, MSGBOX_DEFAULT
# 451 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_HALEY_1
	goto Route104_EventScript_TryRegisterHaleyAfterBattle_1


Route104_EventScript_Winston::
# 457 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_WINSTON_1, Route104_Text_WinstonIntro, Route104_Text_WinstonDefeat, Route104_EventScript_TryRegisterWinstonAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route104_EventScript_Winston_2
# 463 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_WINSTON_1
# 464 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_Winston_6
Route104_EventScript_Winston_4:
# 469 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
	release_end

Route104_EventScript_Winston_2:
# 459 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_WINSTON_1, Route104_Text_WinstonRematchIntro, Route104_Text_WinstonRematchDefeat
# 460 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostRematch, MSGBOX_AUTOCLOSE
	end

Route104_EventScript_Winston_5:
# 465 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonRegister1, MSGBOX_DEFAULT
# 466 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_WINSTON_1
	release_end

Route104_EventScript_Winston_6:
	specialvar VAR_RESULT, IsTrainerRegistered
# 0 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route104_EventScript_Winston_5
	goto Route104_EventScript_Winston_4


Route104_EventScript_TryRegisterWinstonAfterBattle::
# 474 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 475 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 476 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_TryRegisterWinstonAfterBattle_2
Route104_EventScript_TryRegisterWinstonAfterBattle_1:
	release_end

Route104_EventScript_TryRegisterWinstonAfterBattle_2:
# 477 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonRegister2, MSGBOX_DEFAULT
# 478 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_WINSTON_1
	goto Route104_EventScript_TryRegisterWinstonAfterBattle_1


Route104_EventScript_Cindy::
# 484 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_CINDY_1, Route104_Text_CindyIntro, Route104_Text_CindyDefeat, Route104_EventScript_TryRegisterCindyAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route104_EventScript_Cindy_2
# 490 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_CINDY_1
# 491 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_Cindy_6
Route104_EventScript_Cindy_4:
# 496 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostBattle, MSGBOX_DEFAULT
	release_end

Route104_EventScript_Cindy_2:
# 486 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_CINDY_1, Route104_Text_CindyRematchIntro, Route104_Text_CindyRematchDefeat
# 487 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostRematch, MSGBOX_AUTOCLOSE
	end

Route104_EventScript_Cindy_5:
# 492 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyRegister1, MSGBOX_DEFAULT
# 493 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_CINDY_1
	release_end

Route104_EventScript_Cindy_6:
	specialvar VAR_RESULT, IsTrainerRegistered
# 0 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route104_EventScript_Cindy_5
	goto Route104_EventScript_Cindy_4


Route104_EventScript_TryRegisterCindyAfterBattle::
# 501 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 502 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 503 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_TryRegisterCindyAfterBattle_2
Route104_EventScript_TryRegisterCindyAfterBattle_1:
	release_end

Route104_EventScript_TryRegisterCindyAfterBattle_2:
# 504 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyRegister2, MSGBOX_DEFAULT
# 505 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_CINDY_1
	goto Route104_EventScript_TryRegisterCindyAfterBattle_1


Route104_EventScript_Gina::
# 511 "data/maps/Route104/scripts.pory"
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104_Text_GinaIntro, Route104_Text_GinaDefeat, Route104_Text_GinaNotEnoughMons
# 512 "data/maps/Route104/scripts.pory"
	special GetPlayerBigGuyGirlString
# 513 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_GinaPostBattle, MSGBOX_DEFAULT
	release_end


Route104_EventScript_Mia::
# 518 "data/maps/Route104/scripts.pory"
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104_Text_MiaIntro, Route104_Text_MiaDefeat, Route104_Text_MiaNotEnoughMons
# 519 "data/maps/Route104/scripts.pory"
	special GetPlayerBigGuyGirlString
# 520 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MiaPostBattle, MSGBOX_DEFAULT
	release_end


Route104_EventScript_Darian::
# 525 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_DARIAN, Route104_Text_DarianIntro, Route104_Text_DarianDefeat
# 526 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_DarianPostBattle, MSGBOX_AUTOCLOSE
	end


# 41 "data/maps/Route104/scripts.pory"
Route104_EventScript_RivalTrigger_Movement_0:
# 41 "data/maps/Route104/scripts.pory"
	lock_look
# 41 "data/maps/Route104/scripts.pory"
	walk_down
# 41 "data/maps/Route104/scripts.pory"
	unlock_look
	step_end

# 98 "data/maps/Route104/scripts.pory"
Route104_EventScript_MayEncounter_Movement_0:
# 98 "data/maps/Route104/scripts.pory"
	delay_4
# 98 "data/maps/Route104/scripts.pory"
	step_faster_left
	step_end

# 103 "data/maps/Route104/scripts.pory"
Route104_EventScript_MayEncounter_Movement_1:
# 103 "data/maps/Route104/scripts.pory"
	walk_down
# 103 "data/maps/Route104/scripts.pory"
	face_right
	step_end

# 301 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewford_Movement_0:
# 301 "data/maps/Route104/scripts.pory"
	walk_down
# 301 "data/maps/Route104/scripts.pory"
	walk_down
	step_end

# 304 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewford_Movement_1:
# 304 "data/maps/Route104/scripts.pory"
	walk_left
# 304 "data/maps/Route104/scripts.pory"
	walk_down
# 304 "data/maps/Route104/scripts.pory"
	walk_down
	step_end

# 344 "data/maps/Route104/scripts.pory"
Route104_EventScript_ArriveInDewford_Movement_0:
# 344 "data/maps/Route104/scripts.pory"
	walk_down
# 344 "data/maps/Route104/scripts.pory"
	walk_left
# 344 "data/maps/Route104/scripts.pory"
	step_faster_right
	step_end

# 350 "data/maps/Route104/scripts.pory"
Route104_EventScript_ArriveInDewford_Movement_1:
# 350 "data/maps/Route104/scripts.pory"
	walk_down
# 350 "data/maps/Route104/scripts.pory"
	step_faster_left
	step_end

Route104_Text_BrineyLivesInSeasideCottage::
# 530 "data/maps/Route104/scripts.pory"
	.string "That seaside cottage is where\n"
	.string "MR. BRINEY lives.\p"
	.string "He was once a mighty sailor who never\n"
	.string "feared the sea, however stormy.$"

Route104_Text_WhatsItLikeAtBottomOfSea::
# 538 "data/maps/Route104/scripts.pory"
	.string "The sea, huh?\p"
	.string "I wonder what it's like at the bottom\n"
	.string "of the sea?$"

Route104_Text_ThrowBallAtWeakenedPokemon::
# 545 "data/maps/Route104/scripts.pory"
	.string "If you're going to throw a POKé BALL,\n"
	.string "weaken the wild POKéMON first.\p"
	.string "It will be easier to catch if it's been\n"
	.string "poisoned, burned, or lulled to sleep.$"

Route104_Text_OnlyThrowBallAtWildPokemon::
# 553 "data/maps/Route104/scripts.pory"
	.string "You're a thief if you try to steal\n"
	.string "someone else's POKéMON.\p"
	.string "You should throw POKé BALLS only at\n"
	.string "wild POKéMON.$"

Route104_Text_ImNotATrainer::
# 561 "data/maps/Route104/scripts.pory"
	.string "Oh, no, I'm not a TRAINER.\p"
	.string "But that's right, if TRAINERS lock eyes,\n"
	.string "it's a challenge to battle.\p"
	.string "If you don't want to battle, stay out\n"
	.string "of their sight.$"

Route104_Text_LikeFillingMouthWithSeedsTakeThis::
# 571 "data/maps/Route104/scripts.pory"
	.string "I like filling my mouth with seeds,\n"
	.string "then spitting them out fast!\p"
	.string "You can have this, so you try it out!\p"
	.string "Use it on a POKéMON, and it will learn\n"
	.string "a move for firing seeds rapidly.$"

Route104_Text_TMsAreOneTimeUse::
# 581 "data/maps/Route104/scripts.pory"
	.string "A word of advice!\p"
	.string "A TM, TECHNICAL MACHINE, is good only\n"
	.string "for one-time use.\p"
	.string "Once you use it, it's gone.\n"
	.string "Think twice before using it!$"

Route104_Text_DontNeedThisTakeIt::
# 591 "data/maps/Route104/scripts.pory"
	.string "This FLOWER SHOP started selling\n"
	.string "saplings recently.\p"
	.string "It made me so happy, I went overboard\n"
	.string "shopping.\p"
	.string "I don't need this WHITE HERB anymore.\n"
	.string "Would you take it, please?$"

Route104_Text_FlowerShopSellingSaplings::
# 602 "data/maps/Route104/scripts.pory"
	.string "This FLOWER SHOP started selling\n"
	.string "saplings recently.\p"
	.string "It made me so happy, I went overboard\n"
	.string "shopping. Where should I put them?$"

Route104_Text_MrBrineysCottage::
# 610 "data/maps/Route104/scripts.pory"
	.string "MR. BRINEY'S COTTAGE$"

Route104_Text_RouteSignPetalburg::
# 614 "data/maps/Route104/scripts.pory"
	.string "ROUTE 1O4\n"
	.string "{RIGHT_ARROW} PETALBURG CITY$"

Route104_Text_RouteSignRustboro::
# 619 "data/maps/Route104/scripts.pory"
	.string "ROUTE 1O4\n"
	.string "{UP_ARROW} RUSTBORO CITY$"

Route104_Text_PrettyPetalFlowShop::
# 624 "data/maps/Route104/scripts.pory"
	.string "PRETTY PETAL FLOWER SHOP$"

Route104_Text_TrainerTipsDoubleBattles::
# 628 "data/maps/Route104/scripts.pory"
	.string "TRAINER TIPS\p"
	.string "In the HOENN region there are pairs\n"
	.string "of TRAINERS who challenge others\l"
	.string "for 2-on-2 POKéMON battles called\l"
	.string "DOUBLE BATTLES.\p"
	.string "In a DOUBLE BATTLE, the TRAINER must\n"
	.string "send out two POKéMON, the one at the\l"
	.string "left of the list and the top one.\l"
	.string "Watch how POKéMON are lined up.$"

Route104_Text_MayWeShouldRegister::
# 642 "data/maps/Route104/scripts.pory"
	.string "MAY: Oh, hi, {PLAYER}{KUN}!\p"
	.string "DEVON upgraded your POKéNAV with\n"
	.string "the MATCH CALL system, huh?\p"
	.string "We should register each other so we\n"
	.string "can get in contact anytime.$"

Route104_Text_RegisteredMay::
# 652 "data/maps/Route104/scripts.pory"
	.string "{PLAYER} registered MAY\n"
	.string "in the POKéNAV.$"

Route104_Text_MayHowsYourPokedex::
# 657 "data/maps/Route104/scripts.pory"
	.string "MAY: Oh, by the way, {PLAYER}{KUN},\n"
	.string "how's your POKéDEX coming along?$"

Route104_Text_MayMinesDecentLetsBattle::
# 662 "data/maps/Route104/scripts.pory"
	.string "Mine's looking pretty decent.\n"
	.string "So…\l"
	.string "How about a little battle?$"

Route104_Text_MayHaventRaisedPokemon::
# 668 "data/maps/Route104/scripts.pory"
	.string "MAY: Oh, what's the matter?\p"
	.string "Haven't you caught or raised your\n"
	.string "POKéMON very much?\p"
	.string "That's not very good for a TRAINER!$"

Route104_Text_MayLetsBattle::
# 677 "data/maps/Route104/scripts.pory"
	.string "MAY: So, what do you think?\n"
	.string "How about a little battle here?$"

Route104_Text_MayIntro::
# 682 "data/maps/Route104/scripts.pory"
	.string "MAY: You just became a TRAINER,\n"
	.string "{PLAYER}{KUN}. I'm not going to lose!$"

Route104_Text_MayDefeat::
# 687 "data/maps/Route104/scripts.pory"
	.string "Yikes!\n"
	.string "You're better than I expected!$"

Route104_Text_MayPostBattle::
# 692 "data/maps/Route104/scripts.pory"
	.string "MAY: I can tell you've gotten pretty\n"
	.string "good with the way you handle POKéMON.\p"
	.string "But instead of only making them\n"
	.string "battle, you should be like MR. BRINEY.\p"
	.string "It's important to become friends with\n"
	.string "POKéMON, too.$"

Route104_Text_BrendanWeShouldRegister::
# 703 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: Oh, hey, {PLAYER}!\p"
	.string "Cool, you had DEVON install the MATCH\n"
	.string "CALL system on your POKéNAV!\p"
	.string "Let's register each other in our\n"
	.string "POKéNAVS so we can keep in touch.$"

Route104_Text_RegisteredBrendan::
# 713 "data/maps/Route104/scripts.pory"
	.string "{PLAYER} registered BRENDAN\n"
	.string "in the POKéNAV.$"

Route104_Text_BrendanHowsYourPokedex::
# 718 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: {PLAYER}, how's your POKéDEX?\n"
	.string "Have you filled in any pages yet?$"

Route104_Text_BrendanDoingGreatLetsBattle::
# 723 "data/maps/Route104/scripts.pory"
	.string "Me, I'm doing great!\p"
	.string "Want to check out how good I am with\n"
	.string "a battle?$"

Route104_Text_BrendanNoConfidence::
# 730 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: What's the matter? Don't have\n"
	.string "any confidence in your POKéMON?$"

Route104_Text_BrendanLetsBattle::
# 735 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: What's up?\n"
	.string "Want to have a battle with me?$"

Route104_Text_BrendanIntro::
# 740 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: I know you just became\n"
	.string "a TRAINER, but I won't go easy!$"

Route104_Text_BrendanDefeat::
# 745 "data/maps/Route104/scripts.pory"
	.string "Hmm…\n"
	.string "You're pretty good.$"

Route104_Text_BrendanPostBattle::
# 750 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: You've gotten pretty decent\n"
	.string "at handling POKéMON.\p"
	.string "But, you know, you shouldn't just be\n"
	.string "making POKéMON battle.\p"
	.string "Like MR. BRINEY, it's important to\n"
	.string "become friends with your POKéMON.$"
