# 1 "data/maps/OldaleTown_House1/scripts.pory"

# 2 "data/maps/OldaleTown_House1/scripts.pory"
OldaleTown_House1_MapScripts::
# 3 "data/maps/OldaleTown_House1/scripts.pory"
	.byte 0
# 4 "data/maps/OldaleTown_House1/scripts.pory"

# 5 "data/maps/OldaleTown_House1/scripts.pory"
OldaleTown_House1_EventScript_Woman::
# 6 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleTown_House1_Text_LeftPokemonGoesOutFirst, MSGBOX_NPC
# 7 "data/maps/OldaleTown_House1/scripts.pory"
	end
# 8 "data/maps/OldaleTown_House1/scripts.pory"

# 9 "data/maps/OldaleTown_House1/scripts.pory"
OldaleTown_House1_Text_LeftPokemonGoesOutFirst:
# 10 "data/maps/OldaleTown_House1/scripts.pory"
	.string "When a POKéMON battle starts, the one\n"
# 11 "data/maps/OldaleTown_House1/scripts.pory"
	.string "at the left of the list goes out first.\p"
# 12 "data/maps/OldaleTown_House1/scripts.pory"
	.string "So, when you get more POKéMON in your\n"
# 13 "data/maps/OldaleTown_House1/scripts.pory"
	.string "party, try switching around the order\l"
# 14 "data/maps/OldaleTown_House1/scripts.pory"
	.string "of your POKéMON.\p"
# 15 "data/maps/OldaleTown_House1/scripts.pory"
	.string "It could give you an advantage.$"

OldaleTown_House1_EventScript_OldRodFisherman::
# 19 "data/maps/OldaleTown_House1/scripts.pory"
	lock
# 20 "data/maps/OldaleTown_House1/scripts.pory"
	faceplayer
# 21 "data/maps/OldaleTown_House1/scripts.pory"
	goto_if_unset FLAG_RECEIVED_OLD_ROD, OldaleTown_House1_EventScript_OldRodFisherman_2
# 58 "data/maps/OldaleTown_House1/scripts.pory"
	message OldaleTown_House1_EventScript_OldRodFisherman_Text_4
# 60 "data/maps/OldaleTown_House1/scripts.pory"
	waitmessage
# 61 "data/maps/OldaleTown_House1/scripts.pory"
	multichoice 20, 8, MULTI_HOWS_FISHING, TRUE
# 62 "data/maps/OldaleTown_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleTown_House1_EventScript_OldRodFisherman_8
# 69 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleTown_House1_EventScript_OldRodFisherman_Text_6, MSGBOX_DEFAULT
OldaleTown_House1_EventScript_OldRodFisherman_1:
# 79 "data/maps/OldaleTown_House1/scripts.pory"
	release
	end

OldaleTown_House1_EventScript_OldRodFisherman_2:
# 23 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleTown_House1_EventScript_OldRodFisherman_Text_0, MSGBOX_YESNO
# 28 "data/maps/OldaleTown_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OldaleTown_House1_EventScript_OldRodFisherman_5
# 53 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleTown_House1_EventScript_OldRodFisherman_Text_3, MSGBOX_DEFAULT
	goto OldaleTown_House1_EventScript_OldRodFisherman_1

OldaleTown_House1_EventScript_OldRodFisherman_5:
# 30 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleTown_House1_EventScript_OldRodFisherman_Text_1, MSGBOX_DEFAULT
# 33 "data/maps/OldaleTown_House1/scripts.pory"
	giveitem ITEM_OLD_ROD
# 34 "data/maps/OldaleTown_House1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleTown_House1_EventScript_OldRodFisherman_11
# 40 "data/maps/OldaleTown_House1/scripts.pory"
	setflag FLAG_RECEIVED_OLD_ROD
# 41 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleTown_House1_EventScript_OldRodFisherman_Text_2, MSGBOX_DEFAULT
	goto OldaleTown_House1_EventScript_OldRodFisherman_1

OldaleTown_House1_EventScript_OldRodFisherman_8:
# 64 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleTown_House1_EventScript_OldRodFisherman_Text_5, MSGBOX_DEFAULT
	goto OldaleTown_House1_EventScript_OldRodFisherman_1

OldaleTown_House1_EventScript_OldRodFisherman_11:
# 36 "data/maps/OldaleTown_House1/scripts.pory"
	call Common_EventScript_ShowBagIsFull
	goto OldaleTown_House1_EventScript_OldRodFisherman_1


OldaleTown_House1_EventScript_OldRodFisherman_Text_0:
# 23 "data/maps/OldaleTown_House1/scripts.pory"
	.string "Oh, hello, youngster.\n"
	.string "Wonderful weather out, huh?\p"
	.string "Lemme tell ya, it would be great day to\n"
	.string "be anglin' out on the water.\p"
	.string "Say, are you itchin' to do some fishin'?$"

OldaleTown_House1_EventScript_OldRodFisherman_Text_1:
# 30 "data/maps/OldaleTown_House1/scripts.pory"
	.string "That's great to hear.\p"
	.string "Here,\n"
	.string "Why don't you take my old fishing ROD.$"

OldaleTown_House1_EventScript_OldRodFisherman_Text_2:
# 41 "data/maps/OldaleTown_House1/scripts.pory"
	.string "What about me, you say? \p"
	.string "Oh, I haven't fished in a long while.\p"
	.string "Doctor said it was causing to much\n"
	.string "strain on my joints.\p"
	.string "Too much of a good thing, right?\p"
	.string "You shouldn't have to worry about that\n"
	.string "though, being as young as you are.\l"
	.string "Just don't go taking it for granted.$"

OldaleTown_House1_EventScript_OldRodFisherman_Text_3:
# 53 "data/maps/OldaleTown_House1/scripts.pory"
	.string "Oh, is that so?\n"
	.string "That's too bad, then.$"

OldaleTown_House1_EventScript_OldRodFisherman_Text_4:
# 58 "data/maps/OldaleTown_House1/scripts.pory"
	.string "Howdy!\n"
	.string "The fishing going good?$"

OldaleTown_House1_EventScript_OldRodFisherman_Text_5:
# 64 "data/maps/OldaleTown_House1/scripts.pory"
	.string "Is that right!? That's great!\n"
	.string "Haul in some big ones for me!$"

OldaleTown_House1_EventScript_OldRodFisherman_Text_6:
# 69 "data/maps/OldaleTown_House1/scripts.pory"
	.string "Oh, hey, don't get down on yourself!\n"
	.string "I'll give you a little fishing advice.\p"
	.string "Every catch is a battle of wills.\p"
	.string "You need to be calm, patient, and\n"
	.string "focused.\l"
	.string "The fish'll know if you're not.\p"
	.string "The biggest thing is to be ready when\n"
	.string "one comes bitin'.$"
