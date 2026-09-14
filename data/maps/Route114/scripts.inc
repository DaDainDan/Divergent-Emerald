Route114_MapScripts::
# 2 "data/maps/Route114/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 11 "data/maps/Route114/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route114_MapScripts_MAP_SCRIPT_ON_LOAD
# 20 "data/maps/Route114/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route114_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route114_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route114/scripts.pory"
	compare VAR_SHOULD_END_ABNORMAL_WEATHER, 1
	goto_if_eq Route114_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Route114_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/Route114/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_NORTH
	goto_if_eq Route114_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 6 "data/maps/Route114/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_SOUTH
	goto_if_eq Route114_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
Route114_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	end

Route114_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/Route114/scripts.pory"
	call AbnormalWeather_EventScript_HideMapNamePopup
	goto Route114_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route114_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 7 "data/maps/Route114/scripts.pory"
	call AbnormalWeather_StartGroudonWeather
	goto Route114_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

Route114_MapScripts_MAP_SCRIPT_ON_LOAD:
# 12 "data/maps/Route114/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_NORTH
	goto_if_eq Route114_MapScripts_MAP_SCRIPT_ON_LOAD_2
Route114_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 15 "data/maps/Route114/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_SOUTH
	goto_if_eq Route114_MapScripts_MAP_SCRIPT_ON_LOAD_5
Route114_MapScripts_MAP_SCRIPT_ON_LOAD_4:
	end

Route114_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 13 "data/maps/Route114/scripts.pory"
	call AbnormalWeather_EventScript_PlaceTilesRoute114North
	goto Route114_MapScripts_MAP_SCRIPT_ON_LOAD_1

Route114_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 16 "data/maps/Route114/scripts.pory"
	call AbnormalWeather_EventScript_PlaceTilesRoute114South
	goto Route114_MapScripts_MAP_SCRIPT_ON_LOAD_4

Route114_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 21 "data/maps/Route114/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
	.2byte 0


Route114_EventScript_Man::
# 26 "data/maps/Route114/scripts.pory"
	lock_faceplayer
# 27 "data/maps/Route114/scripts.pory"
	dotimebasedevents
# 28 "data/maps/Route114/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_114_RECEIVED_BERRY, Route114_EventScript_Man_2
# 32 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LoveUsingBerryCrushShareBerry, MSGBOX_DEFAULT
# 33 "data/maps/Route114/scripts.pory"
	giverandomberry BERRY_ID_RAZZ, BERRY_ID_TAMATO
# 34 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route114_EventScript_Man_5
Route114_EventScript_Man_4:
# 37 "data/maps/Route114/scripts.pory"
	setflag FLAG_DAILY_ROUTE_114_RECEIVED_BERRY
# 38 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_TryBerryCrushWithFriends, MSGBOX_DEFAULT
	release_end

Route114_EventScript_Man_2:
# 29 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_FunToThinkAboutBerries, MSGBOX_DEFAULT
	release_end

Route114_EventScript_Man_5:
# 35 "data/maps/Route114/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto Route114_EventScript_Man_4


Route114_EventScript_RoarGentleman::
# 43 "data/maps/Route114/scripts.pory"
	lock_faceplayer
# 44 "data/maps/Route114/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_ROAR, Route114_EventScript_RoarGentleman_2
# 48 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_AllMyMonDoesIsRoarTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_TM_ROAR
# 0 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route114_EventScript_RoarGentleman_5
Route114_EventScript_RoarGentleman_4:
# 52 "data/maps/Route114/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROAR
# 53 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ExplainRoar, MSGBOX_DEFAULT
	release_end

Route114_EventScript_RoarGentleman_2:
# 45 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ExplainRoar, MSGBOX_DEFAULT
	release_end

Route114_EventScript_RoarGentleman_5:
# 50 "data/maps/Route114/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto Route114_EventScript_RoarGentleman_4


Route114_EventScript_Poochyena::
# 58 "data/maps/Route114/scripts.pory"
	lock_faceplayer
