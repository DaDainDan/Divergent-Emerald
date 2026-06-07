VerdanturfTown_FriendshipRatersHouse_MapScripts::
	.byte 0


VerdanturfTown_FriendshipRatersHouse_EventScript_FriendshipRater::
# 4 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	lock_faceplayer
# 5 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_SeeHowMuchPokemonLikesYou, MSGBOX_DEFAULT
# 6 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
# 7 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	switch VAR_RESULT
# 8 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	case FRIENDSHIP_NONE, VerdanturfTown_FriendshipRatersHouse_EventScript_FriendshipRater_3
# 9 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	case FRIENDSHIP_1_TO_49, VerdanturfTown_FriendshipRatersHouse_EventScript_FriendshipRater_4
# 10 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	case FRIENDSHIP_50_TO_99, VerdanturfTown_FriendshipRatersHouse_EventScript_FriendshipRater_5
# 11 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	case FRIENDSHIP_100_TO_149, VerdanturfTown_FriendshipRatersHouse_EventScript_FriendshipRater_6
# 12 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	case FRIENDSHIP_150_TO_199, VerdanturfTown_FriendshipRatersHouse_EventScript_FriendshipRater_7
# 13 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	case FRIENDSHIP_200_TO_254, VerdanturfTown_FriendshipRatersHouse_EventScript_FriendshipRater_8
# 14 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	case FRIENDSHIP_MAX, VerdanturfTown_FriendshipRatersHouse_EventScript_FriendshipRater_9
VerdanturfTown_FriendshipRatersHouse_EventScript_FriendshipRater_1:
	release_end

VerdanturfTown_FriendshipRatersHouse_EventScript_FriendshipRater_3:
# 8 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_DetestsYou, MSGBOX_DEFAULT
	goto VerdanturfTown_FriendshipRatersHouse_EventScript_FriendshipRater_1

VerdanturfTown_FriendshipRatersHouse_EventScript_FriendshipRater_4:
# 9 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_VeryWary, MSGBOX_DEFAULT
	goto VerdanturfTown_FriendshipRatersHouse_EventScript_FriendshipRater_1

VerdanturfTown_FriendshipRatersHouse_EventScript_FriendshipRater_5:
# 10 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_NotUsedToYou, MSGBOX_DEFAULT
	goto VerdanturfTown_FriendshipRatersHouse_EventScript_FriendshipRater_1

VerdanturfTown_FriendshipRatersHouse_EventScript_FriendshipRater_6:
# 11 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_GettingUsedToYou, MSGBOX_DEFAULT
	goto VerdanturfTown_FriendshipRatersHouse_EventScript_FriendshipRater_1

VerdanturfTown_FriendshipRatersHouse_EventScript_FriendshipRater_7:
# 12 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_LikesYouQuiteALot, MSGBOX_DEFAULT
	goto VerdanturfTown_FriendshipRatersHouse_EventScript_FriendshipRater_1

VerdanturfTown_FriendshipRatersHouse_EventScript_FriendshipRater_8:
# 13 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_VeryHappy, MSGBOX_DEFAULT
	goto VerdanturfTown_FriendshipRatersHouse_EventScript_FriendshipRater_1

VerdanturfTown_FriendshipRatersHouse_EventScript_FriendshipRater_9:
# 14 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_AdoresYou, MSGBOX_DEFAULT
	goto VerdanturfTown_FriendshipRatersHouse_EventScript_FriendshipRater_1


VerdanturfTown_FriendshipRatersHouse_EventScript_Pikachu::
# 20 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	lock_faceplayer
# 21 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	waitse
# 22 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
# 23 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_Pikachu, MSGBOX_DEFAULT
# 24 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	waitmoncry
	release_end


VerdanturfTown_FriendshipRatersHouse_Text_SeeHowMuchPokemonLikesYou::
# 28 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "Let me see your POKéMON.\n"
	.string "I'll check to see how much it likes you.\p"
	.string "Oh.\n"
	.string "Your POKéMON…$"

VerdanturfTown_FriendshipRatersHouse_Text_AdoresYou::
# 36 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "It adores you.\n"
	.string "It can't possibly love you any more.\l"
	.string "I even feel happy seeing it.$"

VerdanturfTown_FriendshipRatersHouse_Text_VeryHappy::
# 42 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "It seems to be very happy.\n"
	.string "It obviously likes you a whole lot.$"

VerdanturfTown_FriendshipRatersHouse_Text_LikesYouQuiteALot::
# 47 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "It likes you quite a lot.\n"
	.string "It seems to want to be babied a little.$"

VerdanturfTown_FriendshipRatersHouse_Text_GettingUsedToYou::
# 52 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "It's getting used to you.\n"
	.string "It seems to believe in you.$"

VerdanturfTown_FriendshipRatersHouse_Text_NotUsedToYou::
# 57 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "It's not very used to you yet.\n"
	.string "It neither loves nor hates you.$"

VerdanturfTown_FriendshipRatersHouse_Text_VeryWary::
# 62 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "It's very wary.\n"
	.string "It has scary viciousness in its eyes.\l"
	.string "It doesn't like you much at all.$"

VerdanturfTown_FriendshipRatersHouse_Text_DetestsYou::
# 68 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "This is a little hard for me to say…\p"
	.string "Your POKéMON simply detests you.\n"
	.string "Doesn't that make you uncomfortable?$"

VerdanturfTown_FriendshipRatersHouse_Text_Pikachu::
# 75 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "PIKACHU: Pika pika!$"
