Route117_PokemonDayCare_MapScripts::
# 2 "data/maps/Route117_PokemonDayCare/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route117_PokemonDayCare_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route117_PokemonDayCare_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route117_PokemonDayCare/scripts.pory"
	setflag FLAG_LANDMARK_POKEMON_DAYCARE
	end


Route117_PokemonDayCare_EventScript_Girl::
# 9 "data/maps/Route117_PokemonDayCare/scripts.pory"
	lock_faceplayer
# 10 "data/maps/Route117_PokemonDayCare/scripts.pory"
	msgbox Route117_PokemonDayCare_Text_MyGrandpa, MSGBOX_DEFAULT
	release_end


Route117_PokemonDayCare_EventScript_Breeder::
# 15 "data/maps/Route117_PokemonDayCare/scripts.pory"
	lock_faceplayer
# 16 "data/maps/Route117_PokemonDayCare/scripts.pory"
	goto_if_unset FLAG_RECEIVED_DAYCARE_DESTINY_KNOT, Route117_PokemonDayCare_EventScript_Breeder_3
Route117_PokemonDayCare_EventScript_Breeder_1:
# 24 "data/maps/Route117_PokemonDayCare/scripts.pory"
	msgbox Route117_PokemonDayCare_Text_ILoveBreeding, MSGBOX_DEFAULT
	release_end

Route117_PokemonDayCare_EventScript_Breeder_2:
# 17 "data/maps/Route117_PokemonDayCare/scripts.pory"
	msgbox Route117_PokemonDayCare_Text_YouReallyLovePokemon, MSGBOX_DEFAULT
	giveitem ITEM_DESTINY_KNOT
# 0 "data/maps/Route117_PokemonDayCare/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route117_PokemonDayCare_EventScript_Breeder_7
Route117_PokemonDayCare_EventScript_Breeder_6:
# 21 "data/maps/Route117_PokemonDayCare/scripts.pory"
	setflag FLAG_RECEIVED_DAYCARE_DESTINY_KNOT
	release_end

Route117_PokemonDayCare_EventScript_Breeder_3:
	specialvar VAR_RESULT, GetHatchedEggCount
# 0 "data/maps/Route117_PokemonDayCare/scripts.pory"
	compare VAR_RESULT, 10
	goto_if_ge Route117_PokemonDayCare_EventScript_Breeder_2
	goto Route117_PokemonDayCare_EventScript_Breeder_1

Route117_PokemonDayCare_EventScript_Breeder_7:
# 19 "data/maps/Route117_PokemonDayCare/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto Route117_PokemonDayCare_EventScript_Breeder_6


Route117_PokemonDayCare_EventScript_OldMan::
# 29 "data/maps/Route117_PokemonDayCare/scripts.pory"
	lock_faceplayer
# 30 "data/maps/Route117_PokemonDayCare/scripts.pory"
	goto_if_set FLAG_RECEIVED_DAYCARE_EGG, Route117_PokemonDayCare_EventScript_OldMan_2
# 34 "data/maps/Route117_PokemonDayCare/scripts.pory"
	msgbox Route117_PokemonDayCare_Text_HaveEggWillYouTakeIt, MSGBOX_YESNO
# 35 "data/maps/Route117_PokemonDayCare/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route117_PokemonDayCare_EventScript_OldMan_5
	getpartysize
# 0 "data/maps/Route117_PokemonDayCare/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq Route117_PokemonDayCare_EventScript_OldMan_6
# 42 "data/maps/Route117_PokemonDayCare/scripts.pory"
	msgbox Route117_PokemonDayCare_Text_HopeYoullWalkPlentyWithEgg, MSGBOX_DEFAULT
# 43 "data/maps/Route117_PokemonDayCare/scripts.pory"
	setflag FLAG_RECEIVED_DAYCARE_EGG
# 44 "data/maps/Route117_PokemonDayCare/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 45 "data/maps/Route117_PokemonDayCare/scripts.pory"
	message Route117_PokemonDayCare_Text_ReceivedTheEgg
