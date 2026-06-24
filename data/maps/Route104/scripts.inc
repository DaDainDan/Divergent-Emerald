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
	goto_if_unset FLAG_BADGE01_GET, Route104_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
# 17 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
Route104_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 19 "data/maps/Route104/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 20 "data/maps/Route104/scripts.pory"
	compare VAR_TEMP_1, 34
	goto_if_gt Route104_MapScripts_MAP_SCRIPT_ON_TRANSITION_15
# 23 "data/maps/Route104/scripts.pory"
	call Route104_WildSet2Trigger
Route104_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
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

Route104_MapScripts_MAP_SCRIPT_ON_TRANSITION_15:
# 21 "data/maps/Route104/scripts.pory"
	call Route104_WildSet1Trigger
	goto Route104_MapScripts_MAP_SCRIPT_ON_TRANSITION_14

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


Route104_WildSet1Trigger::
# 30 "data/maps/Route104/scripts.pory"
	setvar VAR_ROUTE104_WILD_SET, 1
	return


Route104_WildSet2Trigger::
# 35 "data/maps/Route104/scripts.pory"
	setvar VAR_ROUTE104_WILD_SET, 0
	return


Route104_EventScript_Rival::
# 40 "data/maps/Route104/scripts.pory"
	lockall
# 41 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8008, 1
# 42 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Common_Movement_FacePlayer
# 43 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 44 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_RivalEncounter
	return


Route104_EventScript_RivalTrigger::
# 48 "data/maps/Route104/scripts.pory"
	lockall
# 49 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 50 "data/maps/Route104/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 51 "data/maps/Route104/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 52 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
# 53 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 54 "data/maps/Route104/scripts.pory"
	delay 10
# 55 "data/maps/Route104/scripts.pory"
	addobject LOCALID_ROUTE104_RIVAL
# 56 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_RIVAL
# 57 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_EventScript_RivalTrigger_Movement_0
# 58 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 59 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Common_Movement_WalkDown
# 60 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 61 "data/maps/Route104/scripts.pory"
	delay 20
# 62 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8008, 0
# 63 "data/maps/Route104/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 64 "data/maps/Route104/scripts.pory"
	playse SE_PIN
# 65 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Common_Movement_ExclamationMark
# 66 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 67 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Common_Movement_Delay48
# 68 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 69 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_RivalEncounter
	return


Route104_EventScript_PlayRivalMusic::
	checkplayergender
# 0 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route104_EventScript_PlayRivalMusic_2
# 77 "data/maps/Route104/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
Route104_EventScript_PlayRivalMusic_1:
	return

Route104_EventScript_PlayRivalMusic_2:
# 75 "data/maps/Route104/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
	goto Route104_EventScript_PlayRivalMusic_1


Route104_EventScript_RivalEncounter::
	checkplayergender
# 0 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route104_EventScript_RivalEncounter_2
# 86 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BrendanEncounter
Route104_EventScript_RivalEncounter_1:
	end

Route104_EventScript_RivalEncounter_2:
# 84 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_MayEncounter
	goto Route104_EventScript_RivalEncounter_1


Route104_EventScript_MayEncounter::
# 92 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE_104, Route104_EventScript_MayEncounter_2
Route104_EventScript_MayEncounter_1:
# 95 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_MayEncounter_5
# 104 "data/maps/Route104/scripts.pory"
	setflag FLAG_REGISTER_RIVAL_POKENAV
# 105 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayWeShouldRegister, MSGBOX_DEFAULT
# 106 "data/maps/Route104/scripts.pory"
	closemessage
# 107 "data/maps/Route104/scripts.pory"
	delay 30
# 108 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 109 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredMay, MSGBOX_DEFAULT
# 110 "data/maps/Route104/scripts.pory"
	waitfanfare
# 111 "data/maps/Route104/scripts.pory"
	closemessage
# 112 "data/maps/Route104/scripts.pory"
	delay 30
# 113 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 114 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_EventScript_MayEncounter_Movement_0
# 115 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Common_Movement_CreepLeft
# 116 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayHowsYourPokedex, MSGBOX_DEFAULT
# 117 "data/maps/Route104/scripts.pory"
	closemessage
# 118 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 119 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Route104_EventScript_MayEncounter_Movement_1
# 120 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 121 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_ROUTE104_RIVAL
# 122 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayMinesDecentLetsBattle, MSGBOX_YESNO
# 123 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route104_EventScript_MayEncounter_8
Route104_EventScript_MayEncounter_7:
# 126 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayHaventRaisedPokemon, MSGBOX_DEFAULT
# 127 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_RestoreMusic
# 128 "data/maps/Route104/scripts.pory"
	releaseall
	end

Route104_EventScript_MayEncounter_2:
# 93 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_MayDefeated
	goto Route104_EventScript_MayEncounter_1

Route104_EventScript_MayEncounter_5:
# 96 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayLetsBattle, MSGBOX_YESNO
# 97 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route104_EventScript_MayEncounter_11
Route104_EventScript_MayEncounter_10:
# 100 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayHaventRaisedPokemon, MSGBOX_DEFAULT
# 101 "data/maps/Route104/scripts.pory"
	releaseall
	end

Route104_EventScript_MayEncounter_8:
# 124 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BattleMay
	goto Route104_EventScript_MayEncounter_7

Route104_EventScript_MayEncounter_11:
# 98 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BattleMay
	goto Route104_EventScript_MayEncounter_10


Route104_EventScript_BattleMay::
# 133 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayIntro, MSGBOX_DEFAULT
# 134 "data/maps/Route104/scripts.pory"
	switch VAR_STARTER_MON
# 135 "data/maps/Route104/scripts.pory"
	case PC_CHOSE_TREECKO, Route104_EventScript_BattleMay_3
# 136 "data/maps/Route104/scripts.pory"
	case PC_CHOSE_TORCHIC, Route104_EventScript_BattleMay_4
# 137 "data/maps/Route104/scripts.pory"
	case PC_CHOSE_MUDKIP, Route104_EventScript_BattleMay_5
Route104_EventScript_BattleMay_1:
# 139 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 140 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_MayDefeated
	end

Route104_EventScript_BattleMay_3:
# 135 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, Route104_Text_MayDefeat
	goto Route104_EventScript_BattleMay_1

Route104_EventScript_BattleMay_4:
# 136 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_MUDKIP, Route104_Text_MayDefeat
	goto Route104_EventScript_BattleMay_1

Route104_EventScript_BattleMay_5:
# 137 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, Route104_Text_MayDefeat
	goto Route104_EventScript_BattleMay_1