# 59 "data/maps/Route114/scripts.pory"
	waitse
# 60 "data/maps/Route114/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_ENCOUNTER
# 61 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_Poochyena, MSGBOX_DEFAULT
# 62 "data/maps/Route114/scripts.pory"
	waitmoncry
	release_end


Route114_EventScript_MeteorFallsSign::
# 67 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_MeteorFallsSign, MSGBOX_SIGN
	end


Route114_EventScript_FossilManiacsHouseSign::
# 72 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_FossilManiacsHouseSign, MSGBOX_SIGN
	end


Route114_EventScript_LanettesHouseSign::
# 77 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LanettesHouse, MSGBOX_SIGN
	end


Route114_EventScript_Lenny::
# 82 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_LENNY, Route114_Text_LennyIntro, Route114_Text_LennyDefeat
# 83 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LennyPostBattle, MSGBOX_AUTOCLOSE
	end


Route114_EventScript_Lucas::
# 88 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_LUCAS_1, Route114_Text_LucasIntro, Route114_Text_LucasDefeat
# 89 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LucasPostBattle, MSGBOX_AUTOCLOSE
	end


Route114_EventScript_Shane::
# 94 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_SHANE, Route114_Text_ShaneIntro, Route114_Text_ShaneDefeat
# 95 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ShanePostBattle, MSGBOX_AUTOCLOSE
	end


Route114_EventScript_Nancy::
# 100 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_NANCY, Route114_Text_NancyIntro, Route114_Text_NancyDefeat
# 101 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_NancyPostBattle, MSGBOX_AUTOCLOSE
	end


Route114_EventScript_Steve::
# 106 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_STEVE_1, Route114_Text_SteveIntro, Route114_Text_SteveDefeat, Route114_EventScript_RegisterSteve
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route114_EventScript_Steve_2
# 112 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_StevePostBattle, MSGBOX_DEFAULT
	release_end

Route114_EventScript_Steve_2:
# 108 "data/maps/Route114/scripts.pory"
	trainerbattle_rematch TRAINER_STEVE_1, Route114_Text_SteveRematchIntro, Route114_Text_SteveRematchDefeat
# 109 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_StevePostRematch, MSGBOX_AUTOCLOSE
	end


Route114_EventScript_RegisterSteve::
# 117 "data/maps/Route114/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 118 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 119 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_SteveRegister, MSGBOX_DEFAULT
# 120 "data/maps/Route114/scripts.pory"
	register_matchcall TRAINER_STEVE_1
	release_end


Route114_EventScript_Bernie::
# 125 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_BERNIE_1, Route114_Text_BernieIntro, Route114_Text_BernieDefeat, Route114_EventScript_RegisterBernie
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route114_EventScript_Bernie_2
# 131 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BerniePostBattle, MSGBOX_DEFAULT
	release_end

Route114_EventScript_Bernie_2:
# 127 "data/maps/Route114/scripts.pory"
	trainerbattle_rematch TRAINER_BERNIE_1, Route114_Text_BernieRematchIntro, Route114_Text_BernieRematchDefeat
# 128 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BerniePostRematch, MSGBOX_AUTOCLOSE
	end


Route114_EventScript_RegisterBernie::
# 136 "data/maps/Route114/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 137 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 138 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BernieRegister, MSGBOX_DEFAULT
# 139 "data/maps/Route114/scripts.pory"
	register_matchcall TRAINER_BERNIE_1
	release_end


Route114_EventScript_Claude::
# 144 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_CLAUDE, Route114_Text_ClaudeIntro, Route114_Text_ClaudeDefeat
# 145 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ClaudePostBattle, MSGBOX_AUTOCLOSE
	end


Route114_EventScript_Joel::
# 150 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_JOEL, Route114_Text_JoelIntro, Route114_Text_JoelDefeat
# 151 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_JoelPostBattle, MSGBOX_AUTOCLOSE
	end


Route114_EventScript_Tyra::
# 156 "data/maps/Route114/scripts.pory"
	trainerbattle_double TRAINER_TYRA_AND_IVY, Route114_Text_TyraIntro, Route114_Text_TyraDefeat, Route114_Text_TyraNotEnoughMons