# 46 "data/maps/Route117_PokemonDayCare/scripts.pory"
	waitfanfare
# 47 "data/maps/Route117_PokemonDayCare/scripts.pory"
	giveegg SPECIES_TOGEPI
Route117_PokemonDayCare_EventScript_OldMan_4:
	release_end

Route117_PokemonDayCare_EventScript_OldMan_2:
# 31 "data/maps/Route117_PokemonDayCare/scripts.pory"
	msgbox Route117_PokemonDayCare_Text_EverySoOftenEggFoundAtDayCare, MSGBOX_DEFAULT
	release_end

Route117_PokemonDayCare_EventScript_OldMan_5:
# 36 "data/maps/Route117_PokemonDayCare/scripts.pory"
	msgbox Route117_PokemonDayCare_Text_AsYouWishThen, MSGBOX_DEFAULT
	goto Route117_PokemonDayCare_EventScript_OldMan_4

Route117_PokemonDayCare_EventScript_OldMan_6:
# 39 "data/maps/Route117_PokemonDayCare/scripts.pory"
	msgbox Route117_PokemonDayCare_Text_NoRoomForThisEgg, MSGBOX_DEFAULT
	goto Route117_PokemonDayCare_EventScript_OldMan_4


Route117_PokemonDayCare_Text_HaveEggWillYouTakeIt::
# 52 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "Hello, child.\n"
	.string "You wouldn't happen to be a POKéMON\l"
	.string "trainer, would you?\p"
	.string "My grand-daughter gave me this egg\n"
	.string "that holds a special POKéMON.\p"
	.string "She gave it me in the hopes it would\n"
	.string "grant me good health.\p"
	.string "I was glad, but I couldn't help but feel\n"
	.string "like it's wasted on one as old as me.\p"
	.string "Would you take it as a gift from me?$"

Route117_PokemonDayCare_Text_HopeYoullWalkPlentyWithEgg::
# 69 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "Oh, thank you, child!\p"
	.string "My only wish is for you to be blessed by\n"
	.string "this egg and the critter held within it.$"

Route117_PokemonDayCare_Text_ReceivedTheEgg::
# 76 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "{PLAYER} received the EGG.$"

Route117_PokemonDayCare_Text_NoRoomForThisEgg::
# 80 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "Oh, not enough room?\p"
	.string "Not to worry, there is a PC right behind\n"
	.string "me that'll allow you to make room.$"

Route117_PokemonDayCare_Text_AsYouWishThen::
# 87 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "That saddens me.\p"
	.string "Something about you made me think you\n"
	.string "were the right person to give it to.\p"
	.string "But I won't force you to take something\n"
	.string "you don't want.$"

Route117_PokemonDayCare_Text_EverySoOftenEggFoundAtDayCare::
# 97 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "Go on now, child.\n"
	.string "Don't worry about me.\p"
	.string "I just want you and that critter to go\n"
	.string "out and do well for yourselves.$"

Route117_PokemonDayCare_Text_MyGrandpa::
# 105 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "My grand-father passed away recently.\p"
	.string "I gave him a TOGEPI egg because I\n"
	.string "hoped it would improve his poor health.\p"
	.string "Sadly, it didn't work, but I'll think of\n"
	.string "him every time I hold TOGEPI in my arms.$"

Route117_PokemonDayCare_Text_YouReallyLovePokemon::
# 115 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "I've seen you around here a lot lately.\p"
	.string "It seems like you're really dedicating\n"
	.string "yourself to raising POKéMON!\p"
	.string "Here's something to make things even\n"
	.string "easier for you!$"

Route117_PokemonDayCare_Text_ILoveBreeding::
# 125 "data/maps/Route117_PokemonDayCare/scripts.pory"
	.string "My passion is taking care of and\n"
	.string "breeding POKéMON.\p"
	.string "You should try it too!\n"
	.string "It's really fulfilling!$"