Route104_EventScript_MayDefeated::
# 145 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayPostBattle, MSGBOX_DEFAULT
# 146 "data/maps/Route104/scripts.pory"
	compare VAR_0x8008, 0
	goto_if_eq Route104_EventScript_MayDefeated_2
Route104_EventScript_MayDefeated_1:
# 149 "data/maps/Route104/scripts.pory"
	releaseall
	end

Route104_EventScript_MayDefeated_2:
# 147 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_RestoreMusic
	goto Route104_EventScript_MayDefeated_1


Route104_EventScript_RestoreMusic::
# 154 "data/maps/Route104/scripts.pory"
	savebgm MUS_DUMMY
# 155 "data/maps/Route104/scripts.pory"
	fadedefaultbgm
	return


Route104_EventScript_BrendanEncounter::
# 160 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE_104, Route104_EventScript_BrendanEncounter_2
Route104_EventScript_BrendanEncounter_1:
# 163 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_BrendanEncounter_5
# 172 "data/maps/Route104/scripts.pory"
	setflag FLAG_REGISTER_RIVAL_POKENAV
# 173 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanWeShouldRegister, MSGBOX_DEFAULT
# 174 "data/maps/Route104/scripts.pory"
	closemessage
# 175 "data/maps/Route104/scripts.pory"
	delay 30
# 176 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 177 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredBrendan, MSGBOX_DEFAULT
# 178 "data/maps/Route104/scripts.pory"
	waitfanfare
# 179 "data/maps/Route104/scripts.pory"
	closemessage
# 180 "data/maps/Route104/scripts.pory"
	delay 30
# 181 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 182 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_EventScript_MayEncounter_Movement_0
# 183 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Common_Movement_CreepLeft
# 184 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanHowsYourPokedex, MSGBOX_DEFAULT
# 185 "data/maps/Route104/scripts.pory"
	closemessage
# 186 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 187 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_RIVAL, Route104_EventScript_MayEncounter_Movement_1
# 188 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 189 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_ROUTE104_RIVAL
# 190 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanDoingGreatLetsBattle, MSGBOX_YESNO
# 191 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route104_EventScript_BrendanEncounter_8
Route104_EventScript_BrendanEncounter_7:
# 194 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanNoConfidence, MSGBOX_DEFAULT
# 195 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_RestoreMusic
# 196 "data/maps/Route104/scripts.pory"
	releaseall
	end

Route104_EventScript_BrendanEncounter_2:
# 161 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
	goto Route104_EventScript_BrendanEncounter_1

Route104_EventScript_BrendanEncounter_5:
# 164 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanLetsBattle, MSGBOX_YESNO
# 165 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route104_EventScript_BrendanEncounter_11
Route104_EventScript_BrendanEncounter_10:
# 168 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanNoConfidence, MSGBOX_DEFAULT
# 169 "data/maps/Route104/scripts.pory"
	releaseall
	end

Route104_EventScript_BrendanEncounter_8:
# 192 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BattleBrendan
	goto Route104_EventScript_BrendanEncounter_7

Route104_EventScript_BrendanEncounter_11:
# 166 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BattleBrendan
	goto Route104_EventScript_BrendanEncounter_10


Route104_EventScript_BattleBrendan::
# 201 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanIntro, MSGBOX_DEFAULT
# 202 "data/maps/Route104/scripts.pory"
	switch VAR_STARTER_MON
# 203 "data/maps/Route104/scripts.pory"
	case PC_CHOSE_TREECKO, Route104_EventScript_BattleBrendan_3
# 204 "data/maps/Route104/scripts.pory"
	case PC_CHOSE_TORCHIC, Route104_EventScript_BattleBrendan_4
# 205 "data/maps/Route104/scripts.pory"
	case PC_CHOSE_MUDKIP, Route104_EventScript_BattleBrendan_5
Route104_EventScript_BattleBrendan_1:
# 207 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 208 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
	end

Route104_EventScript_BattleBrendan_3:
# 203 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TORCHIC, Route104_Text_BrendanDefeat
	goto Route104_EventScript_BattleBrendan_1

Route104_EventScript_BattleBrendan_4:
# 204 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_MUDKIP, Route104_Text_BrendanDefeat
	goto Route104_EventScript_BattleBrendan_1

Route104_EventScript_BattleBrendan_5:
# 205 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TREECKO, Route104_Text_BrendanDefeat
	goto Route104_EventScript_BattleBrendan_1


Route104_EventScript_BrendanDefeated::
# 213 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanPostBattle, MSGBOX_DEFAULT
# 214 "data/maps/Route104/scripts.pory"
	compare VAR_0x8008, 0
	goto_if_eq Route104_EventScript_BrendanDefeated_2
Route104_EventScript_BrendanDefeated_1:
# 217 "data/maps/Route104/scripts.pory"
	releaseall
	end

Route104_EventScript_BrendanDefeated_2:
# 215 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_RestoreMusic
	goto Route104_EventScript_BrendanDefeated_1


Route104_EventScript_ExpertF::
# 222 "data/maps/Route104/scripts.pory"
	lock_faceplayer
# 223 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104, Route104_EventScript_ExpertF_2
# 227 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_PlantBerriesInSoilTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_CHESTO_BERRY
# 0 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route104_EventScript_ExpertF_5
Route104_EventScript_ExpertF_4:
# 231 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104
# 232 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
	release_end

Route104_EventScript_ExpertF_2:
# 224 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
	release_end

Route104_EventScript_ExpertF_5:
# 229 "data/maps/Route104/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto Route104_EventScript_ExpertF_4


Route104_EventScript_WhiteHerbFlorist::
# 237 "data/maps/Route104/scripts.pory"
	lock_faceplayer
# 238 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_WHITE_HERB, Route104_EventScript_WhiteHerbFlorist_2
# 242 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_DontNeedThisTakeIt, MSGBOX_DEFAULT
	giveitem ITEM_WHITE_HERB
# 0 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route104_EventScript_WhiteHerbFlorist_5
Route104_EventScript_WhiteHerbFlorist_4:
# 246 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_WHITE_HERB
	release_end

Route104_EventScript_WhiteHerbFlorist_2:
# 239 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_FlowerShopSellingSaplings, MSGBOX_DEFAULT
	release_end

Route104_EventScript_WhiteHerbFlorist_5:
# 244 "data/maps/Route104/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto Route104_EventScript_WhiteHerbFlorist_4


Route104_EventScript_Girl1::
# 251 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrineyLivesInSeasideCottage, MSGBOX_NPC
	end


Route104_EventScript_BugCatcher::
# 256 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WhatsItLikeAtBottomOfSea, MSGBOX_SIGN
	end


