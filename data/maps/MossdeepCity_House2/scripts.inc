MossdeepCity_House2_MapScripts::
	.byte 0


MossdeepCity_House2_EventScript_Man::
# 4 "data/maps/MossdeepCity_House2/scripts.pory"
	msgbox MossdeepCity_House2_Text_SisterMailsBoyfriendInFortree, MSGBOX_NPC
	end


MossdeepCity_House2_EventScript_Twin::
# 9 "data/maps/MossdeepCity_House2/scripts.pory"
	msgbox MossdeepCity_House2_Text_PokemonCarriesMailBackAndForth, MSGBOX_NPC
	end


MossdeepCity_House2_EventScript_Wingull::
# 14 "data/maps/MossdeepCity_House2/scripts.pory"
	lock_faceplayer
# 15 "data/maps/MossdeepCity_House2/scripts.pory"
	waitse
# 16 "data/maps/MossdeepCity_House2/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 17 "data/maps/MossdeepCity_House2/scripts.pory"
	msgbox MossdeepCity_House2_Text_Wingull, MSGBOX_DEFAULT
# 18 "data/maps/MossdeepCity_House2/scripts.pory"
	waitmoncry
# 19 "data/maps/MossdeepCity_House2/scripts.pory"
	closemessage
# 20 "data/maps/MossdeepCity_House2/scripts.pory"
	setflag FLAG_WINGULL_DELIVERED_MAIL
# 21 "data/maps/MossdeepCity_House2/scripts.pory"
	clearflag FLAG_HIDE_FORTREE_CITY_HOUSE_4_WINGULL
# 22 "data/maps/MossdeepCity_House2/scripts.pory"
	switch VAR_FACING
# 23 "data/maps/MossdeepCity_House2/scripts.pory"
	case DIR_NORTH, MossdeepCity_House2_EventScript_Wingull_3
# 24 "data/maps/MossdeepCity_House2/scripts.pory"
	case DIR_WEST, MossdeepCity_House2_EventScript_Wingull_4
MossdeepCity_House2_EventScript_Wingull_1:
# 26 "data/maps/MossdeepCity_House2/scripts.pory"
	waitmovement 0
# 27 "data/maps/MossdeepCity_House2/scripts.pory"
	removeobject LOCALID_MOSSDEEP_HOUSE_WINGULL
	release_end

MossdeepCity_House2_EventScript_Wingull_3:
# 23 "data/maps/MossdeepCity_House2/scripts.pory"
	applymovement LOCALID_MOSSDEEP_HOUSE_WINGULL, MossdeepCity_House2_EventScript_Wingull_Movement_0
	goto MossdeepCity_House2_EventScript_Wingull_1

MossdeepCity_House2_EventScript_Wingull_4:
# 24 "data/maps/MossdeepCity_House2/scripts.pory"
	applymovement LOCALID_MOSSDEEP_HOUSE_WINGULL, MossdeepCity_House2_EventScript_Wingull_Movement_1
	goto MossdeepCity_House2_EventScript_Wingull_1


# 23 "data/maps/MossdeepCity_House2/scripts.pory"
MossdeepCity_House2_EventScript_Wingull_Movement_0:
# 23 "data/maps/MossdeepCity_House2/scripts.pory"
	run_right
# 23 "data/maps/MossdeepCity_House2/scripts.pory"
	run_down
# 23 "data/maps/MossdeepCity_House2/scripts.pory"
	run_down
# 23 "data/maps/MossdeepCity_House2/scripts.pory"
	run_left
# 23 "data/maps/MossdeepCity_House2/scripts.pory"
	run_down
# 23 "data/maps/MossdeepCity_House2/scripts.pory"
	delay_8
	step_end

# 24 "data/maps/MossdeepCity_House2/scripts.pory"
MossdeepCity_House2_EventScript_Wingull_Movement_1:
# 24 "data/maps/MossdeepCity_House2/scripts.pory"
	run_down
# 24 "data/maps/MossdeepCity_House2/scripts.pory"
	run_down
# 24 "data/maps/MossdeepCity_House2/scripts.pory"
	run_down
# 24 "data/maps/MossdeepCity_House2/scripts.pory"
	delay_8
	step_end

MossdeepCity_House2_Text_SisterMailsBoyfriendInFortree::
# 31 "data/maps/MossdeepCity_House2/scripts.pory"
	.string "My little sister exchanges MAIL with\n"
	.string "her boyfriend in FORTREE.\p"
	.string "I don't envy her one bit at all.$"

MossdeepCity_House2_Text_PokemonCarriesMailBackAndForth::
# 38 "data/maps/MossdeepCity_House2/scripts.pory"
	.string "Even though I can't see my friend in\n"
	.string "FORTREE, my POKéMON carries MAIL\l"
	.string "back and forth for us.\p"
	.string "I'm not lonesome, even though we're\n"
	.string "apart.$"

MossdeepCity_House2_Text_Wingull::
# 47 "data/maps/MossdeepCity_House2/scripts.pory"
	.string "Pihyoh!$"