# 157 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_TyraPostBattle, MSGBOX_AUTOCLOSE
	end


Route114_EventScript_Ivy::
# 162 "data/maps/Route114/scripts.pory"
	trainerbattle_double TRAINER_TYRA_AND_IVY, Route114_Text_IvyIntro, Route114_Text_IvyDefeat, Route114_Text_IvyNotEnoughMons
# 163 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_IvyPostBattle, MSGBOX_AUTOCLOSE
	end


Route114_EventScript_Angelina::
# 168 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_ANGELINA, Route114_Text_AngelinaIntro, Route114_Text_AngelinaDefeat
# 169 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_AngelinaPostBattle, MSGBOX_AUTOCLOSE
	end


Route114_EventScript_Charlotte::
# 174 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_CHARLOTTE, Route114_Text_CharlotteIntro, Route114_Text_CharlotteDefeat
# 175 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_CharlottePostBattle, MSGBOX_AUTOCLOSE
	end


Route114_EventScript_Kai::
# 180 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_KAI, Route114_Text_KaiIntro, Route114_Text_KaiDefeat
# 181 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_KaiPostBattle, MSGBOX_AUTOCLOSE
	end


Route114_EventScript_MoveTutor::
# 186 "data/maps/Route114/scripts.pory"
	lock_faceplayer
# 187 "data/maps/Route114/scripts.pory"
	goto_if_unset FLAG_MET_ROUTE_114_BIDEPAL_TUTOR, Route114_EventScript_MoveTutor_2
Route114_EventScript_MoveTutor_1:
# 191 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_MoveTutor_Text_0, MSGBOX_DEFAULT
# 192 "data/maps/Route114/scripts.pory"
	setvar VAR_TEMP_C, SCROLL_MULTI_BIPEDAL_MOVE_TUTOR
# 193 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8006, 0
# 194 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_ChooseBipedMove
	end

Route114_EventScript_MoveTutor_2:
# 188 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_MoveTutor_Text_0, MSGBOX_DEFAULT
# 189 "data/maps/Route114/scripts.pory"
	setflag FLAG_MET_ROUTE_114_BIDEPAL_TUTOR
	goto Route114_EventScript_MoveTutor_1


Route114_EventScript_ChooseBipedMove::
# 199 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BIPEDAL_MOVE_TUTOR
# 200 "data/maps/Route114/scripts.pory"
	special ShowScrollableMultichoice
# 201 "data/maps/Route114/scripts.pory"
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
# 202 "data/maps/Route114/scripts.pory"
	switch VAR_RESULT
# 203 "data/maps/Route114/scripts.pory"
	case 0, Route114_EventScript_ChooseBipedMove_3
# 204 "data/maps/Route114/scripts.pory"
	case 1, Route114_EventScript_ChooseBipedMove_4
# 205 "data/maps/Route114/scripts.pory"
	case 2, Route114_EventScript_ChooseBipedMove_5
# 206 "data/maps/Route114/scripts.pory"
	case 3, Route114_EventScript_ChooseBipedMove_6
# 207 "data/maps/Route114/scripts.pory"
	case 4, Route114_EventScript_ChooseBipedMove_7
# 208 "data/maps/Route114/scripts.pory"
	case 5, Route114_EventScript_ChooseBipedMove_8
# 209 "data/maps/Route114/scripts.pory"
	case 6, Route114_EventScript_ChooseBipedMove_9
# 210 "data/maps/Route114/scripts.pory"
	case 7, Route114_EventScript_ChooseBipedMove_10
# 211 "data/maps/Route114/scripts.pory"
	case 8, Route114_EventScript_ChooseBipedMove_11
# 212 "data/maps/Route114/scripts.pory"
	case 9, Route114_EventScript_ChooseBipedMove_12
# 213 "data/maps/Route114/scripts.pory"
	case 10, Route114_EventScript_ChooseBipedMove_13