Route104_EventScript_BrineysCottageSign::
# 261 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MrBrineysCottage, MSGBOX_SIGN
	end


Route104_EventScript_RouteSignPetalburg::
# 266 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RouteSignPetalburg, MSGBOX_SIGN
	end


Route104_EventScript_RouteSignRustboro::
# 271 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RouteSignRustboro, MSGBOX_SIGN
	end


Route104_EventScript_FlowerShopSign::
# 276 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_PrettyPetalFlowShop, MSGBOX_SIGN
	end


Route104_EventScript_TrainerTipsDoubleBattles::
# 281 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainerTipsDoubleBattles, MSGBOX_SIGN
	end


Route104_EventScript_Boy1::
# 286 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_ThrowBallAtWeakenedPokemon, MSGBOX_NPC
	end


Route104_EventScript_Woman::
# 291 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_OnlyThrowBallAtWildPokemon, MSGBOX_NPC
	end


Route104_EventScript_Boy2::
# 296 "data/maps/Route104/scripts.pory"
	lock_faceplayer
# 297 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_BULLET_SEED, Route104_EventScript_Boy2_2
# 301 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_LikeFillingMouthWithSeedsTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_TM_BULLET_SEED
# 0 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route104_EventScript_Boy2_5
Route104_EventScript_Boy2_4:
# 305 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULLET_SEED
	release_end

Route104_EventScript_Boy2_2:
# 298 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TMsAreOneTimeUse, MSGBOX_DEFAULT
	release_end

Route104_EventScript_Boy2_5:
# 303 "data/maps/Route104/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto Route104_EventScript_Boy2_4


Route104_EventScript_Girl2::
# 310 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_ImNotATrainer, MSGBOX_NPC
	end


Route104_EventScript_SailToDewford::
# 315 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_ROUTE104_BRINEY, MAP_ROUTE104, 0
# 316 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_ROUTE104, 0
# 317 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_BRINEY, Route104_EventScript_SailToDewford_Movement_0
# 318 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 319 "data/maps/Route104/scripts.pory"
	removeobject LOCALID_ROUTE104_BRINEY
# 320 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_EventScript_SailToDewford_Movement_1
# 321 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 322 "data/maps/Route104/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_ROUTE104
# 323 "data/maps/Route104/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 324 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_ENABLE_NORMAN_MATCH_CALL, Route104_EventScript_SailToDewford_2
Route104_EventScript_SailToDewford_1:
# 327 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_BOAT, Route104_Movement_SailToDewford
# 328 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_Movement_SailToDewford
# 329 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 330 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_ArriveInDewford
	end

Route104_EventScript_SailToDewford_2:
# 325 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_SailToDewfordDadCalls
	goto Route104_EventScript_SailToDewford_1


Route104_EventScript_SailToDewfordDadCalls::
# 335 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_BOAT, Route104_Movement_SailToDewfordBeforeDadCalls
# 336 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_Movement_SailToDewfordBeforeDadCalls
# 337 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 338 "data/maps/Route104/scripts.pory"
	pokenavcall Route104_Text_DadPokenavCall
# 339 "data/maps/Route104/scripts.pory"
	waitmessage
# 340 "data/maps/Route104/scripts.pory"
	delay 30
# 341 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 342 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredDadInPokenav, MSGBOX_DEFAULT
# 343 "data/maps/Route104/scripts.pory"
	waitfanfare
# 344 "data/maps/Route104/scripts.pory"
	closemessage
# 345 "data/maps/Route104/scripts.pory"
	delay 30
# 346 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_NORMAN_MATCH_CALL
# 347 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_Movement_SailToDewfordAfterDadCalls
# 348 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_ROUTE104_BOAT, Route104_Movement_SailToDewfordAfterDadCalls, MAP_ROUTE104
# 349 "data/maps/Route104/scripts.pory"
	waitmovement LOCALID_ROUTE104_BOAT, MAP_ROUTE104
# 350 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 351 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_ArriveInDewford
	return


Route104_EventScript_ArriveInDewford::
# 355 "data/maps/Route104/scripts.pory"
	delay 50
# 356 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 357 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 358 "data/maps/Route104/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 359 "data/maps/Route104/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_DEWFORD_TOWN
# 360 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_PLAYER, Route104_EventScript_ArriveInDewford_Movement_0
# 361 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 362 "data/maps/Route104/scripts.pory"
	setobjectxyperm LOCALID_DEWFORD_BRINEY, 12, 8
# 363 "data/maps/Route104/scripts.pory"
	addobject LOCALID_DEWFORD_BRINEY
# 364 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_DEWFORD_BRINEY, MAP_DEWFORD_TOWN, 0
# 365 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
# 366 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_DEWFORD_BRINEY, Route104_EventScript_ArriveInDewford_Movement_1
# 367 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 368 "data/maps/Route104/scripts.pory"
	addobject LOCALID_DEWFORD_BOAT
# 369 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 370 "data/maps/Route104/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 371 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
# 372 "data/maps/Route104/scripts.pory"
	hideobjectat LOCALID_ROUTE104_BOAT, MAP_ROUTE104
# 373 "data/maps/Route104/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 374 "data/maps/Route104/scripts.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_ROUTE104
# 375 "data/maps/Route104/scripts.pory"
	resetobjectsubpriority LOCALID_DEWFORD_BRINEY, MAP_DEWFORD_TOWN
# 376 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_DEWFORD_BRINEY
# 377 "data/maps/Route104/scripts.pory"
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 0
# 378 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_DELIVERED_STEVEN_LETTER, Route104_EventScript_ArriveInDewford_2
# 381 "data/maps/Route104/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInDewford, MSGBOX_DEFAULT
Route104_EventScript_ArriveInDewford_1:
# 383 "data/maps/Route104/scripts.pory"
	releaseall
	end

Route104_EventScript_ArriveInDewford_2:
# 379 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_LandedInDewfordDeliverLetter, MSGBOX_DEFAULT
	goto Route104_EventScript_ArriveInDewford_1


# 387 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewfordBeforeDadCalls:
# 389 "data/maps/Route104/scripts.pory"
	walk_down
# 389 "data/maps/Route104/scripts.pory"
	walk_down
# 389 "data/maps/Route104/scripts.pory"
	walk_down
# 389 "data/maps/Route104/scripts.pory"
	walk_down
# 390 "data/maps/Route104/scripts.pory"
	run_down
# 390 "data/maps/Route104/scripts.pory"
	run_down
# 390 "data/maps/Route104/scripts.pory"
	run_down
# 390 "data/maps/Route104/scripts.pory"
	run_down
# 391 "data/maps/Route104/scripts.pory"
	sprint_down
