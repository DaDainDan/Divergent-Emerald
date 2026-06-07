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
	goto_if_set FLAG_SYS_GAME_CLEAR, Route103_MapScripts_MAP_SCRIPT_ON_LOAD_2
Route103_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

Route103_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 9 "data/maps/Route103/scripts.pory"
	setmetatile 45, 5, METATILE_General_CaveEntrance_Top, TRUE
# 10 "data/maps/Route103/scripts.pory"
	setmetatile 45, 6, METATILE_General_CaveEntrance_Bottom, FALSE
	goto Route103_MapScripts_MAP_SCRIPT_ON_LOAD_1


Route103_EventScript_Rival::
# 17 "data/maps/Route103/scripts.pory"
	lockall
	checkplayergender
# 0 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route103_EventScript_Rival_2
# 21 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalBrendan
Route103_EventScript_Rival_1:
	end

Route103_EventScript_Rival_2:
# 19 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalMay
	goto Route103_EventScript_Rival_1


Route103_EventScript_RivalMay::
# 27 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayRoute103Pokemon, MSGBOX_DEFAULT
# 28 "data/maps/Route103/scripts.pory"
	closemessage
# 29 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 30 "data/maps/Route103/scripts.pory"
	call Route103_EventScript_RivalNoticePlayer
# 31 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayLetsBattle, MSGBOX_DEFAULT
# 32 "data/maps/Route103/scripts.pory"
	switch VAR_STARTER_MON
# 33 "data/maps/Route103/scripts.pory"
	case CHOSE_TREECKO, Route103_EventScript_RivalMay_3
# 34 "data/maps/Route103/scripts.pory"
	case CHOSE_TORCHIC, Route103_EventScript_RivalMay_4
# 35 "data/maps/Route103/scripts.pory"
	case CHOSE_MUDKIP, Route103_EventScript_RivalMay_5
Route103_EventScript_RivalMay_1:
# 37 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayTimeToHeadBack, MSGBOX_DEFAULT
# 38 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalExit
	end

Route103_EventScript_RivalMay_3:
# 33 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TREECKO, Route103_Text_MayDefeated
	goto Route103_EventScript_RivalMay_1

Route103_EventScript_RivalMay_4:
# 34 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TORCHIC, Route103_Text_MayDefeated
	goto Route103_EventScript_RivalMay_1

Route103_EventScript_RivalMay_5:
# 35 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_MUDKIP, Route103_Text_MayDefeated
	goto Route103_EventScript_RivalMay_1


Route103_EventScript_RivalBrendan::
# 43 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanRoute103Pokemon, MSGBOX_DEFAULT
# 44 "data/maps/Route103/scripts.pory"
	closemessage
# 45 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 46 "data/maps/Route103/scripts.pory"
	call Route103_EventScript_RivalNoticePlayer
# 47 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanLetsBattle, MSGBOX_DEFAULT
# 48 "data/maps/Route103/scripts.pory"
	switch VAR_STARTER_MON
# 49 "data/maps/Route103/scripts.pory"
	case CHOSE_TREECKO, Route103_EventScript_RivalBrendan_3
# 50 "data/maps/Route103/scripts.pory"
	case CHOSE_TORCHIC, Route103_EventScript_RivalBrendan_4
# 51 "data/maps/Route103/scripts.pory"
	case CHOSE_MUDKIP, Route103_EventScript_RivalBrendan_5
Route103_EventScript_RivalBrendan_1:
# 53 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanTimeToHeadBack, MSGBOX_DEFAULT
# 54 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalExit
	end

Route103_EventScript_RivalBrendan_3:
# 49 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TREECKO, Route103_Text_BrendanDefeated
	goto Route103_EventScript_RivalBrendan_1

Route103_EventScript_RivalBrendan_4:
# 50 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TORCHIC, Route103_Text_BrendanDefeated
	goto Route103_EventScript_RivalBrendan_1

Route103_EventScript_RivalBrendan_5:
# 51 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_MUDKIP, Route103_Text_BrendanDefeated
	goto Route103_EventScript_RivalBrendan_1


Route103_EventScript_RivalNoticePlayer::
# 59 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Common_Movement_FacePlayer
# 60 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 61 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Common_Movement_ExclamationMark
# 62 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 63 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Common_Movement_Delay48
# 64 "data/maps/Route103/scripts.pory"
	waitmovement 0
	return


Route103_EventScript_RivalExit::
# 69 "data/maps/Route103/scripts.pory"
	closemessage
# 70 "data/maps/Route103/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq Route103_EventScript_RivalExit_2
# 77 "data/maps/Route103/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_ne Route103_EventScript_RivalExit_6
Route103_EventScript_RivalExit_5:
# 80 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Common_Movement_WalkDown
# 81 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 82 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 83 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Route103_EventScript_RivalExit_Movement_4
Route103_EventScript_RivalExit_1:
# 85 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 86 "data/maps/Route103/scripts.pory"
	removeobject LOCALID_ROUTE103_RIVAL
