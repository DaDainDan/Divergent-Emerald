ThreeIsland_Frlg_MapScripts::
# 2 "data/maps/ThreeIsland_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ThreeIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ThreeIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/ThreeIsland_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_THREE_ISLAND
# 4 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto_if_set FLAG_RESCUED_LOSTELLE, ThreeIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
ThreeIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 7 "data/maps/ThreeIsland_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_THREE_ISLAND, 4
	goto_if_eq ThreeIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
ThreeIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	end

ThreeIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/ThreeIsland_Frlg/scripts.pory"
	setflag FLAG_HIDE_THREE_ISLAND_ANTIBIKERS
	goto ThreeIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ThreeIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 8 "data/maps/ThreeIsland_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_THREE_ISLAND_ANTIBIKER1, MOVEMENT_TYPE_LOOK_AROUND
# 9 "data/maps/ThreeIsland_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_THREE_ISLAND_ANTIBIKER2, MOVEMENT_TYPE_LOOK_AROUND
	goto ThreeIsland_Frlg_MapScripts_MAP_SCRIPT_ON_TRANSITION_4


ThreeIsland_EventScript_Biker::
# 16 "data/maps/ThreeIsland_Frlg/scripts.pory"
	lock
# 17 "data/maps/ThreeIsland_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 2
# 18 "data/maps/ThreeIsland_Frlg/scripts.pory"
	call ThreeIsland_EventScript_BikerArgumentScene
	release_end


ThreeIsland_EventScript_AntiBiker1::
# 23 "data/maps/ThreeIsland_Frlg/scripts.pory"
	lock
# 24 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_FULL_RESTORE_FROM_THREE_ISLAND_DEFENDER, ThreeIsland_EventScript_AntiBiker1_2
# 29 "data/maps/ThreeIsland_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_THREE_ISLAND, 4
	goto_if_eq ThreeIsland_EventScript_AntiBiker1_3
# 43 "data/maps/ThreeIsland_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 44 "data/maps/ThreeIsland_Frlg/scripts.pory"
	call ThreeIsland_EventScript_BikerArgumentScene
ThreeIsland_EventScript_AntiBiker1_1:
	release_end

ThreeIsland_EventScript_AntiBiker1_2:
# 25 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_ANTIBIKER1, Common_Movement_FacePlayer
# 26 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 27 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_YouveGotImpressiveMons
	goto ThreeIsland_EventScript_AntiBiker1_1

ThreeIsland_EventScript_AntiBiker1_3:
# 30 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_ANTIBIKER1, Common_Movement_FacePlayer
# 31 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 32 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_ThankYouOhYourMonGotHurt
	checkitemspace ITEM_FULL_RESTORE
# 0 "data/maps/ThreeIsland_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ThreeIsland_EventScript_AntiBiker1_8
# 37 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgreceiveditem ThreeIsland_Text_GivenFullRestore, ITEM_FULL_RESTORE
# 38 "data/maps/ThreeIsland_Frlg/scripts.pory"
	additem ITEM_FULL_RESTORE
# 39 "data/maps/ThreeIsland_Frlg/scripts.pory"
	setflag FLAG_GOT_FULL_RESTORE_FROM_THREE_ISLAND_DEFENDER
# 40 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_YouveGotImpressiveMons
	goto ThreeIsland_EventScript_AntiBiker1_1

ThreeIsland_EventScript_AntiBiker1_8:
# 34 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_OhYourBagIsFull
	release_end


ThreeIsland_EventScript_BikerArgumentScene::
# 50 "data/maps/ThreeIsland_Frlg/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq ThreeIsland_EventScript_BikerArgumentScene_2
# 50 "data/maps/ThreeIsland_Frlg/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq ThreeIsland_EventScript_BikerArgumentScene_2
ThreeIsland_EventScript_BikerArgumentScene_1:
# 54 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_ANTIBIKER1, Common_Movement_StepRight
# 55 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 56 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_GoBackToKanto
# 57 "data/maps/ThreeIsland_Frlg/scripts.pory"
	call ThreeIsland_EventScript_PlayerFaceBiker
