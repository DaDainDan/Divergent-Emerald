Route103_MapScripts::
# 2 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route103_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 7 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route103_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Route103_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route103/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 4 "data/maps/Route103/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
	end

Route103_MapScripts_MAP_SCRIPT_ON_LOAD:
# 8 "data/maps/Route103/scripts.pory"
	setmetatile 45, 5, METATILE_General_CaveEntrance_Top, TRUE
# 9 "data/maps/Route103/scripts.pory"
	setmetatile 45, 6, METATILE_General_CaveEntrance_Bottom, FALSE
	end


Route103_EventScript_Rival::
# 15 "data/maps/Route103/scripts.pory"
	lockall
	checkplayergender
# 0 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route103_EventScript_Rival_2
# 19 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalBrendan
Route103_EventScript_Rival_1:
	end

Route103_EventScript_Rival_2:
# 17 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalMay
	goto Route103_EventScript_Rival_1


Route103_EventScript_RivalMay::
# 25 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayRoute103Pokemon, MSGBOX_DEFAULT
# 26 "data/maps/Route103/scripts.pory"
	closemessage
# 27 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 28 "data/maps/Route103/scripts.pory"
	call Route103_EventScript_RivalNoticePlayer
# 29 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayLetsBattle, MSGBOX_DEFAULT
# 30 "data/maps/Route103/scripts.pory"
	switch VAR_STARTER_MON
# 31 "data/maps/Route103/scripts.pory"
	case PC_CHOSE_TREECKO, Route103_EventScript_RivalMay_3
# 32 "data/maps/Route103/scripts.pory"
	case PC_CHOSE_TORCHIC, Route103_EventScript_RivalMay_4
# 33 "data/maps/Route103/scripts.pory"
	case PC_CHOSE_MUDKIP, Route103_EventScript_RivalMay_5
Route103_EventScript_RivalMay_1:
# 35 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayTimeToHeadBack, MSGBOX_DEFAULT
# 36 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalExit
	end

Route103_EventScript_RivalMay_3:
# 31 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TORCHIC, Route103_Text_MayDefeated
	goto Route103_EventScript_RivalMay_1

Route103_EventScript_RivalMay_4:
# 32 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_MUDKIP, Route103_Text_MayDefeated
	goto Route103_EventScript_RivalMay_1

Route103_EventScript_RivalMay_5:
# 33 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TREECKO, Route103_Text_MayDefeated
	goto Route103_EventScript_RivalMay_1


Route103_EventScript_RivalBrendan::
# 41 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanRoute103Pokemon, MSGBOX_DEFAULT
# 42 "data/maps/Route103/scripts.pory"
	closemessage
# 43 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 44 "data/maps/Route103/scripts.pory"
	call Route103_EventScript_RivalNoticePlayer
# 45 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanLetsBattle, MSGBOX_DEFAULT
# 46 "data/maps/Route103/scripts.pory"
	switch VAR_STARTER_MON
# 47 "data/maps/Route103/scripts.pory"
	case PC_CHOSE_TREECKO, Route103_EventScript_RivalBrendan_3
# 48 "data/maps/Route103/scripts.pory"
	case PC_CHOSE_TORCHIC, Route103_EventScript_RivalBrendan_4
# 49 "data/maps/Route103/scripts.pory"
	case PC_CHOSE_MUDKIP, Route103_EventScript_RivalBrendan_5
Route103_EventScript_RivalBrendan_1:
# 51 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanTimeToHeadBack, MSGBOX_DEFAULT
# 52 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalExit
	end

Route103_EventScript_RivalBrendan_3:
# 47 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TORCHIC, Route103_Text_BrendanDefeated
	goto Route103_EventScript_RivalBrendan_1

Route103_EventScript_RivalBrendan_4:
# 48 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_MUDKIP, Route103_Text_BrendanDefeated
	goto Route103_EventScript_RivalBrendan_1

Route103_EventScript_RivalBrendan_5:
# 49 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TREECKO, Route103_Text_BrendanDefeated
	goto Route103_EventScript_RivalBrendan_1


Route103_EventScript_RivalNoticePlayer::
# 57 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Common_Movement_FacePlayer
# 58 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 59 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Common_Movement_ExclamationMark
# 60 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 61 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Common_Movement_Delay48
# 62 "data/maps/Route103/scripts.pory"
	waitmovement 0
	return


Route103_EventScript_RivalExit::
# 67 "data/maps/Route103/scripts.pory"
	closemessage
# 68 "data/maps/Route103/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq Route103_EventScript_RivalExit_2
# 75 "data/maps/Route103/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_ne Route103_EventScript_RivalExit_6
Route103_EventScript_RivalExit_5:
# 78 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Common_Movement_WalkDown
# 79 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 80 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 81 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Route103_EventScript_RivalExit_Movement_4
Route103_EventScript_RivalExit_1:
# 83 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 84 "data/maps/Route103/scripts.pory"
	removeobject LOCALID_ROUTE103_RIVAL