# 214 "data/maps/Route114/scripts.pory"
	case MULTI_B_PRESSED, Route114_EventScript_ChooseBipedMove_13
Route114_EventScript_ChooseBipedMove_1:
# 217 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_ConfirmMoveSelection
	end

Route114_EventScript_ChooseBipedMove_3:
# 203 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8005, MOVE_HEADBUTT
	goto Route114_EventScript_ChooseBipedMove_1

Route114_EventScript_ChooseBipedMove_4:
# 204 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8005, MOVE_IRON_HEAD
	goto Route114_EventScript_ChooseBipedMove_1

Route114_EventScript_ChooseBipedMove_5:
# 205 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8005, MOVE_RIME_HEAD
	goto Route114_EventScript_ChooseBipedMove_1

Route114_EventScript_ChooseBipedMove_6:
# 206 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8005, MOVE_ZEN_HEADBUTT
	goto Route114_EventScript_ChooseBipedMove_1

Route114_EventScript_ChooseBipedMove_7:
# 207 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8005, MOVE_AQUA_TAIL
	goto Route114_EventScript_ChooseBipedMove_1

Route114_EventScript_ChooseBipedMove_8:
# 208 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8005, MOVE_DRAGON_TAIL
	goto Route114_EventScript_ChooseBipedMove_1

Route114_EventScript_ChooseBipedMove_9:
# 209 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8005, MOVE_POISON_TAIL
	goto Route114_EventScript_ChooseBipedMove_1

Route114_EventScript_ChooseBipedMove_10:
# 210 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8005, MOVE_IRON_TAIL
	goto Route114_EventScript_ChooseBipedMove_1

Route114_EventScript_ChooseBipedMove_11:
# 211 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8005, MOVE_LIGHTNING_TAIL
	goto Route114_EventScript_ChooseBipedMove_1

Route114_EventScript_ChooseBipedMove_12:
# 212 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8005, MOVE_TORCH_TAIL
	goto Route114_EventScript_ChooseBipedMove_1

Route114_EventScript_ChooseBipedMove_13:
# 215 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_ExitTutorMoveSelect
	goto Route114_EventScript_ChooseBipedMove_1


Route114_EventScript_ConfirmMoveSelection::
# 222 "data/maps/Route114/scripts.pory"
	special BufferBattleFrontierTutorMoveName
# 223 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_MoveTutor_Text_0, MSGBOX_YESNO
# 224 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route114_EventScript_ConfirmMoveSelection_2
Route114_EventScript_ConfirmMoveSelection_1:
	checkitem ITEM_BIG_MUSHROOM
# 0 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route114_EventScript_ConfirmMoveSelection_5
# 244 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_MoveTutor_Text_0, MSGBOX_DEFAULT
# 245 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_ExitTutorMoveSelect
	end

Route114_EventScript_ConfirmMoveSelection_2:
# 225 "data/maps/Route114/scripts.pory"
	message Route114_EventScript_MoveTutor_Text_0
# 226 "data/maps/Route114/scripts.pory"
	waitmessage
# 227 "data/maps/Route114/scripts.pory"
	setvar VAR_0x8006, 1
# 228 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_ChooseBipedMove
	goto Route114_EventScript_ConfirmMoveSelection_1

Route114_EventScript_ConfirmMoveSelection_5:
# 231 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_MoveTutor_Text_0, MSGBOX_DEFAULT
# 232 "data/maps/Route114/scripts.pory"
	fadescreen FADE_TO_BLACK
# 233 "data/maps/Route114/scripts.pory"
	special CloseBattleFrontierTutorWindow
# 234 "data/maps/Route114/scripts.pory"
	chooseboxmon SELECT_PC_MON_MOVE_TUTOR
# 235 "data/maps/Route114/scripts.pory"
	waitstate
# 236 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route114_EventScript_ConfirmMoveSelection_8
# 240 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_MoveTutor_Text_0, MSGBOX_DEFAULT
# 241 "data/maps/Route114/scripts.pory"
	removeitem ITEM_BIG_MUSHROOM, 1
	release_end