# 58 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER1, Common_Movement_StepLeft
# 59 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 60 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_BossIsOnHisWay
# 61 "data/maps/ThreeIsland_Frlg/scripts.pory"
	switch VAR_TEMP_1
# 62 "data/maps/ThreeIsland_Frlg/scripts.pory"
	case 0, ThreeIsland_EventScript_BikerArgumentScene_8
# 63 "data/maps/ThreeIsland_Frlg/scripts.pory"
	case 1, ThreeIsland_EventScript_BikerArgumentScene_8
# 65 "data/maps/ThreeIsland_Frlg/scripts.pory"
	case 2, ThreeIsland_EventScript_BikerArgumentScene_9
ThreeIsland_EventScript_BikerArgumentScene_6:
# 72 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 73 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_ANTIBIKER2, Common_Movement_StepRight
# 74 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 75 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_GetOffIslandNow
# 76 "data/maps/ThreeIsland_Frlg/scripts.pory"
	call ThreeIsland_EventScript_PlayerFaceBiker
# 77 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER3, Common_Movement_StepLeft
# 78 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 79 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_WhosGonnaMakeMe
	return

ThreeIsland_EventScript_BikerArgumentScene_2:
# 51 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterLeft
# 52 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
	goto ThreeIsland_EventScript_BikerArgumentScene_1

ThreeIsland_EventScript_BikerArgumentScene_8:
# 64 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
	goto ThreeIsland_EventScript_BikerArgumentScene_6

ThreeIsland_EventScript_BikerArgumentScene_9:
# 66 "data/maps/ThreeIsland_Frlg/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 67 "data/maps/ThreeIsland_Frlg/scripts.pory"
	compare VAR_0x8004, 9
	goto_if_ge ThreeIsland_EventScript_BikerArgumentScene_11
ThreeIsland_EventScript_BikerArgumentScene_10:
# 70 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
	goto ThreeIsland_EventScript_BikerArgumentScene_6

ThreeIsland_EventScript_BikerArgumentScene_11:
# 68 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterLeft
	goto ThreeIsland_EventScript_BikerArgumentScene_10


ThreeIsland_EventScript_PlayerFaceDown::
# 85 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterDown
# 86 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
	return


ThreeIsland_EventScript_PlayerFaceBiker::
# 91 "data/maps/ThreeIsland_Frlg/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 92 "data/maps/ThreeIsland_Frlg/scripts.pory"
	switch VAR_TEMP_1
# 93 "data/maps/ThreeIsland_Frlg/scripts.pory"
	case 0, ThreeIsland_EventScript_PlayerFaceBiker_3
# 94 "data/maps/ThreeIsland_Frlg/scripts.pory"
	case 1, ThreeIsland_EventScript_PlayerFaceBiker_3
# 95 "data/maps/ThreeIsland_Frlg/scripts.pory"
	case 2, ThreeIsland_EventScript_PlayerFaceBiker_4
ThreeIsland_EventScript_PlayerFaceBiker_1:
# 101 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
	return

ThreeIsland_EventScript_PlayerFaceBiker_3:
# 94 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterRight
	goto ThreeIsland_EventScript_PlayerFaceBiker_1

ThreeIsland_EventScript_PlayerFaceBiker_4:
# 96 "data/maps/ThreeIsland_Frlg/scripts.pory"
	compare VAR_0x8004, 9
	goto_if_ge ThreeIsland_EventScript_PlayerFaceBiker_6
ThreeIsland_EventScript_PlayerFaceBiker_5:
# 99 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterRight
	goto ThreeIsland_EventScript_PlayerFaceBiker_1

ThreeIsland_EventScript_PlayerFaceBiker_6:
# 97 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterUp
	goto ThreeIsland_EventScript_PlayerFaceBiker_5