# 85 "data/maps/Route103/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 4
# 86 "data/maps/Route103/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 87 "data/maps/Route103/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE103
# 88 "data/maps/Route103/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 1
# 89 "data/maps/Route103/scripts.pory"
	clearflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 90 "data/maps/Route103/scripts.pory"
	savebgm MUS_DUMMY
# 91 "data/maps/Route103/scripts.pory"
	fadedefaultbgm
# 92 "data/maps/Route103/scripts.pory"
	releaseall
	end

Route103_EventScript_RivalExit_2:
# 69 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_PLAYER, Route103_EventScript_RivalExit_Movement_0
# 70 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Route103_EventScript_RivalExit_Movement_1
# 71 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 72 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 73 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Route103_EventScript_RivalExit_Movement_2
	goto Route103_EventScript_RivalExit_1

Route103_EventScript_RivalExit_6:
# 76 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_PLAYER, Route103_EventScript_RivalExit_Movement_3
	goto Route103_EventScript_RivalExit_5


Route103_EventScript_Boy::
# 97 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShouldHaveBroughtPotion, MSGBOX_NPC
	end


Route103_EventScript_Man::
# 102 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShortcutToOldale, MSGBOX_NPC
	end


Route103_EventScript_RouteSign::
# 107 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RouteSign, MSGBOX_SIGN
	end


Route103_EventScript_Daisy::
# 112 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_DAISY, Route103_Text_DaisyIntro, Route103_Text_DaisyDefeated
# 113 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_DaisyPostBattle, MSGBOX_AUTOCLOSE
	end


Route103_EventScript_Amy::
# 118 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyIntro, Route103_Text_AmyDefeated, Route103_Text_AmyNotEnoughPokemon, Route102_EventScript_AmyLivRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route103_EventScript_Amy_2
# 124 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyPostBattle, MSGBOX_AUTOCLOSE
	end

Route103_EventScript_Amy_2:
# 120 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyRematchIntro, Route103_Text_AmyRematchDefeated, Route103_Text_AmyRematchNotEnoughPokemon
# 121 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyRematchPostBattle, MSGBOX_AUTOCLOSE
	end


Route102_EventScript_AmyLivRegisterMatchCallAfterBattle::
# 129 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 130 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
	release_end


Route103_EventScript_Liv::
# 135 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivIntro, Route103_Text_LivDefeated, Route103_Text_LivNotEnoughPokemon, Route102_EventScript_AmyLivRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route103_EventScript_Liv_2
# 141 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivPostBattle, MSGBOX_AUTOCLOSE
	end

Route103_EventScript_Liv_2:
# 137 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivRematchIntro, Route103_Text_LivRematchDefeated, Route103_Text_LivRematchNotEnoughPokemon
# 138 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivRematchPostBattle, MSGBOX_AUTOCLOSE
	end


Route103_EventScript_Andrew::
# 146 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ANDREW, Route103_Text_AndrewIntro, Route103_Text_AndrewDefeated
# 147 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AndrewPostBattle, MSGBOX_AUTOCLOSE
	end


Route103_EventScript_Miguel::
# 152 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MIGUEL_1, Route103_Text_MiguelIntro, Route103_Text_MiguelDefeated, Route102_EventScript_MiguelRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route103_EventScript_Miguel_2
# 158 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelPostBattle, MSGBOX_DEFAULT
	release_end

Route103_EventScript_Miguel_2:
# 154 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch TRAINER_MIGUEL_1, Route103_Text_MiguelRematchIntro, Route103_Text_MiguelRematchDefeated
# 155 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRematchPostBattle, MSGBOX_AUTOCLOSE
	end


Route102_EventScript_MiguelRegisterMatchCallAfterBattle::
# 163 "data/maps/Route103/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 164 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 165 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRegister, MSGBOX_DEFAULT
# 166 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_MIGUEL_1
	release_end


Route103_EventScript_Marcos::
# 171 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MARCOS, Route103_Text_MarcosIntro, Route103_Text_MarcosDefeated
# 172 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MarcosPostBattle, MSGBOX_AUTOCLOSE
	end


Route103_EventScript_Rhett::
# 177 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_RHETT, Route103_Text_RhettIntro, Route103_Text_RhettDefeated
# 178 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RhettPostBattle, MSGBOX_AUTOCLOSE
	end


Route103_EventScript_Pete::
# 183 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_PETE, Route103_Text_PeteIntro, Route103_Text_PeteDefeated
# 184 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_PetePostBattle, MSGBOX_AUTOCLOSE
	end


Route103_EventScript_Isabelle::
# 189 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ISABELLE, Route103_Text_IsabelleIntro, Route103_Text_IsabelleDefeated
# 190 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_IsabellePostBattle, MSGBOX_AUTOCLOSE
	end


# 69 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExit_Movement_0:
# 69 "data/maps/Route103/scripts.pory"
	delay_16
