VerdanturfTown_WandasHouse_MapScripts::
	.byte 0


VerdanturfTown_WandasHouse_EventScript_Wally::
# 4 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	lock_faceplayer
# 5 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_WALLY_SPEECH, VerdanturfTown_WandasHouse_EventScript_Wally_2
# 9 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_StrongerSpeech, MSGBOX_DEFAULT
# 10 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	setflag FLAG_WALLY_SPEECH
	release_end

VerdanturfTown_WandasHouse_EventScript_Wally_2:
# 6 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_StrongerSpeechShort, MSGBOX_DEFAULT
	release_end


VerdanturfTown_WandasHouse_EventScript_WallysUncle::
# 15 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	lock_faceplayer
# 16 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, VerdanturfTown_WandasHouse_EventScript_WallysUncle_2
# 19 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, VerdanturfTown_WandasHouse_EventScript_WallysUncle_3
# 23 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_WallysNextDoor, MSGBOX_DEFAULT
VerdanturfTown_WandasHouse_EventScript_WallysUncle_1:
	release_end

VerdanturfTown_WandasHouse_EventScript_WallysUncle_2:
# 17 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_WallyGoneThatFar, MSGBOX_DEFAULT
	goto VerdanturfTown_WandasHouse_EventScript_WallysUncle_1

VerdanturfTown_WandasHouse_EventScript_WallysUncle_3:
# 20 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_WallySlippedOff, MSGBOX_DEFAULT
	goto VerdanturfTown_WandasHouse_EventScript_WallysUncle_1


VerdanturfTown_WandasHouse_EventScript_WandasBoyfriend::
# 29 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_CanSeeGirlfriendEveryDay, MSGBOX_NPC
	end


VerdanturfTown_WandasHouse_EventScript_Wanda::
# 34 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	lock_faceplayer
# 35 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_WALLY_MAUVILLE, VerdanturfTown_WandasHouse_EventScript_Wanda_4
VerdanturfTown_WandasHouse_EventScript_Wanda_3:
# 38 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_DontWorryAboutWally, MSGBOX_DEFAULT
VerdanturfTown_WandasHouse_EventScript_Wanda_1:
	release_end

VerdanturfTown_WandasHouse_EventScript_Wanda_2:
# 36 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_MeetWanda, MSGBOX_DEFAULT
	goto VerdanturfTown_WandasHouse_EventScript_Wanda_1

VerdanturfTown_WandasHouse_EventScript_Wanda_4:
# 35 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_unset FLAG_DEFEATED_LAVARIDGE_GYM, VerdanturfTown_WandasHouse_EventScript_Wanda_2
	goto VerdanturfTown_WandasHouse_EventScript_Wanda_3


VerdanturfTown_WandasHouse_EventScript_WallysAunt::
# 44 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	lock_faceplayer
# 45 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, VerdanturfTown_WandasHouse_EventScript_WallysAunt_2
# 48 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, VerdanturfTown_WandasHouse_EventScript_WallysAunt_3
# 51 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_WandasHouse_EventScript_WallysAunt_4
# 55 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendDriven, MSGBOX_DEFAULT
VerdanturfTown_WandasHouse_EventScript_WallysAunt_1:
	release_end

VerdanturfTown_WandasHouse_EventScript_WallysAunt_2:
# 46 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_WallyWasInEverGrande, MSGBOX_DEFAULT
	goto VerdanturfTown_WandasHouse_EventScript_WallysAunt_1

VerdanturfTown_WandasHouse_EventScript_WallysAunt_3:
# 49 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_IfAnythingHappenedToWally, MSGBOX_DEFAULT
	goto VerdanturfTown_WandasHouse_EventScript_WallysAunt_1

VerdanturfTown_WandasHouse_EventScript_WallysAunt_4:
# 52 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendWasDigging, MSGBOX_DEFAULT
	goto VerdanturfTown_WandasHouse_EventScript_WallysAunt_1


VerdanturfTown_WandasHouse_Text_StrongerSpeech::
# 60 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "WALLY: I lost to you, {PLAYER}, but I'm\n"
	.string "not feeling down anymore.\p"
	.string "Because I have a new purpose in life.\n"
	.string "Together with my RALTS, I'm going\l"
	.string "to challenge POKéMON GYMS and become\l"
	.string "a great TRAINER.\p"
	.string "Please watch me, {PLAYER}.\n"
	.string "I'm going to be stronger than you.\p"
	.string "When I do, I'm going to challenge you\n"
	.string "to another battle.$"

VerdanturfTown_WandasHouse_Text_StrongerSpeechShort::
# 76 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "WALLY: Please watch me, {PLAYER}.\n"
	.string "I'm going to get stronger than you.\p"
	.string "When I do, I'm going to challenge you\n"
	.string "to another battle.$"

VerdanturfTown_WandasHouse_Text_WallysNextDoor::
# 84 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "UNCLE: Oh! {PLAYER}{KUN}!\n"
	.string "WALLY's next door.\p"
	.string "But, boy, there's something I have to\n"
	.string "tell you.\p"
	.string "This natural environment is doing\n"
	.string "wonders for WALLY's health.\p"
	.string "Maybe it's not just the environment.\n"
	.string "It could be POKéMON that are giving\l"
	.string "the boy hope.$"

VerdanturfTown_WandasHouse_Text_WallySlippedOff::
# 99 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "WALLY's gone away…\n"
	.string "He slipped off on his own…$"

VerdanturfTown_WandasHouse_Text_WallyGoneThatFar::
# 104 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "UNCLE: Is that right?\n"
	.string "WALLY's gone away that far all by\l"
	.string "himself…\p"
	.string "Well, I have to give him credit--he is\n"
	.string "my little brother's son.$"

VerdanturfTown_WandasHouse_Text_MeetWanda::
# 113 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "WANDA: You are?\n"
	.string "Oh, right, I get it!\p"
	.string "You're the {PLAYER} who WALLY was\n"
	.string "telling me about.\p"
	.string "I'm WALLY's cousin.\n"
	.string "Glad to meet you!\p"
	.string "I think WALLY's become a lot more lively\n"
	.string "and healthy since he came here.$"

VerdanturfTown_WandasHouse_Text_DontWorryAboutWally::
# 127 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "WANDA: Don't worry about WALLY.\n"
	.string "He'll be just fine.\p"
	.string "I know my little cousin, and he has\n"
	.string "POKéMON with him, too.$"

VerdanturfTown_WandasHouse_Text_CanSeeGirlfriendEveryDay::
# 135 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Thanks to you, I can see my girlfriend\n"
	.string "every day.\l"
	.string "Happy? You bet I am!$"

VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendDriven::
# 141 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "My daughter's boyfriend is a very\n"
	.string "driven and passionate sort of person.\p"
	.string "He's been digging a tunnel nonstop\n"
	.string "just so he can see my daughter.\p"
	.string "My daughter's a little concerned,\n"
	.string "so she goes out to the tunnel a lot.$"

VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendWasDigging::
# 152 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "It's amazing. My daughter's boyfriend\n"
	.string "was digging the tunnel by hand!\p"
	.string "It's so incredible!$"

VerdanturfTown_WandasHouse_Text_IfAnythingHappenedToWally::
# 159 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "If anything were to happen to WALLY,\n"
	.string "I would never be able to look his\l"
	.string "parents in PETALBURG in the eye…$"

VerdanturfTown_WandasHouse_Text_WallyWasInEverGrande::
# 165 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "WALLY was in EVER GRANDE?\p"
	.string "His parents in PETALBURG would be\n"
	.string "astonished to hear that!$"