ThreeIsland_EventScript_AntiBiker2::
# 106 "data/maps/ThreeIsland_Frlg/scripts.pory"
	lock
# 107 "data/maps/ThreeIsland_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_THREE_ISLAND, 4
	goto_if_eq ThreeIsland_EventScript_AntiBiker2_2
# 113 "data/maps/ThreeIsland_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 114 "data/maps/ThreeIsland_Frlg/scripts.pory"
	call ThreeIsland_EventScript_BikerArgumentScene
	release_end

ThreeIsland_EventScript_AntiBiker2_2:
# 108 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_ANTIBIKER2, Common_Movement_FacePlayer
# 109 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 110 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_LostelleWentOffTowardsBondBridge
	release_end


ThreeIsland_EventScript_BikerBossIntroTrigger::
# 119 "data/maps/ThreeIsland_Frlg/scripts.pory"
	lockall
# 120 "data/maps/ThreeIsland_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 121 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_ANTIBIKER1, Common_Movement_StepRight
# 122 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 123 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_AreYouBossGoBackToKanto
# 124 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_PAXTON, Common_Movement_StepLeft
# 125 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 126 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_JustGotHerePal
# 127 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_ANTIBIKER1, Common_Movement_StepRight
# 128 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 129 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_FollowersRaisingHavoc
# 130 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_PAXTON, Common_Movement_StepLeft
# 131 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 132 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_OughtToBeThankingUs
# 133 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_ANTIBIKER1, Common_Movement_StepRight
# 134 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 135 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_YouCowardsToughInPack
# 136 "data/maps/ThreeIsland_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_THREE_ISLAND, 3
# 137 "data/maps/ThreeIsland_Frlg/scripts.pory"
	releaseall
	end


ThreeIsland_EventScript_BattleBikersTriggerLeft::
# 142 "data/maps/ThreeIsland_Frlg/scripts.pory"
	lockall
# 143 "data/maps/ThreeIsland_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 144 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto ThreeIsland_EventScript_BattleBikersScene
	end


ThreeIsland_EventScript_BattleBikersTriggerMidLeft::
# 149 "data/maps/ThreeIsland_Frlg/scripts.pory"
	lockall
# 150 "data/maps/ThreeIsland_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 151 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto ThreeIsland_EventScript_BattleBikersScene
	end


ThreeIsland_EventScript_BattleBikersTriggerMid::
# 156 "data/maps/ThreeIsland_Frlg/scripts.pory"
	lockall
# 157 "data/maps/ThreeIsland_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 2
# 158 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto ThreeIsland_EventScript_BattleBikersScene
	end


ThreeIsland_EventScript_BattleBikersTriggerMidRight::
# 163 "data/maps/ThreeIsland_Frlg/scripts.pory"
	lockall
# 164 "data/maps/ThreeIsland_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 3
# 165 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto ThreeIsland_EventScript_BattleBikersScene
	end


ThreeIsland_EventScript_BattleBikersTriggerRight::
# 170 "data/maps/ThreeIsland_Frlg/scripts.pory"
	lockall
# 171 "data/maps/ThreeIsland_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 4
# 172 "data/maps/ThreeIsland_Frlg/scripts.pory"
	goto ThreeIsland_EventScript_BattleBikersScene
	end


ThreeIsland_EventScript_BattleBikersScene::
# 177 "data/maps/ThreeIsland_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 178 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER1, Common_Movement_StepFasterDown
# 179 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 180 "data/maps/ThreeIsland_Frlg/scripts.pory"
	playse SE_PIN