# 391 "data/maps/Route104/scripts.pory"
	sprint_down
# 391 "data/maps/Route104/scripts.pory"
	sprint_down
# 391 "data/maps/Route104/scripts.pory"
	sprint_down
# 391 "data/maps/Route104/scripts.pory"
	sprint_down
# 391 "data/maps/Route104/scripts.pory"
	sprint_down
# 391 "data/maps/Route104/scripts.pory"
	sprint_down
# 391 "data/maps/Route104/scripts.pory"
	sprint_down
# 391 "data/maps/Route104/scripts.pory"
	sprint_down
# 391 "data/maps/Route104/scripts.pory"
	sprint_down
# 391 "data/maps/Route104/scripts.pory"
	sprint_down
# 391 "data/maps/Route104/scripts.pory"
	sprint_down
# 392 "data/maps/Route104/scripts.pory"
	run_down
# 392 "data/maps/Route104/scripts.pory"
	run_down
# 392 "data/maps/Route104/scripts.pory"
	run_down
# 392 "data/maps/Route104/scripts.pory"
	run_down
# 393 "data/maps/Route104/scripts.pory"
	run_right
# 393 "data/maps/Route104/scripts.pory"
	run_right
# 394 "data/maps/Route104/scripts.pory"
	sprint_right
# 394 "data/maps/Route104/scripts.pory"
	sprint_right
# 394 "data/maps/Route104/scripts.pory"
	sprint_right
# 394 "data/maps/Route104/scripts.pory"
	sprint_right
# 394 "data/maps/Route104/scripts.pory"
	sprint_right
# 394 "data/maps/Route104/scripts.pory"
	sprint_right
# 395 "data/maps/Route104/scripts.pory"
	run_right
# 395 "data/maps/Route104/scripts.pory"
	run_right
# 396 "data/maps/Route104/scripts.pory"
	run_down
# 396 "data/maps/Route104/scripts.pory"
	run_down
# 396 "data/maps/Route104/scripts.pory"
	run_down
# 396 "data/maps/Route104/scripts.pory"
	run_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
# 397 "data/maps/Route104/scripts.pory"
	sprint_down
	step_end

# 400 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewfordAfterDadCalls:
# 402 "data/maps/Route104/scripts.pory"
	sprint_down
# 402 "data/maps/Route104/scripts.pory"
	sprint_down
# 402 "data/maps/Route104/scripts.pory"
	sprint_down
# 402 "data/maps/Route104/scripts.pory"
	sprint_down
# 402 "data/maps/Route104/scripts.pory"
	sprint_down
# 402 "data/maps/Route104/scripts.pory"
	sprint_down
# 402 "data/maps/Route104/scripts.pory"
	sprint_down
# 402 "data/maps/Route104/scripts.pory"
	sprint_down
# 402 "data/maps/Route104/scripts.pory"
	sprint_down
# 402 "data/maps/Route104/scripts.pory"
	sprint_down
# 402 "data/maps/Route104/scripts.pory"
	sprint_down
# 402 "data/maps/Route104/scripts.pory"
	sprint_down
# 402 "data/maps/Route104/scripts.pory"
	sprint_down
# 402 "data/maps/Route104/scripts.pory"
	sprint_down
# 402 "data/maps/Route104/scripts.pory"
	sprint_down
# 402 "data/maps/Route104/scripts.pory"
	sprint_down
# 402 "data/maps/Route104/scripts.pory"
	sprint_down
# 402 "data/maps/Route104/scripts.pory"
	sprint_down
# 402 "data/maps/Route104/scripts.pory"
	sprint_down
# 402 "data/maps/Route104/scripts.pory"
	sprint_down
# 402 "data/maps/Route104/scripts.pory"
	sprint_down
# 402 "data/maps/Route104/scripts.pory"
	sprint_down
# 402 "data/maps/Route104/scripts.pory"
	sprint_down
# 402 "data/maps/Route104/scripts.pory"
	sprint_down
# 403 "data/maps/Route104/scripts.pory"
	run_down
# 403 "data/maps/Route104/scripts.pory"
	run_down
# 403 "data/maps/Route104/scripts.pory"
	run_down
# 403 "data/maps/Route104/scripts.pory"
	run_down
# 404 "data/maps/Route104/scripts.pory"
	run_right
# 404 "data/maps/Route104/scripts.pory"
	run_right
# 404 "data/maps/Route104/scripts.pory"
	run_right
# 404 "data/maps/Route104/scripts.pory"
	run_right
# 405 "data/maps/Route104/scripts.pory"
	sprint_right
# 405 "data/maps/Route104/scripts.pory"
	sprint_right
# 405 "data/maps/Route104/scripts.pory"
	sprint_right
# 405 "data/maps/Route104/scripts.pory"
	sprint_right
# 405 "data/maps/Route104/scripts.pory"
	sprint_right
# 405 "data/maps/Route104/scripts.pory"
	sprint_right
# 405 "data/maps/Route104/scripts.pory"
	sprint_right
# 405 "data/maps/Route104/scripts.pory"
	sprint_right
# 405 "data/maps/Route104/scripts.pory"
	sprint_right
# 405 "data/maps/Route104/scripts.pory"
	sprint_right
# 405 "data/maps/Route104/scripts.pory"
	sprint_right
# 405 "data/maps/Route104/scripts.pory"
	sprint_right
# 405 "data/maps/Route104/scripts.pory"
	sprint_right
# 405 "data/maps/Route104/scripts.pory"
	sprint_right
# 405 "data/maps/Route104/scripts.pory"
	sprint_right
# 405 "data/maps/Route104/scripts.pory"
	sprint_right
# 405 "data/maps/Route104/scripts.pory"
	sprint_right
# 405 "data/maps/Route104/scripts.pory"
	sprint_right
# 405 "data/maps/Route104/scripts.pory"
	sprint_right
# 405 "data/maps/Route104/scripts.pory"
	sprint_right
# 405 "data/maps/Route104/scripts.pory"
	sprint_right
# 405 "data/maps/Route104/scripts.pory"
	sprint_right
# 405 "data/maps/Route104/scripts.pory"
	sprint_right
# 405 "data/maps/Route104/scripts.pory"
	sprint_right
# 405 "data/maps/Route104/scripts.pory"
	sprint_right
# 405 "data/maps/Route104/scripts.pory"
	sprint_right
# 405 "data/maps/Route104/scripts.pory"
	sprint_right
# 405 "data/maps/Route104/scripts.pory"
	sprint_right
# 405 "data/maps/Route104/scripts.pory"
	sprint_right
# 405 "data/maps/Route104/scripts.pory"
	sprint_right
# 405 "data/maps/Route104/scripts.pory"
	sprint_right
