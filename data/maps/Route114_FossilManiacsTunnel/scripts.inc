Route114_FossilManiacsTunnel_MapScripts::
# 2 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_FossilManiacsTunnel_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 9 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route114_FossilManiacsTunnel_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Route114_FossilManiacsTunnel_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	goto_if_set FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT, Route114_FossilManiacsTunnel_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Route114_FossilManiacsTunnel_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

Route114_FossilManiacsTunnel_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	setobjectxyperm LOCALID_FOSSIL_MANIAC, 6, 5
# 5 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	setobjectmovementtype LOCALID_FOSSIL_MANIAC, MOVEMENT_TYPE_FACE_DOWN
	goto Route114_FossilManiacsTunnel_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route114_FossilManiacsTunnel_MapScripts_MAP_SCRIPT_ON_LOAD:
# 10 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	goto_if_unset FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT, Route114_FossilManiacsTunnel_MapScripts_MAP_SCRIPT_ON_LOAD_2
Route114_FossilManiacsTunnel_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

Route114_FossilManiacsTunnel_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 11 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	setmetatile 6, 1, METATILE_Fallarbor_RedRockWall, TRUE
# 12 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	setmetatile 6, 2, METATILE_Fallarbor_RedRockWall, TRUE
	goto Route114_FossilManiacsTunnel_MapScripts_MAP_SCRIPT_ON_LOAD_1


Route114_FossilManiacsTunnel_EventScript_ManiacMentionCaveIn::
# 19 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	lockall
# 20 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	applymovement LOCALID_FOSSIL_MANIAC, Common_Movement_StepFasterUp
# 21 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_StepFasterDown
# 22 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	waitmovement 0
# 23 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_NotSafeThatWay, MSGBOX_DEFAULT
# 24 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	setvar VAR_FOSSIL_MANIAC_STATE, 2
# 25 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	releaseall
	end


Route114_FossilManiacsTunnel_EventScript_FossilManiac::
# 30 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	lock_faceplayer
# 31 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	goto_if_set FLAG_RECEIVED_REVIVED_FOSSIL_MON, Route114_FossilManiacsTunnel_EventScript_FossilManiac_2
	checkitem ITEM_ROOT_FOSSIL
# 0 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route114_FossilManiacsTunnel_EventScript_FossilManiac_3
	checkitem ITEM_CLAW_FOSSIL
# 0 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route114_FossilManiacsTunnel_EventScript_FossilManiac_3
# 38 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_LookInDesertForFossils, MSGBOX_DEFAULT
Route114_FossilManiacsTunnel_EventScript_FossilManiac_1:
	release_end

Route114_FossilManiacsTunnel_EventScript_FossilManiac_2:
# 32 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_FossilsAreWonderful, MSGBOX_DEFAULT
	goto Route114_FossilManiacsTunnel_EventScript_FossilManiac_1

Route114_FossilManiacsTunnel_EventScript_FossilManiac_3:
# 35 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_DevonCorpRevivingFossils, MSGBOX_DEFAULT
	goto Route114_FossilManiacsTunnel_EventScript_FossilManiac_1


Route114_FossilManiacsTunnel_Text_LookInDesertForFossils::
# 43 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "I'm the FOSSIL MANIAC…\n"
	.string "I'm a nice guy who loves FOSSILS…\p"
	.string "Do you want a FOSSIL?\p"
	.string "But the FOSSILS around these parts all\n"
	.string "belong to me… None for you…\p"
	.string "If you can't bear to go without\n"
	.string "a FOSSIL, look in a desert where there\l"
	.string "are boulders and sand that may hide\l"
	.string "FOSSILS…$"

Route114_FossilManiacsTunnel_Text_DevonCorpRevivingFossils::
# 58 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "You found a FOSSIL, didn't you?\n"
	.string "That's so nice… It's so dreamy…\p"
	.string "What are you going to do with that\n"
	.string "FOSSIL?\p"
	.string "From what I've heard, DEVON is doing\n"
	.string "research on reviving POKéMON from\l"
	.string "FOSSILS…\p"
	.string "I love my FOSSILS, so I would never\n"
	.string "do anything like that…$"

Route114_FossilManiacsTunnel_Text_FossilsAreWonderful::
# 73 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "FOSSILS are so… Wonderful…\n"
	.string "It's so dreamy…$"

Route114_FossilManiacsTunnel_Text_NotSafeThatWay::
# 78 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Oh…\n"
	.string "It's not safe that way…\p"
	.string "I was digging away, you see…\n"
	.string "When the whole wall collapsed…\p"
	.string "I think there's a giant cavern\n"
	.string "underneath now…\p"
	.string "But I've left it alone because I don't\n"
	.string "think there are any FOSSILS there…$"