# 87 "data/maps/Route103/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 4
# 88 "data/maps/Route103/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 89 "data/maps/Route103/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE103
# 90 "data/maps/Route103/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 1
# 91 "data/maps/Route103/scripts.pory"
	clearflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 92 "data/maps/Route103/scripts.pory"
	savebgm MUS_DUMMY
# 93 "data/maps/Route103/scripts.pory"
	fadedefaultbgm
# 94 "data/maps/Route103/scripts.pory"
	releaseall
	end

Route103_EventScript_RivalExit_2:
# 71 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_PLAYER, Route103_EventScript_RivalExit_Movement_0
# 72 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Route103_EventScript_RivalExit_Movement_1
# 73 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 74 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 75 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_ROUTE103_RIVAL, Route103_EventScript_RivalExit_Movement_2
	goto Route103_EventScript_RivalExit_1

Route103_EventScript_RivalExit_6:
# 78 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_PLAYER, Route103_EventScript_RivalExit_Movement_3
	goto Route103_EventScript_RivalExit_5


Route103_EventScript_Boy::
# 99 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShouldHaveBroughtPotion, MSGBOX_NPC
	end


Route103_EventScript_Man::
# 104 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShortcutToOldale, MSGBOX_NPC
	end


Route103_EventScript_RouteSign::
# 109 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RouteSign, MSGBOX_SIGN
	end


Route103_EventScript_Daisy::
# 114 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_DAISY, Route103_Text_DaisyIntro, Route103_Text_DaisyDefeated
# 115 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_DaisyPostBattle, MSGBOX_AUTOCLOSE
	end


Route103_EventScript_Amy::
# 120 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyIntro, Route103_Text_AmyDefeated, Route103_Text_AmyNotEnoughPokemon, Route102_EventScript_AmyLivRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route103_EventScript_Amy_2
# 126 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyPostBattle, MSGBOX_AUTOCLOSE
	end

Route103_EventScript_Amy_2:
# 122 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyRematchIntro, Route103_Text_AmyRematchDefeated, Route103_Text_AmyRematchNotEnoughPokemon
# 123 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyRematchPostBattle, MSGBOX_AUTOCLOSE
	end


Route102_EventScript_AmyLivRegisterMatchCallAfterBattle::
# 131 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 132 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
	release_end


Route103_EventScript_Liv::
# 137 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivIntro, Route103_Text_LivDefeated, Route103_Text_LivNotEnoughPokemon, Route102_EventScript_AmyLivRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route103_EventScript_Liv_2
# 143 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivPostBattle, MSGBOX_AUTOCLOSE
	end

Route103_EventScript_Liv_2:
# 139 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivRematchIntro, Route103_Text_LivRematchDefeated, Route103_Text_LivRematchNotEnoughPokemon
# 140 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivRematchPostBattle, MSGBOX_AUTOCLOSE
	end


Route103_EventScript_Andrew::
# 148 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ANDREW, Route103_Text_AndrewIntro, Route103_Text_AndrewDefeated
# 149 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AndrewPostBattle, MSGBOX_AUTOCLOSE
	end


Route103_EventScript_Miguel::
# 154 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MIGUEL_1, Route103_Text_MiguelIntro, Route103_Text_MiguelDefeated, Route102_EventScript_MiguelRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 0 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route103_EventScript_Miguel_2
# 160 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelPostBattle, MSGBOX_DEFAULT
	release_end

Route103_EventScript_Miguel_2:
# 156 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch TRAINER_MIGUEL_1, Route103_Text_MiguelRematchIntro, Route103_Text_MiguelRematchDefeated
# 157 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRematchPostBattle, MSGBOX_AUTOCLOSE
	end


Route102_EventScript_MiguelRegisterMatchCallAfterBattle::
# 165 "data/maps/Route103/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 166 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 167 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRegister, MSGBOX_DEFAULT
# 168 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_MIGUEL_1
	release_end


Route103_EventScript_Marcos::
# 173 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MARCOS, Route103_Text_MarcosIntro, Route103_Text_MarcosDefeated
# 174 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MarcosPostBattle, MSGBOX_AUTOCLOSE
	end


Route103_EventScript_Rhett::
# 179 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_RHETT, Route103_Text_RhettIntro, Route103_Text_RhettDefeated
# 180 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RhettPostBattle, MSGBOX_AUTOCLOSE
	end


Route103_EventScript_Pete::
# 185 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_PETE, Route103_Text_PeteIntro, Route103_Text_PeteDefeated
# 186 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_PetePostBattle, MSGBOX_AUTOCLOSE
	end


Route103_EventScript_Isabelle::
# 191 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ISABELLE, Route103_Text_IsabelleIntro, Route103_Text_IsabelleDefeated
# 192 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_IsabellePostBattle, MSGBOX_AUTOCLOSE
	end


