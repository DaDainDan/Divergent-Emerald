DewfordTown_House2_MapScripts::
	.byte 0


DewfordTown_House2_EventScript_Man::
# 4 "data/maps/DewfordTown_House2/scripts.pory"
	lock_faceplayer
# 5 "data/maps/DewfordTown_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_SILK_SCARF, DewfordTown_House2_EventScript_Man_2
# 9 "data/maps/DewfordTown_House2/scripts.pory"
	msgbox DewfordTown_House2_Text_WantYouToHaveSilkScarf, MSGBOX_DEFAULT
	giveitem ITEM_SILK_SCARF
# 0 "data/maps/DewfordTown_House2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq DewfordTown_House2_EventScript_Man_5
# 13 "data/maps/DewfordTown_House2/scripts.pory"
	setflag FLAG_RECEIVED_SILK_SCARF
DewfordTown_House2_EventScript_Man_4:
	release_end

DewfordTown_House2_EventScript_Man_2:
# 6 "data/maps/DewfordTown_House2/scripts.pory"
	msgbox DewfordTown_House2_Text_ExplainSilkScarf, MSGBOX_DEFAULT
	release_end

DewfordTown_House2_EventScript_Man_5:
# 11 "data/maps/DewfordTown_House2/scripts.pory"
	msgbox DewfordTown_House2_Text_NoRoom, MSGBOX_DEFAULT
	goto DewfordTown_House2_EventScript_Man_4


DewfordTown_House2_EventScript_Boy::
# 19 "data/maps/DewfordTown_House2/scripts.pory"
	msgbox DewfordTown_House2_Text_BrawlySoCool, MSGBOX_NPC
	end


DewfordTown_House2_Text_WantYouToHaveSilkScarf::
# 23 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Gorge your eyes on this!\p"
	.string "It's a SILK SCARF. It's right at the\n"
	.string "cutting edge of fashion, yeah!\p"
	.string "Oh, I can see your eyes twinkling!\n"
	.string "You appreciate my dazzling style!\p"
	.string "Oh, you're a delight!\n"
	.string "Here you go. I want you to have it!$"

DewfordTown_House2_Text_NoRoom::
# 36 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Oh, you don't have room?\p"
	.string "Now, listen tight, this SCARF is a must-\n"
	.string "have! Why, I would sell all my items\l"
	.string "in order to get it!$"

DewfordTown_House2_Text_ExplainSilkScarf::
# 44 "data/maps/DewfordTown_House2/scripts.pory"
	.string "The SILK SCARF raises the power of\n"
	.string "NORMAL-type moves.\p"
	.string "It's a marvelous SCARF that will go\n"
	.string "with almost all POKéMON!$"

DewfordTown_House2_Text_BrawlySoCool::
# 52 "data/maps/DewfordTown_House2/scripts.pory"
	.string "Wow, you bothered to cross the sea\n"
	.string "to visit DEWFORD?\p"
	.string "Did you maybe come here because you\n"
	.string "heard about BRAWLY?\p"
	.string "He's so cool…\n"
	.string "Everyone idolizes him.$"