# 181 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER1, Common_Movement_ExclamationMark
# 182 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 183 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER1, Common_Movement_Delay48
# 184 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 185 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER1, Common_Movement_WalkDown
# 186 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 187 "data/maps/ThreeIsland_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_BOY, 0
# 188 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_WannaMakeSomethingOfYourStaring, MSGBOX_YESNO
# 189 "data/maps/ThreeIsland_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ThreeIsland_EventScript_BattleBikersScene_2
# 200 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_Biker1Intro
# 201 "data/maps/ThreeIsland_Frlg/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_THREE_ISLAND_BIKER1
# 202 "data/maps/ThreeIsland_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_BIKER_GOON, ThreeIsland_Text_Biker1Defeat
# 203 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER1, Common_Movement_StepDown
# 204 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 205 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_Biker1PostBattle
# 206 "data/maps/ThreeIsland_Frlg/scripts.pory"
	closemessage
# 207 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER2, Common_Movement_WalkDown
# 208 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 209 "data/maps/ThreeIsland_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_BOY, 0
# 210 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_Biker2Intro
# 211 "data/maps/ThreeIsland_Frlg/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_THREE_ISLAND_BIKER2
# 212 "data/maps/ThreeIsland_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_BIKER_GOON_2, ThreeIsland_Text_Biker2Defeat
# 213 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER2, Common_Movement_StepDown
# 214 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 215 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_Biker2PostBattle
# 216 "data/maps/ThreeIsland_Frlg/scripts.pory"
	closemessage
# 217 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER3, Common_Movement_WalkDown
# 218 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 219 "data/maps/ThreeIsland_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_BOY, 0
# 220 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_Biker3Intro
# 221 "data/maps/ThreeIsland_Frlg/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_THREE_ISLAND_BIKER3
# 222 "data/maps/ThreeIsland_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_BIKER_GOON_3, ThreeIsland_Text_Biker3Defeat
# 223 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER3, Common_Movement_StepFasterLeft
# 224 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 225 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER4, Common_Movement_StepFasterDown
# 226 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER5, Common_Movement_StepFasterDown
# 227 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 228 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_Biker3PostBattle
# 229 "data/maps/ThreeIsland_Frlg/scripts.pory"
	closemessage
# 230 "data/maps/ThreeIsland_Frlg/scripts.pory"
	delay 45
# 231 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER3, Common_Movement_StepFasterDown
# 232 "data/maps/ThreeIsland_Frlg/scripts.pory"
	switch VAR_TEMP_1
# 233 "data/maps/ThreeIsland_Frlg/scripts.pory"
	case 0, ThreeIsland_EventScript_BattleBikersScene_6
# 235 "data/maps/ThreeIsland_Frlg/scripts.pory"
	case 1, ThreeIsland_EventScript_BattleBikersScene_7
# 237 "data/maps/ThreeIsland_Frlg/scripts.pory"
	case 2, ThreeIsland_EventScript_BattleBikersScene_8
# 240 "data/maps/ThreeIsland_Frlg/scripts.pory"
	case 3, ThreeIsland_EventScript_BattleBikersScene_9
# 243 "data/maps/ThreeIsland_Frlg/scripts.pory"
	case 4, ThreeIsland_EventScript_BattleBikersScene_10
ThreeIsland_EventScript_BattleBikersScene_4:
# 247 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 248 "data/maps/ThreeIsland_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_BOY, 0
# 249 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_PaxtonIntro
# 250 "data/maps/ThreeIsland_Frlg/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_PAXTON
# 251 "data/maps/ThreeIsland_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_CUE_BALL_PAXTON, ThreeIsland_Text_PaxtonDefeat
# 252 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_PaxtonPostBattle
# 253 "data/maps/ThreeIsland_Frlg/scripts.pory"
	closemessage
# 254 "data/maps/ThreeIsland_Frlg/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 255 "data/maps/ThreeIsland_Frlg/scripts.pory"
	removeobject LOCALID_PAXTON
# 256 "data/maps/ThreeIsland_Frlg/scripts.pory"
	removeobject LOCALID_THREE_ISLAND_BIKER1
# 257 "data/maps/ThreeIsland_Frlg/scripts.pory"
	removeobject LOCALID_THREE_ISLAND_BIKER2
# 258 "data/maps/ThreeIsland_Frlg/scripts.pory"
	removeobject LOCALID_THREE_ISLAND_BIKER3