# 405 "data/maps/Route104/scripts.pory"
	sprint_right
# 405 "data/maps/Route104/scripts.pory"
	sprint_right
# 405 "data/maps/Route104/scripts.pory"
	sprint_right
# 405 "data/maps/Route104/scripts.pory"
	sprint_right
# 405 "data/maps/Route104/scripts.pory"
	sprint_right
# 405 "data/maps/Route104/scripts.pory"
	sprint_right
# 405 "data/maps/Route104/scripts.pory"
	sprint_right
# 405 "data/maps/Route104/scripts.pory"
	sprint_right
# 405 "data/maps/Route104/scripts.pory"
	sprint_right
# 406 "data/maps/Route104/scripts.pory"
	run_right
# 406 "data/maps/Route104/scripts.pory"
	run_right
# 406 "data/maps/Route104/scripts.pory"
	run_right
# 406 "data/maps/Route104/scripts.pory"
	run_right
# 407 "data/maps/Route104/scripts.pory"
	walk_right
# 407 "data/maps/Route104/scripts.pory"
	walk_right
# 408 "data/maps/Route104/scripts.pory"
	walk_down
# 408 "data/maps/Route104/scripts.pory"
	walk_down
# 409 "data/maps/Route104/scripts.pory"
	run_down
# 409 "data/maps/Route104/scripts.pory"
	run_down
# 409 "data/maps/Route104/scripts.pory"
	run_down
# 409 "data/maps/Route104/scripts.pory"
	run_down
# 409 "data/maps/Route104/scripts.pory"
	run_down
# 409 "data/maps/Route104/scripts.pory"
	run_down
# 409 "data/maps/Route104/scripts.pory"
	run_down
# 409 "data/maps/Route104/scripts.pory"
	run_down
# 409 "data/maps/Route104/scripts.pory"
	run_down
# 409 "data/maps/Route104/scripts.pory"
	run_down
# 409 "data/maps/Route104/scripts.pory"
	run_down
# 409 "data/maps/Route104/scripts.pory"
	run_down
# 409 "data/maps/Route104/scripts.pory"
	run_down
# 409 "data/maps/Route104/scripts.pory"
	run_down
# 409 "data/maps/Route104/scripts.pory"
	run_down
# 410 "data/maps/Route104/scripts.pory"
	walk_down
# 410 "data/maps/Route104/scripts.pory"
	walk_down
	step_end

# 413 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewford:
# 414 "data/maps/Route104/scripts.pory"
	walk_down
# 414 "data/maps/Route104/scripts.pory"
	walk_down
# 414 "data/maps/Route104/scripts.pory"
	walk_down
# 414 "data/maps/Route104/scripts.pory"
	walk_down
# 415 "data/maps/Route104/scripts.pory"
	run_down
# 415 "data/maps/Route104/scripts.pory"
	run_down
# 415 "data/maps/Route104/scripts.pory"
	run_down
# 415 "data/maps/Route104/scripts.pory"
	run_down
# 416 "data/maps/Route104/scripts.pory"
	sprint_down
# 416 "data/maps/Route104/scripts.pory"
	sprint_down
# 416 "data/maps/Route104/scripts.pory"
	sprint_down
# 416 "data/maps/Route104/scripts.pory"
	sprint_down
# 416 "data/maps/Route104/scripts.pory"
	sprint_down
# 416 "data/maps/Route104/scripts.pory"
	sprint_down
# 416 "data/maps/Route104/scripts.pory"
	sprint_down
# 416 "data/maps/Route104/scripts.pory"
	sprint_down
# 416 "data/maps/Route104/scripts.pory"
	sprint_down
# 416 "data/maps/Route104/scripts.pory"
	sprint_down
# 416 "data/maps/Route104/scripts.pory"
	sprint_down
# 416 "data/maps/Route104/scripts.pory"
	sprint_down
# 417 "data/maps/Route104/scripts.pory"
	run_down
# 417 "data/maps/Route104/scripts.pory"
	run_down
# 417 "data/maps/Route104/scripts.pory"
	run_down
# 417 "data/maps/Route104/scripts.pory"
	run_down
# 418 "data/maps/Route104/scripts.pory"
	run_right
# 418 "data/maps/Route104/scripts.pory"
	run_right
# 419 "data/maps/Route104/scripts.pory"
	sprint_right
# 419 "data/maps/Route104/scripts.pory"
	sprint_right
# 419 "data/maps/Route104/scripts.pory"
	sprint_right
# 419 "data/maps/Route104/scripts.pory"
	sprint_right
# 419 "data/maps/Route104/scripts.pory"
	sprint_right
# 419 "data/maps/Route104/scripts.pory"
	sprint_right
# 420 "data/maps/Route104/scripts.pory"
	run_right
# 420 "data/maps/Route104/scripts.pory"
	run_right
# 421 "data/maps/Route104/scripts.pory"
	run_down
# 421 "data/maps/Route104/scripts.pory"
	run_down
# 421 "data/maps/Route104/scripts.pory"
	run_down
# 421 "data/maps/Route104/scripts.pory"
	run_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 422 "data/maps/Route104/scripts.pory"
	sprint_down
# 423 "data/maps/Route104/scripts.pory"
	run_down
# 423 "data/maps/Route104/scripts.pory"
	run_down
# 423 "data/maps/Route104/scripts.pory"
	run_down
# 423 "data/maps/Route104/scripts.pory"
	run_down
# 424 "data/maps/Route104/scripts.pory"
	run_right
# 424 "data/maps/Route104/scripts.pory"
	run_right
# 424 "data/maps/Route104/scripts.pory"
	run_right
# 424 "data/maps/Route104/scripts.pory"
	run_right
# 425 "data/maps/Route104/scripts.pory"
	sprint_right
# 425 "data/maps/Route104/scripts.pory"
	sprint_right
# 425 "data/maps/Route104/scripts.pory"
	sprint_right
# 425 "data/maps/Route104/scripts.pory"
	sprint_right
# 425 "data/maps/Route104/scripts.pory"
	sprint_right
# 425 "data/maps/Route104/scripts.pory"
	sprint_right
# 425 "data/maps/Route104/scripts.pory"
	sprint_right
# 425 "data/maps/Route104/scripts.pory"
	sprint_right
# 425 "data/maps/Route104/scripts.pory"
	sprint_right
# 425 "data/maps/Route104/scripts.pory"
	sprint_right
# 425 "data/maps/Route104/scripts.pory"
	sprint_right
# 425 "data/maps/Route104/scripts.pory"
	sprint_right
# 425 "data/maps/Route104/scripts.pory"
	sprint_right