Route114_EventScript_ConfirmMoveSelection_8:
# 237 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_DeclineTutor, MSGBOX_DEFAULT
	release_end


Route114_EventScript_ExitTutorMoveSelect::
# 250 "data/maps/Route114/scripts.pory"
	special CloseBattleFrontierTutorWindow
# 251 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_DeclineTutor, MSGBOX_DEFAULT
	release_end


Route114_EventScript_MoveTutor_Text_0:
# 188 "data/maps/Route114/scripts.pory"
	.string "…$"

Route114_Text_DeclineTutor::
# 255 "data/maps/Route114/scripts.pory"
	.string "…$"

Route114_Text_AllMyMonDoesIsRoarTakeThis::
# 259 "data/maps/Route114/scripts.pory"
	.string "All my POKéMON does is ROAR…\n"
	.string "No one dares to come near me…\p"
	.string "Sigh… If you would, please take\n"
	.string "this TM away…$"

Route114_Text_ExplainRoar::
# 267 "data/maps/Route114/scripts.pory"
	.string "TM05 contains ROAR.\n"
	.string "A ROAR sends POKéMON scurrying.$"

Route114_Text_Poochyena::
# 272 "data/maps/Route114/scripts.pory"
	.string "Bow! Bowwow!$"

Route114_Text_MeteorFallsSign::
# 276 "data/maps/Route114/scripts.pory"
	.string "METEOR FALLS\n"
	.string "RUSTBORO CITY THROUGH HERE$"

Route114_Text_FossilManiacsHouseSign::
# 281 "data/maps/Route114/scripts.pory"
	.string "FOSSIL MANIAC'S HOUSE\n"
	.string "“Fossils gratefully accepted!”$"

Route114_Text_LanettesHouse::
# 286 "data/maps/Route114/scripts.pory"
	.string "LANETTE'S HOUSE$"

Route114_Text_HeadbuttDesc::
# 290 "data/maps/Route114/scripts.pory"
	.string "A slam with one's\n"
	.string "head which is\n"
	.string "likely to flinch.$"

Route114_Text_IronHeadDesc::
# 296 "data/maps/Route114/scripts.pory"
	.string "A slam with a head\n"
	.string "hard as steel.\n"
	.string "Likely to flinch.$"

Route114_Text_RimeHeadDesc::
# 302 "data/maps/Route114/scripts.pory"
	.string "A slam with a head\n"
	.string "made of ice.\n"
	.string "Likely to flinch.$"

Route114_Text_ZenHeadbuttDesc::
# 308 "data/maps/Route114/scripts.pory"
	.string "Charges mind power\n"
	.string "to raise Sp. Def.\n"
	.string "and headbutt foe.$"

Route114_Text_AquaTailDesc::
# 314 "data/maps/Route114/scripts.pory"
	.string "Slaps the foe with\n"
	.string "a tail of water.\n"
	.string "Can lower Speed.$"

Route114_Text_DragonTailDesc::
# 320 "data/maps/Route114/scripts.pory"
	.string "Slams the foe with\n"
	.string "a draconic tail.\n"
	.string "Likely lowers Def.$"

Route114_Text_PoisonTailDesc::
# 326 "data/maps/Route114/scripts.pory"
	.string "Slaps the foe with\n"
	.string "a poisonous tail.\n"
	.string "Can cause poison.$"

Route114_Text_IronTailDesc::
# 332 "data/maps/Route114/scripts.pory"
	.string "Slams the foe with\n"
	.string "a metallic tail.\n"
	.string "Can lower Def.$"

Route114_Text_LightningTailDesc::
# 338 "data/maps/Route114/scripts.pory"
	.string "Slaps the foe with\n"
	.string "an electrified tail\n"
	.string "that can paralyze.$"

Route114_Text_TorchTailDesc::
# 344 "data/maps/Route114/scripts.pory"
	.string "Slaps the foe with\n"
	.string "a fiery tail.\n"
	.string "Can cause burn.$"