# 71 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExit_Movement_0:
# 71 "data/maps/Route103/scripts.pory"
	delay_16
# 71 "data/maps/Route103/scripts.pory"
	delay_4
# 71 "data/maps/Route103/scripts.pory"
	step_faster_left
# 71 "data/maps/Route103/scripts.pory"
	delay_16
# 71 "data/maps/Route103/scripts.pory"
	step_faster_down
	step_end

# 72 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExit_Movement_1:
# 72 "data/maps/Route103/scripts.pory"
	walk_left
# 72 "data/maps/Route103/scripts.pory"
	walk_down
	step_end

# 75 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExit_Movement_2:
# 75 "data/maps/Route103/scripts.pory"
	jump_2_down
# 75 "data/maps/Route103/scripts.pory"
	delay_16
# 75 "data/maps/Route103/scripts.pory"
	walk_down
# 75 "data/maps/Route103/scripts.pory"
	walk_down
# 75 "data/maps/Route103/scripts.pory"
	walk_down
# 75 "data/maps/Route103/scripts.pory"
	walk_down
	step_end

# 78 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExit_Movement_3:
# 78 "data/maps/Route103/scripts.pory"
	delay_16
# 78 "data/maps/Route103/scripts.pory"
	step_faster_down
	step_end

# 83 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExit_Movement_4:
# 83 "data/maps/Route103/scripts.pory"
	jump_2_down
# 83 "data/maps/Route103/scripts.pory"
	delay_16
# 83 "data/maps/Route103/scripts.pory"
	walk_down
# 83 "data/maps/Route103/scripts.pory"
	walk_down
# 83 "data/maps/Route103/scripts.pory"
	walk_down
	step_end

Route103_Text_MayRoute103Pokemon::
# 196 "data/maps/Route103/scripts.pory"
	.string "MAY: Let's see… The POKéMON found\n"
	.string "on ROUTE 103 include…$"

Route103_Text_MayLetsBattle::
# 201 "data/maps/Route103/scripts.pory"
	.string "Oh, hi, {PLAYER}{KUN}!\p"
	.string "…Oh, I see, my dad gave you\n"
	.string "a POKéMON as a gift.\p"
	.string "Since we're here, let's have a quick\n"
	.string "battle!\p"
	.string "I'll give you a taste of what being\n"
	.string "a TRAINER is like.$"

Route103_Text_MayDefeated::
# 214 "data/maps/Route103/scripts.pory"
	.string "Wow! That's great!\n"
	.string "{PLAYER}{KUN}, you're pretty good!$"

Route103_Text_MayTimeToHeadBack::
# 219 "data/maps/Route103/scripts.pory"
	.string "MAY: I think I know why my dad has\n"
	.string "an eye out for you now.\p"
	.string "I mean, you just got that POKéMON,\n"
	.string "but it already likes you.\p"
	.string "You might be able to befriend any\n"
	.string "kind of POKéMON easily.\p"
	.string "Well, it's time to head back to\n"
	.string "the LAB.$"

Route103_Text_BrendanRoute103Pokemon::
# 233 "data/maps/Route103/scripts.pory"
	.string "BRENDAN: Okay, so it's this one and\n"
	.string "that one that live on ROUTE 103…$"

Route103_Text_BrendanLetsBattle::
# 238 "data/maps/Route103/scripts.pory"
	.string "Hey, it's {PLAYER}!\p"
	.string "…Oh, yeah, Dad gave you a POKéMON.\p"
	.string "Since we're here, how about a little\n"
	.string "battle?\p"
	.string "I'll teach you what being a TRAINER's\n"
	.string "about!$"

Route103_Text_BrendanDefeated::
# 250 "data/maps/Route103/scripts.pory"
	.string "Huh, {PLAYER}, you're not too shabby.$"

Route103_Text_BrendanTimeToHeadBack::
# 254 "data/maps/Route103/scripts.pory"
	.string "BRENDAN: I think I get it.\n"
	.string "I think I know why my dad has his eye\l"
	.string "out for you now.\p"
	.string "Look, your POKéMON already likes you,\n"
	.string "even though you just got it.\p"
	.string "{PLAYER}, I get the feeling that you\n"
	.string "could befriend any POKéMON with ease.\p"
	.string "We should head back to the LAB.$"

Route103_Text_ShouldHaveBroughtPotion::
# 268 "data/maps/Route103/scripts.pory"
	.string "My POKéMON is staggeringly tired…\n"
	.string "I should have brought a POTION…$"

Route103_Text_ShortcutToOldale::
# 273 "data/maps/Route103/scripts.pory"
	.string "If you cross the sea from here,\n"
	.string "it'll be a shortcut to OLDALE TOWN.\p"
	.string "Fufufu, that's useful, isn't it?$"

Route103_Text_RouteSign::
# 280 "data/maps/Route103/scripts.pory"
	.string "ROUTE 103\n"
	.string "{DOWN_ARROW} OLDALE TOWN$"