# 425 "data/maps/Route104/scripts.pory"
	sprint_right
# 425 "data/maps/Route104/scripts.pory"
	sprint_right
# 425 "data/maps/Route104/scripts.pory"
	sprint_right
# 425 "data/maps/Route104/scripts.pory"
	sprint_right
# 425 "data/maps/Route104/scripts.pory"
	sprint_right
# 425 "data/maps/Route104/scripts.pory"
	sprint_right
# 425 "data/maps/Route104/scripts.pory"
	sprint_right
# 425 "data/maps/Route104/scripts.pory"
	sprint_right
# 425 "data/maps/Route104/scripts.pory"
	sprint_right
# 425 "data/maps/Route104/scripts.pory"
	sprint_right
# 425 "data/maps/Route104/scripts.pory"
	sprint_right
# 425 "data/maps/Route104/scripts.pory"
	sprint_right
# 425 "data/maps/Route104/scripts.pory"
	sprint_right
# 425 "data/maps/Route104/scripts.pory"
	sprint_right
# 425 "data/maps/Route104/scripts.pory"
	sprint_right
# 425 "data/maps/Route104/scripts.pory"
	sprint_right
# 425 "data/maps/Route104/scripts.pory"
	sprint_right
# 425 "data/maps/Route104/scripts.pory"
	sprint_right
# 425 "data/maps/Route104/scripts.pory"
	sprint_right
# 425 "data/maps/Route104/scripts.pory"
	sprint_right
# 425 "data/maps/Route104/scripts.pory"
	sprint_right
# 425 "data/maps/Route104/scripts.pory"
	sprint_right
# 425 "data/maps/Route104/scripts.pory"
	sprint_right
# 425 "data/maps/Route104/scripts.pory"
	sprint_right
# 425 "data/maps/Route104/scripts.pory"
	sprint_right
# 425 "data/maps/Route104/scripts.pory"
	sprint_right
# 425 "data/maps/Route104/scripts.pory"
	sprint_right
# 426 "data/maps/Route104/scripts.pory"
	run_right
# 426 "data/maps/Route104/scripts.pory"
	run_right
# 426 "data/maps/Route104/scripts.pory"
	run_right
# 426 "data/maps/Route104/scripts.pory"
	run_right
# 427 "data/maps/Route104/scripts.pory"
	walk_right
# 427 "data/maps/Route104/scripts.pory"
	walk_right
# 428 "data/maps/Route104/scripts.pory"
	walk_down
# 428 "data/maps/Route104/scripts.pory"
	walk_down
# 429 "data/maps/Route104/scripts.pory"
	run_down
# 429 "data/maps/Route104/scripts.pory"
	run_down
# 429 "data/maps/Route104/scripts.pory"
	run_down
# 429 "data/maps/Route104/scripts.pory"
	run_down
# 429 "data/maps/Route104/scripts.pory"
	run_down
# 429 "data/maps/Route104/scripts.pory"
	run_down
# 429 "data/maps/Route104/scripts.pory"
	run_down
# 429 "data/maps/Route104/scripts.pory"
	run_down
# 429 "data/maps/Route104/scripts.pory"
	run_down
# 429 "data/maps/Route104/scripts.pory"
	run_down
# 429 "data/maps/Route104/scripts.pory"
	run_down
# 429 "data/maps/Route104/scripts.pory"
	run_down
# 429 "data/maps/Route104/scripts.pory"
	run_down
# 429 "data/maps/Route104/scripts.pory"
	run_down
# 429 "data/maps/Route104/scripts.pory"
	run_down
# 430 "data/maps/Route104/scripts.pory"
	walk_down
# 430 "data/maps/Route104/scripts.pory"
	walk_down
	step_end

Route104_EventScript_Ivan::
# 434 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_IVAN, Route104_Text_IvanIntro, Route104_Text_IvanDefeat
# 435 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_IvanPostBattle, MSGBOX_AUTOCLOSE
	end


Route104_EventScript_Billy::
# 440 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_BILLY, Route104_Text_BillyIntro, Route104_Text_BillyDefeat
# 441 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BillyPostBattle, MSGBOX_AUTOCLOSE
	end


Route104_EventScript_Haley::
# 446 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_HALEY_1, Route104_Text_HaleyIntro, Route104_Text_HaleyDefeat, Route104_EventScript_TryRegisterHaleyAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route104_EventScript_Haley_2
# 452 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_HALEY_1
# 453 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_Haley_6
Route104_EventScript_Haley_4:
# 458 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
	release_end

Route104_EventScript_Haley_2:
# 448 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_HALEY_1, Route104_Text_HaleyRematchIntro, Route104_Text_HaleyRematchDefeat
# 449 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostRematch, MSGBOX_AUTOCLOSE
	end

Route104_EventScript_Haley_5:
# 454 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyRegister1, MSGBOX_DEFAULT
# 455 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_HALEY_1
	release_end

Route104_EventScript_Haley_6:
	specialvar VAR_RESULT, IsTrainerRegistered
# 0 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route104_EventScript_Haley_5
	goto Route104_EventScript_Haley_4


Route104_EventScript_TryRegisterHaleyAfterBattle::
# 463 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 464 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 465 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_TryRegisterHaleyAfterBattle_2
Route104_EventScript_TryRegisterHaleyAfterBattle_1:
	release_end

Route104_EventScript_TryRegisterHaleyAfterBattle_2:
# 466 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyRegister2, MSGBOX_DEFAULT
# 467 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_HALEY_1
	goto Route104_EventScript_TryRegisterHaleyAfterBattle_1


Route104_EventScript_Winston::
# 473 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_WINSTON_1, Route104_Text_WinstonIntro, Route104_Text_WinstonDefeat, Route104_EventScript_TryRegisterWinstonAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route104_EventScript_Winston_2
# 479 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_WINSTON_1
# 480 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_Winston_6
Route104_EventScript_Winston_4:
# 485 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
	release_end

Route104_EventScript_Winston_2:
# 475 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_WINSTON_1, Route104_Text_WinstonRematchIntro, Route104_Text_WinstonRematchDefeat
# 476 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostRematch, MSGBOX_AUTOCLOSE
	end

Route104_EventScript_Winston_5:
# 481 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonRegister1, MSGBOX_DEFAULT
# 482 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_WINSTON_1
	release_end

Route104_EventScript_Winston_6:
	specialvar VAR_RESULT, IsTrainerRegistered
# 0 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route104_EventScript_Winston_5
	goto Route104_EventScript_Winston_4


Route104_EventScript_TryRegisterWinstonAfterBattle::
# 490 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 491 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 492 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_TryRegisterWinstonAfterBattle_2
Route104_EventScript_TryRegisterWinstonAfterBattle_1:
	release_end

