OldaleTown_House1_MapScripts::
	.byte 0


OldaleTown_House1_EventScript_OldRodFisherman::
# 4 "data/maps/OldaleTown_House1/scripts.pory"
	lock_faceplayer
# 5 "data/maps/OldaleTown_House1/scripts.pory"
	goto_if_unset FLAG_RECEIVED_OLD_ROD, OldaleTown_House1_EventScript_OldRodFisherman_2
# 18 "data/maps/OldaleTown_House1/scripts.pory"
	message OldaleTown_House1_EventScript_OldRodFisherman_Text_2
# 19 "data/maps/OldaleTown_House1/scripts.pory"
	waitmessage
# 20 "data/maps/OldaleTown_House1/scripts.pory"
	multichoice 20, 8, MULTI_HOWS_FISHING, TRUE
# 21 "data/maps/OldaleTown_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq OldaleTown_House1_EventScript_OldRodFisherman_8
# 24 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleTown_House1_Text_FishingAdvice, MSGBOX_DEFAULT
OldaleTown_House1_EventScript_OldRodFisherman_1:
	release_end

OldaleTown_House1_EventScript_OldRodFisherman_2:
# 6 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleTown_House1_Text_OldRodFishermanIntro, MSGBOX_YESNO
# 7 "data/maps/OldaleTown_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OldaleTown_House1_EventScript_OldRodFisherman_5
# 15 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleTown_House1_EventScript_OldRodFisherman_Text_1, MSGBOX_DEFAULT
	goto OldaleTown_House1_EventScript_OldRodFisherman_1

OldaleTown_House1_EventScript_OldRodFisherman_5:
# 8 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleTown_House1_EventScript_OldRodFisherman_Text_0, MSGBOX_DEFAULT
	giveitem ITEM_OLD_ROD
# 0 "data/maps/OldaleTown_House1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq OldaleTown_House1_EventScript_OldRodFisherman_12
OldaleTown_House1_EventScript_OldRodFisherman_11:
# 12 "data/maps/OldaleTown_House1/scripts.pory"
	setflag FLAG_RECEIVED_OLD_ROD
# 13 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleTown_House1_Text_FishermanStory, MSGBOX_DEFAULT
	goto OldaleTown_House1_EventScript_OldRodFisherman_1

OldaleTown_House1_EventScript_OldRodFisherman_8:
# 22 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleTown_House1_EventScript_OldRodFisherman_Text_3, MSGBOX_DEFAULT
	goto OldaleTown_House1_EventScript_OldRodFisherman_1

OldaleTown_House1_EventScript_OldRodFisherman_12:
# 10 "data/maps/OldaleTown_House1/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto OldaleTown_House1_EventScript_OldRodFisherman_11


OldaleTown_House1_EventScript_Woman::
# 32 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleTown_House1_Text_LeftPokemonGoesOutFirst, MSGBOX_NPC
	end


OldaleTown_House1_EventScript_OldRodFisherman_Text_0:
# 8 "data/maps/OldaleTown_House1/scripts.pory"
	.string "That's great to hear.\pHere, why don't you take my OLD\nfishing ROD.$"

OldaleTown_House1_EventScript_OldRodFisherman_Text_1:
# 15 "data/maps/OldaleTown_House1/scripts.pory"
	.string "Oh, is that so?\nThat's too bad, then.$"

OldaleTown_House1_EventScript_OldRodFisherman_Text_2:
# 18 "data/maps/OldaleTown_House1/scripts.pory"
	.string "Howdy!\nThe fishing going good?$"

OldaleTown_House1_EventScript_OldRodFisherman_Text_3:
# 22 "data/maps/OldaleTown_House1/scripts.pory"
	.string "Is that right!? That's great!\nHaul in some big ones for me!$"

OldaleTown_House1_Text_OldRodFishermanIntro::
# 36 "data/maps/OldaleTown_House1/scripts.pory"
	.string "Oh, hello, youngster.\n"
	.string "Wonderful weather out, huh?\p"
	.string "Lemme tell ya, it would be great day to\n"
	.string "be anglin' out on the water.\p"
	.string "Say, are you itchin' to do some fishin'?$"

OldaleTown_House1_Text_FishingAdvice::
# 46 "data/maps/OldaleTown_House1/scripts.pory"
	.string "Oh, hey, don't get down on yourself!\n"
	.string "I'll give you a little fishing advice.\p"
	.string "Every catch is a battle of wills.\n"
	.string "You need to be calm, patient, and\l"
	.string "focused.\p"
	.string "The fish'll know if you're not.\p"
	.string "The biggest thing is to be ready when\n"
	.string "one comes bitin'.$"

OldaleTown_House1_Text_FishermanStory::
# 60 "data/maps/OldaleTown_House1/scripts.pory"
	.string "What about me, you say? \p"
	.string "Oh, I haven't fished in a long while.\p"
	.string "Doctor said it was causing to much\n"
	.string "strain on my joints.\p"
	.string "Too much of a good thing, right?\p"
	.string "You shouldn't have to worry about that\n"
	.string "though, being as young as you are.\l"
	.string "Just don't go taking it for granted.$"

OldaleTown_House1_Text_LeftPokemonGoesOutFirst::
# 76 "data/maps/OldaleTown_House1/scripts.pory"
	.string "When a POKéMON battle starts, the one\n"
	.string "at the left of the list goes out first.\p"
	.string "So, when you get more POKéMON in your\n"
	.string "party, try switching around the order\l"
	.string "of your POKéMON.\p"
	.string "It could give you an advantage.$"