# 69 "data/maps/Route103/scripts.pory"
	delay_4
# 69 "data/maps/Route103/scripts.pory"
	step_faster_left
# 69 "data/maps/Route103/scripts.pory"
	delay_16
# 69 "data/maps/Route103/scripts.pory"
	step_faster_down
	step_end

# 70 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExit_Movement_1:
# 70 "data/maps/Route103/scripts.pory"
	walk_left
# 70 "data/maps/Route103/scripts.pory"
	walk_down
	step_end

# 73 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExit_Movement_2:
# 73 "data/maps/Route103/scripts.pory"
	jump_2_down
# 73 "data/maps/Route103/scripts.pory"
	delay_16
# 73 "data/maps/Route103/scripts.pory"
	walk_down
# 73 "data/maps/Route103/scripts.pory"
	walk_down
# 73 "data/maps/Route103/scripts.pory"
	walk_down
# 73 "data/maps/Route103/scripts.pory"
	walk_down
	step_end

# 76 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExit_Movement_3:
# 76 "data/maps/Route103/scripts.pory"
	delay_16
# 76 "data/maps/Route103/scripts.pory"
	step_faster_down
	step_end

# 81 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExit_Movement_4:
# 81 "data/maps/Route103/scripts.pory"
	jump_2_down
# 81 "data/maps/Route103/scripts.pory"
	delay_16
# 81 "data/maps/Route103/scripts.pory"
	walk_down
# 81 "data/maps/Route103/scripts.pory"
	walk_down
# 81 "data/maps/Route103/scripts.pory"
	walk_down
	step_end

Route103_Text_MayRoute103Pokemon::
# 194 "data/maps/Route103/scripts.pory"
	.string "{SPEAKER NAME_MAY}Let's see… The POKéMON found\n"
	.string "on ROUTE 103 include…$"

Route103_Text_MayLetsBattle::
# 199 "data/maps/Route103/scripts.pory"
	.string "Oh, hi, {PLAYER}{KUN}!\p"
	.string "…Oh, I see, my dad gave you\n"
	.string "a POKéMON as a gift.\p"
	.string "Since we're here, let's have a quick\n"
	.string "battle!\p"
	.string "I'll give you a taste of what being\n"
	.string "a TRAINER is like.$"

Route103_Text_MayDefeated::
# 212 "data/maps/Route103/scripts.pory"
	.string "Wow! That's great!\n"
	.string "{PLAYER}{KUN}, you're pretty good!$"

Route103_Text_MayTimeToHeadBack::
# 217 "data/maps/Route103/scripts.pory"
	.string "{SPEAKER NAME_MAY}I think I know why my dad has\n"
	.string "an eye out for you now.\p"
	.string "I mean, you just got that POKéMON,\n"
	.string "but it already likes you.\p"
	.string "You might be able to befriend any\n"
	.string "kind of POKéMON easily.\p"
	.string "Well, it's time to head back to\n"
	.string "the LAB.$"

Route103_Text_BrendanRoute103Pokemon::
# 231 "data/maps/Route103/scripts.pory"
	.string "{SPEAKER NAME_BRENDAN}Okay, so it's this one and\n"
	.string "that one that live on ROUTE 103…$"

Route103_Text_BrendanLetsBattle::
# 236 "data/maps/Route103/scripts.pory"
	.string "Hey, it's {PLAYER}!\p"
	.string "…Oh, yeah, Dad gave you a POKéMON.\p"
	.string "Since we're here, how about a little\n"
	.string "battle?\p"
	.string "I'll teach you what being a TRAINER's\n"
	.string "about!$"

Route103_Text_BrendanDefeated::
# 248 "data/maps/Route103/scripts.pory"
	.string "Huh, {PLAYER}, you're not too shabby.$"

Route103_Text_BrendanTimeToHeadBack::
# 252 "data/maps/Route103/scripts.pory"
	.string "{SPEAKER NAME_BRENDAN}I think I get it.\n"
	.string "I think I know why my dad has his eye\l"
	.string "out for you now.\p"
	.string "Look, your POKéMON already likes you,\n"
	.string "even though you just got it.\p"
	.string "{PLAYER}, I get the feeling that you\n"
	.string "could befriend any POKéMON with ease.\p"
	.string "We should head back to the LAB.$"

Route103_Text_ShouldHaveBroughtPotion::
# 266 "data/maps/Route103/scripts.pory"
	.string "My POKéMON is staggeringly tired…\n"
	.string "I should have brought a POTION…$"

Route103_Text_ShortcutToOldale::
# 271 "data/maps/Route103/scripts.pory"
	.string "If you cross the sea from here,\n"
	.string "it'll be a shortcut to OLDALE TOWN.\p"
	.string "Fufufu, that's useful, isn't it?$"

Route103_Text_RouteSign::
# 278 "data/maps/Route103/scripts.pory"
	.string "ROUTE 103\n"
	.string "{DOWN_ARROW} OLDALE TOWN$"