Route104_EventScript_TryRegisterWinstonAfterBattle_2:
# 493 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonRegister2, MSGBOX_DEFAULT
# 494 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_WINSTON_1
	goto Route104_EventScript_TryRegisterWinstonAfterBattle_1


Route104_EventScript_Cindy::
# 500 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_CINDY_1, Route104_Text_CindyIntro, Route104_Text_CindyDefeat, Route104_EventScript_TryRegisterCindyAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route104_EventScript_Cindy_2
# 506 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_CINDY_1
# 507 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_Cindy_6
Route104_EventScript_Cindy_4:
# 512 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostBattle, MSGBOX_DEFAULT
	release_end

Route104_EventScript_Cindy_2:
# 502 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_CINDY_1, Route104_Text_CindyRematchIntro, Route104_Text_CindyRematchDefeat
# 503 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostRematch, MSGBOX_AUTOCLOSE
	end

Route104_EventScript_Cindy_5:
# 508 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyRegister1, MSGBOX_DEFAULT
# 509 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_CINDY_1
	release_end

Route104_EventScript_Cindy_6:
	specialvar VAR_RESULT, IsTrainerRegistered
# 0 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route104_EventScript_Cindy_5
	goto Route104_EventScript_Cindy_4


Route104_EventScript_TryRegisterCindyAfterBattle::
# 517 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 518 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 519 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_TryRegisterCindyAfterBattle_2
Route104_EventScript_TryRegisterCindyAfterBattle_1:
	release_end

Route104_EventScript_TryRegisterCindyAfterBattle_2:
# 520 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyRegister2, MSGBOX_DEFAULT
# 521 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_CINDY_1
	goto Route104_EventScript_TryRegisterCindyAfterBattle_1


Route104_EventScript_Gina::
# 527 "data/maps/Route104/scripts.pory"
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104_Text_GinaIntro, Route104_Text_GinaDefeat, Route104_Text_GinaNotEnoughMons
# 528 "data/maps/Route104/scripts.pory"
	special GetPlayerBigGuyGirlString
# 529 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_GinaPostBattle, MSGBOX_DEFAULT
	release_end


Route104_EventScript_Mia::
# 534 "data/maps/Route104/scripts.pory"
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104_Text_MiaIntro, Route104_Text_MiaDefeat, Route104_Text_MiaNotEnoughMons
# 535 "data/maps/Route104/scripts.pory"
	special GetPlayerBigGuyGirlString
# 536 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MiaPostBattle, MSGBOX_DEFAULT
	release_end


Route104_EventScript_Darian::
# 541 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_DARIAN, Route104_Text_DarianIntro, Route104_Text_DarianDefeat
# 542 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_DarianPostBattle, MSGBOX_AUTOCLOSE
	end


# 57 "data/maps/Route104/scripts.pory"
Route104_EventScript_RivalTrigger_Movement_0:
# 57 "data/maps/Route104/scripts.pory"
	lock_look
# 57 "data/maps/Route104/scripts.pory"
	walk_down
# 57 "data/maps/Route104/scripts.pory"
	unlock_look
	step_end

# 114 "data/maps/Route104/scripts.pory"
Route104_EventScript_MayEncounter_Movement_0:
# 114 "data/maps/Route104/scripts.pory"
	delay_4
# 114 "data/maps/Route104/scripts.pory"
	step_faster_left
	step_end

# 119 "data/maps/Route104/scripts.pory"
Route104_EventScript_MayEncounter_Movement_1:
# 119 "data/maps/Route104/scripts.pory"
	walk_down
# 119 "data/maps/Route104/scripts.pory"
	face_right
	step_end

# 317 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewford_Movement_0:
# 317 "data/maps/Route104/scripts.pory"
	walk_down
# 317 "data/maps/Route104/scripts.pory"
	walk_down
	step_end

# 320 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewford_Movement_1:
# 320 "data/maps/Route104/scripts.pory"
	walk_left
# 320 "data/maps/Route104/scripts.pory"
	walk_down
# 320 "data/maps/Route104/scripts.pory"
	walk_down
	step_end

# 360 "data/maps/Route104/scripts.pory"
Route104_EventScript_ArriveInDewford_Movement_0:
# 360 "data/maps/Route104/scripts.pory"
	walk_down
# 360 "data/maps/Route104/scripts.pory"
	walk_left
# 360 "data/maps/Route104/scripts.pory"
	step_faster_right
	step_end

# 366 "data/maps/Route104/scripts.pory"
Route104_EventScript_ArriveInDewford_Movement_1:
# 366 "data/maps/Route104/scripts.pory"
	walk_down
# 366 "data/maps/Route104/scripts.pory"
	step_faster_left
	step_end

Route104_Text_BrineyLivesInSeasideCottage::
# 546 "data/maps/Route104/scripts.pory"
	.string "That seaside cottage is where\n"
	.string "MR. BRINEY lives.\p"
	.string "He was once a mighty sailor who never\n"
	.string "feared the sea, however stormy.$"

Route104_Text_WhatsItLikeAtBottomOfSea::
# 554 "data/maps/Route104/scripts.pory"
	.string "The sea, huh?\p"
	.string "I wonder what it's like at the bottom\n"
	.string "of the sea?$"

Route104_Text_ThrowBallAtWeakenedPokemon::
# 561 "data/maps/Route104/scripts.pory"
	.string "If you're going to throw a POKé BALL,\n"
	.string "weaken the wild POKéMON first.\p"
	.string "It will be easier to catch if it's been\n"
	.string "poisoned, burned, or lulled to sleep.$"

Route104_Text_OnlyThrowBallAtWildPokemon::
# 569 "data/maps/Route104/scripts.pory"
	.string "You're a thief if you try to steal\n"
	.string "someone else's POKéMON.\p"
	.string "You should throw POKé BALLS only at\n"
	.string "wild POKéMON.$"

Route104_Text_ImNotATrainer::
# 577 "data/maps/Route104/scripts.pory"
	.string "Oh, no, I'm not a TRAINER.\p"
	.string "But that's right, if TRAINERS lock eyes,\n"
	.string "it's a challenge to battle.\p"
	.string "If you don't want to battle, stay out\n"
	.string "of their sight.$"

Route104_Text_LikeFillingMouthWithSeedsTakeThis::
# 587 "data/maps/Route104/scripts.pory"
	.string "I like filling my mouth with seeds,\n"
	.string "then spitting them out fast!\p"
	.string "You can have this, so you try it out!\p"
	.string "Use it on a POKéMON, and it will learn\n"
	.string "a move for firing seeds rapidly.$"