# 259 "data/maps/ThreeIsland_Frlg/scripts.pory"
	removeobject LOCALID_THREE_ISLAND_BIKER4
# 260 "data/maps/ThreeIsland_Frlg/scripts.pory"
	removeobject LOCALID_THREE_ISLAND_BIKER5
# 261 "data/maps/ThreeIsland_Frlg/scripts.pory"
	removeobject LOCALID_THREE_ISLAND_BIKER6
# 262 "data/maps/ThreeIsland_Frlg/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 263 "data/maps/ThreeIsland_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_THREE_ISLAND, 4
# 264 "data/maps/ThreeIsland_Frlg/scripts.pory"
	releaseall
	end

ThreeIsland_EventScript_BattleBikersScene_2:
# 190 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_ThatsSmart
# 191 "data/maps/ThreeIsland_Frlg/scripts.pory"
	closemessage
# 192 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 193 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 194 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_THREE_ISLAND_BIKER1, ThreeIsland_EventScript_BattleBikersScene_Movement_0
# 195 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmovement 0
# 196 "data/maps/ThreeIsland_Frlg/scripts.pory"
	fadedefaultbgm
# 197 "data/maps/ThreeIsland_Frlg/scripts.pory"
	releaseall
	end

ThreeIsland_EventScript_BattleBikersScene_6:
# 234 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_PAXTON, ThreeIsland_EventScript_BattleBikersScene_Movement_1
	goto ThreeIsland_EventScript_BattleBikersScene_4

ThreeIsland_EventScript_BattleBikersScene_7:
# 236 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_PAXTON, Common_Movement_WalkDown
	goto ThreeIsland_EventScript_BattleBikersScene_4

ThreeIsland_EventScript_BattleBikersScene_8:
# 238 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_PAXTON, ThreeIsland_EventScript_BattleBikersScene_Movement_2
# 239 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, ThreeIsland_EventScript_BattleBikersScene_Movement_3
	goto ThreeIsland_EventScript_BattleBikersScene_4

ThreeIsland_EventScript_BattleBikersScene_9:
# 241 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, ThreeIsland_EventScript_BattleBikersScene_Movement_3
# 242 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_PAXTON, ThreeIsland_EventScript_BattleBikersScene_Movement_4
	goto ThreeIsland_EventScript_BattleBikersScene_4

ThreeIsland_EventScript_BattleBikersScene_10:
# 244 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, ThreeIsland_EventScript_BattleBikersScene_Movement_3
# 245 "data/maps/ThreeIsland_Frlg/scripts.pory"
	applymovement LOCALID_PAXTON, ThreeIsland_EventScript_BattleBikersScene_Movement_5
	goto ThreeIsland_EventScript_BattleBikersScene_4


ThreeIsland_EventScript_Woman::
# 269 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_WouldntWantToSeeBikersHereAgain, MSGBOX_NPC
	end


ThreeIsland_EventScript_LittleBoy::
# 274 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_WhenDodouEvolvesGoingToPlayGame, MSGBOX_NPC
	end


ThreeIsland_EventScript_Doduo::
# 279 "data/maps/ThreeIsland_Frlg/scripts.pory"
	lock_faceplayer
# 280 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitse
# 281 "data/maps/ThreeIsland_Frlg/scripts.pory"
	playmoncry SPECIES_DODUO, CRY_MODE_NORMAL
# 282 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_Doduo
# 283 "data/maps/ThreeIsland_Frlg/scripts.pory"
	waitmoncry
	release_end


ThreeIsland_EventScript_IslandSign::
# 288 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_IslandSign, MSGBOX_SIGN
	end


ThreeIsland_EventScript_Biker6::
# 293 "data/maps/ThreeIsland_Frlg/scripts.pory"
	msgbox ThreeIsland_Text_IslandBelongsToUs, MSGBOX_NPC
	end