Route104_Text_TMsAreOneTimeUse::
# 597 "data/maps/Route104/scripts.pory"
	.string "A word of advice!\p"
	.string "A TM, TECHNICAL MACHINE, is good only\n"
	.string "for one-time use.\p"
	.string "Once you use it, it's gone.\n"
	.string "Think twice before using it!$"

Route104_Text_DontNeedThisTakeIt::
# 607 "data/maps/Route104/scripts.pory"
	.string "This FLOWER SHOP started selling\n"
	.string "saplings recently.\p"
	.string "It made me so happy, I went overboard\n"
	.string "shopping.\p"
	.string "I don't need this WHITE HERB anymore.\n"
	.string "Would you take it, please?$"

Route104_Text_FlowerShopSellingSaplings::
# 618 "data/maps/Route104/scripts.pory"
	.string "This FLOWER SHOP started selling\n"
	.string "saplings recently.\p"
	.string "It made me so happy, I went overboard\n"
	.string "shopping. Where should I put them?$"

Route104_Text_MrBrineysCottage::
# 626 "data/maps/Route104/scripts.pory"
	.string "MR. BRINEY'S COTTAGE$"

Route104_Text_RouteSignPetalburg::
# 630 "data/maps/Route104/scripts.pory"
	.string "ROUTE 1O4\n"
	.string "{RIGHT_ARROW} PETALBURG CITY$"

Route104_Text_RouteSignRustboro::
# 635 "data/maps/Route104/scripts.pory"
	.string "ROUTE 1O4\n"
	.string "{UP_ARROW} RUSTBORO CITY$"

Route104_Text_PrettyPetalFlowShop::
# 640 "data/maps/Route104/scripts.pory"
	.string "PRETTY PETAL FLOWER SHOP$"

Route104_Text_TrainerTipsDoubleBattles::
# 644 "data/maps/Route104/scripts.pory"
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
# 658 "data/maps/Route104/scripts.pory"
	.string "{SPEAKER NAME_MAY}Oh, hi, {PLAYER}{KUN}!\p"
	.string "DEVON upgraded your POKéNAV with\n"
	.string "the MATCH CALL system, huh?\p"
	.string "We should register each other so we\n"
	.string "can get in contact anytime.$"

Route104_Text_RegisteredMay::
# 668 "data/maps/Route104/scripts.pory"
	.string "{PLAYER} registered MAY\n"
	.string "in the POKéNAV.$"

Route104_Text_MayHowsYourPokedex::
# 673 "data/maps/Route104/scripts.pory"
	.string "{SPEAKER NAME_MAY}Oh, by the way, {PLAYER}{KUN},\n"
	.string "how's your POKéDEX coming along?$"

Route104_Text_MayMinesDecentLetsBattle::
# 678 "data/maps/Route104/scripts.pory"
	.string "Mine's looking pretty decent.\n"
	.string "So…\l"
	.string "How about a little battle?$"

Route104_Text_MayHaventRaisedPokemon::
# 684 "data/maps/Route104/scripts.pory"
	.string "{SPEAKER NAME_MAY}Oh, what's the matter?\p"
	.string "Haven't you caught or raised your\n"
	.string "POKéMON very much?\p"
	.string "That's not very good for a TRAINER!$"

Route104_Text_MayLetsBattle::
# 693 "data/maps/Route104/scripts.pory"
	.string "{SPEAKER NAME_MAY}So, what do you think?\n"
	.string "How about a little battle here?$"

Route104_Text_MayIntro::
# 698 "data/maps/Route104/scripts.pory"
	.string "{SPEAKER NAME_MAY}You just became a TRAINER,\n"
	.string "{PLAYER}{KUN}. I'm not going to lose!$"

Route104_Text_MayDefeat::
# 703 "data/maps/Route104/scripts.pory"
	.string "Yikes!\n"
	.string "You're better than I expected!$"

Route104_Text_MayPostBattle::
# 708 "data/maps/Route104/scripts.pory"
	.string "{SPEAKER NAME_MAY}I can tell you've gotten pretty\n"
	.string "good with the way you handle POKéMON.\p"
	.string "But instead of only making them\n"
	.string "battle, you should be like MR. BRINEY.\p"
	.string "It's important to become friends with\n"
	.string "POKéMON, too.$"

Route104_Text_BrendanWeShouldRegister::
# 719 "data/maps/Route104/scripts.pory"
	.string "{SPEAKER NAME_BRENDAN}Oh, hey, {PLAYER}!\p"
	.string "Cool, you had DEVON install the MATCH\n"
	.string "CALL system on your POKéNAV!\p"
	.string "Let's register each other in our\n"
	.string "POKéNAVS so we can keep in touch.$"

Route104_Text_RegisteredBrendan::
# 729 "data/maps/Route104/scripts.pory"
	.string "{PLAYER} registered BRENDAN\n"
	.string "in the POKéNAV.$"

Route104_Text_BrendanHowsYourPokedex::
# 734 "data/maps/Route104/scripts.pory"
	.string "{SPEAKER NAME_BRENDAN}{PLAYER}, how's your POKéDEX?\n"
	.string "Have you filled in any pages yet?$"

Route104_Text_BrendanDoingGreatLetsBattle::
# 739 "data/maps/Route104/scripts.pory"
	.string "Me, I'm doing great!\p"
	.string "Want to check out how good I am with\n"
	.string "a battle?$"

Route104_Text_BrendanNoConfidence::
# 746 "data/maps/Route104/scripts.pory"
	.string "{SPEAKER NAME_BRENDAN}What's the matter? Don't have\n"
	.string "any confidence in your POKéMON?$"

Route104_Text_BrendanLetsBattle::
# 751 "data/maps/Route104/scripts.pory"
	.string "{SPEAKER NAME_BRENDAN}What's up?\n"
	.string "Want to have a battle with me?$"

Route104_Text_BrendanIntro::
# 756 "data/maps/Route104/scripts.pory"
	.string "{SPEAKER NAME_BRENDAN}I know you just became\n"
	.string "a TRAINER, but I won't go easy!$"

Route104_Text_BrendanDefeat::
# 761 "data/maps/Route104/scripts.pory"
	.string "Hmm…\n"
	.string "You're pretty good.$"

Route104_Text_BrendanPostBattle::
# 766 "data/maps/Route104/scripts.pory"
	.string "{SPEAKER NAME_BRENDAN}You've gotten pretty decent\n"
	.string "at handling POKéMON.\p"
	.string "But, you know, you shouldn't just be\n"
	.string "making POKéMON battle.\p"
	.string "Like MR. BRINEY, it's important to\n"
	.string "become friends with your POKéMON.$"