# 194 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_BattleBikersScene_Movement_0:
# 194 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_up
# 194 "data/maps/ThreeIsland_Frlg/scripts.pory"
	step_faster_left
	step_end

# 234 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_BattleBikersScene_Movement_1:
# 234 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_down
# 234 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_left
# 234 "data/maps/ThreeIsland_Frlg/scripts.pory"
	step_faster_down
	step_end

# 238 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_BattleBikersScene_Movement_2:
# 238 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_down
# 238 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_down
# 238 "data/maps/ThreeIsland_Frlg/scripts.pory"
	step_faster_right
	step_end

# 239 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_BattleBikersScene_Movement_3:
# 239 "data/maps/ThreeIsland_Frlg/scripts.pory"
	delay_16
# 239 "data/maps/ThreeIsland_Frlg/scripts.pory"
	delay_16
# 239 "data/maps/ThreeIsland_Frlg/scripts.pory"
	step_faster_left
	step_end

# 242 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_BattleBikersScene_Movement_4:
# 242 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_down
# 242 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_down
# 242 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_right
# 242 "data/maps/ThreeIsland_Frlg/scripts.pory"
	step_faster_right
	step_end

# 245 "data/maps/ThreeIsland_Frlg/scripts.pory"
ThreeIsland_EventScript_BattleBikersScene_Movement_5:
# 245 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_down
# 245 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_down
# 245 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_right
# 245 "data/maps/ThreeIsland_Frlg/scripts.pory"
	walk_right
# 245 "data/maps/ThreeIsland_Frlg/scripts.pory"
	step_faster_right
	step_end

ThreeIsland_Text_IslandSign::
# 297 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "THREE ISLAND\n"
	.string "Kin Island of Family Bonding$"

ThreeIsland_Text_IslandBelongsToUs::
# 302 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Hyahoo!\p"
	.string "From this day on, this island\n"
	.string "belongs to us!$"

ThreeIsland_Text_GoBackToKanto::
# 309 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "We don't need you people bringing\n"
	.string "your noise and trouble here!\p"
	.string "We're asking you to go back to\n"
	.string "KANTO!$"

ThreeIsland_Text_BossIsOnHisWay::
# 317 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Hey, go cry somewhere else.\n"
	.string "Our boss is on his way.\p"
	.string "When he gets here, we'll give you\n"
	.string "a k-rad motorbike show you won't\l"
	.string "soon forget!$"

ThreeIsland_Text_GetOffIslandNow::
# 326 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "W-what!? Not on your life!\n"
	.string "Get off the island now!$"

ThreeIsland_Text_WhosGonnaMakeMe::
# 331 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Who's gonna make me?$"

ThreeIsland_Text_AreYouBossGoBackToKanto::
# 335 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Are you the boss?\n"
	.string "Go back to KANTO right now!$"

ThreeIsland_Text_JustGotHerePal::
# 340 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Hah?\p"
	.string "I just got here, pal.\p"
	.string "What's with the hostile attitude?\n"
	.string "It's mighty cold of you!$"

ThreeIsland_Text_FollowersRaisingHavoc::
# 349 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Your gang of followers have been\n"
	.string "raising havoc on their bikes.\p"
	.string "Do you have any idea how much\n"
	.string "trouble they've caused us on the\l"
	.string "island?$"

ThreeIsland_Text_OughtToBeThankingUs::
# 358 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "No, man, I don't get it at all.\p"
	.string "Look at this place.\n"
	.string "What do you do for entertainment?\p"
	.string "You ought to be thanking us for\n"
	.string "livening up this sleepy village.\p"
	.string "But hey, if you insist, you can try\n"
	.string "making us leave.$"

ThreeIsland_Text_YouCowardsToughInPack::
# 371 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Grr… You cowards…\n"
	.string "So tough in a pack…$"

ThreeIsland_Text_WannaMakeSomethingOfYourStaring::
# 376 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "You, what are you staring at?\n"
	.string "Don't you know it's not polite?\p"
	.string "You wanna make something of it\n"
	.string "or what?$"

ThreeIsland_Text_ThatsSmart::
# 384 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "That's smart.\n"
	.string "Keep your nose out of this.$"

ThreeIsland_Text_Biker1Intro::
# 389 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Heh, I like your guts.\n"
	.string "You'll be losing money to me, but…$"

ThreeIsland_Text_Biker1Defeat::
# 394 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Wha…\n"
	.string "What is this kid?!$"

ThreeIsland_Text_Biker1PostBattle::
# 399 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Aww, man…\n"
	.string "Don't you dare laugh!$"

ThreeIsland_Text_Biker2Intro::
# 404 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Aren't you from KANTO?\n"
	.string "You should be on our side!$"

ThreeIsland_Text_Biker2Defeat::
# 409 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Stop fooling around!$"

ThreeIsland_Text_Biker2PostBattle::
# 413 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "What's the matter with you,\n"
	.string "getting all hot like that?\p"
	.string "Totally uncool, man!$"

ThreeIsland_Text_Biker3Intro::
# 420 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "We invited the boss out here,\n"
	.string "but you had to mess it up!\p"
	.string "You embarrassed us, man!$"

ThreeIsland_Text_Biker3Defeat::
# 427 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "… … …   … … …$"

ThreeIsland_Text_Biker3PostBattle::
# 431 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Boss, I'm telling you, you've gotta\n"
	.string "do something about this kid!$"

ThreeIsland_Text_PaxtonIntro::
# 436 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "I've been watching you, and I'd say\n"
	.string "you've done enough.\p"
	.string "What are you, their friend or\n"
	.string "something?\p"
	.string "Then I guess you'll be battling me\n"
	.string "in their place.$"

ThreeIsland_Text_PaxtonDefeat::
# 447 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "All right, enough!\n"
	.string "We'll leave like you wanted!\p"
	.string "We'll be happy to see the last of\n"
	.string "this boring island!$"

ThreeIsland_Text_PaxtonPostBattle::
# 455 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Humph! Yeah, go right on hanging\n"
	.string "around with these hayseeds!$"

ThreeIsland_Text_ThankYouOhYourMonGotHurt::
# 460 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Thank you! Those goons were\n"
	.string "nothing but bad trouble.\p"
	.string "Oh, look, your POKéMON got hurt\n"
	.string "on my account.$"

ThreeIsland_Text_GivenFullRestore::
# 468 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "{PLAYER} was given\n"
	.string "a FULL RESTORE.$"

ThreeIsland_Text_OhYourBagIsFull::
# 473 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "Oh?\n"
	.string "Your BAG is full.$"

ThreeIsland_Text_YouveGotImpressiveMons::
# 478 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "You've got seriously impressive\n"
	.string "POKéMON with you.$"

ThreeIsland_Text_LostelleWentOffTowardsBondBridge::
# 483 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "It'd be fantastic if someone as\n"
	.string "strong as you lived here.\p"
	.string "I hope you'll at least stay here\n"
	.string "a while.\p"
	.string "…I beg your pardon?\n"
	.string "You're looking for LOSTELLE?\p"
	.string "LOSTELLE went off towards BOND\n"
	.string "BRIDGE a while ago.$"

ThreeIsland_Text_WouldntWantToSeeBikersHereAgain::
# 497 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "THREE ISLAND is actually the most\n"
	.string "populous of the islands here.\p"
	.string "Still, it could be less sleepy.\p"
	.string "But I wouldn't want to see goons\n"
	.string "like those BIKERS here again.$"

ThreeIsland_Text_WhenDodouEvolvesGoingToPlayGame::
# 507 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "I'm going to train my DODUO in the\n"
	.string "BERRY FOREST.\p"
	.string "When it evolves, I'm going to play\n"
	.string "a game on TWO ISLAND.$"

ThreeIsland_Text_Doduo::
# 515 "data/maps/ThreeIsland_Frlg/scripts.pory"
	.string "DODUO: Gigiih!$"
