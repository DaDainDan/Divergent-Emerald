VerdanturfTown_WandasHouse_MapScripts::
	.byte 0


VerdanturfTown_WandasHouse_EventScript_Wally::
# 4 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	lock_faceplayer
# 5 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_WALLY_DRIVE, VerdanturfTown_WandasHouse_EventScript_Wally_2
# 12 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_WALLY_SPEECH, VerdanturfTown_WandasHouse_EventScript_Wally_9
# 16 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_BondSpeech, MSGBOX_DEFAULT
VerdanturfTown_WandasHouse_EventScript_Wally_1:
# 18 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	setflag FLAG_WALLY_SPEECH
	release_end

VerdanturfTown_WandasHouse_EventScript_Wally_2:
# 6 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_WALLY_SPEECH, VerdanturfTown_WandasHouse_EventScript_Wally_6
# 10 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_StrongerSpeech, MSGBOX_DEFAULT
	goto VerdanturfTown_WandasHouse_EventScript_Wally_1

VerdanturfTown_WandasHouse_EventScript_Wally_6:
# 7 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_StrongerSpeechShort, MSGBOX_DEFAULT
	release_end

VerdanturfTown_WandasHouse_EventScript_Wally_9:
# 13 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_BondsSpeechShort, MSGBOX_DEFAULT
	release_end


VerdanturfTown_WandasHouse_EventScript_WallysUncle::
# 23 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	lock_faceplayer
# 24 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, VerdanturfTown_WandasHouse_EventScript_WallysUncle_2
# 27 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, VerdanturfTown_WandasHouse_EventScript_WallysUncle_3
# 31 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_WallysNextDoor, MSGBOX_DEFAULT
VerdanturfTown_WandasHouse_EventScript_WallysUncle_1:
	release_end

VerdanturfTown_WandasHouse_EventScript_WallysUncle_2:
# 25 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_WallyGoneThatFar, MSGBOX_DEFAULT
	goto VerdanturfTown_WandasHouse_EventScript_WallysUncle_1

VerdanturfTown_WandasHouse_EventScript_WallysUncle_3:
# 28 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_WallySlippedOff, MSGBOX_DEFAULT
	goto VerdanturfTown_WandasHouse_EventScript_WallysUncle_1


VerdanturfTown_WandasHouse_EventScript_WandasBoyfriend::
# 37 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_CanSeeGirlfriendEveryDay, MSGBOX_NPC
	end


VerdanturfTown_WandasHouse_EventScript_Wanda::
# 42 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	lock_faceplayer
# 43 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_WALLY_MAUVILLE, VerdanturfTown_WandasHouse_EventScript_Wanda_4
VerdanturfTown_WandasHouse_EventScript_Wanda_3:
# 46 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_DontWorryAboutWally, MSGBOX_DEFAULT
VerdanturfTown_WandasHouse_EventScript_Wanda_1:
	release_end

VerdanturfTown_WandasHouse_EventScript_Wanda_2:
# 44 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_MeetWanda, MSGBOX_DEFAULT
	goto VerdanturfTown_WandasHouse_EventScript_Wanda_1

VerdanturfTown_WandasHouse_EventScript_Wanda_4:
# 43 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_unset FLAG_DEFEATED_LAVARIDGE_GYM, VerdanturfTown_WandasHouse_EventScript_Wanda_2
	goto VerdanturfTown_WandasHouse_EventScript_Wanda_3


VerdanturfTown_WandasHouse_EventScript_WallysAunt::
# 52 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	lock_faceplayer
# 53 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, VerdanturfTown_WandasHouse_EventScript_WallysAunt_2
# 56 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, VerdanturfTown_WandasHouse_EventScript_WallysAunt_3
# 59 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_WandasHouse_EventScript_WallysAunt_4
# 63 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendDriven, MSGBOX_DEFAULT
VerdanturfTown_WandasHouse_EventScript_WallysAunt_1:
	release_end

VerdanturfTown_WandasHouse_EventScript_WallysAunt_2:
# 54 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_WallyWasInEverGrande, MSGBOX_DEFAULT
	goto VerdanturfTown_WandasHouse_EventScript_WallysAunt_1

VerdanturfTown_WandasHouse_EventScript_WallysAunt_3:
# 57 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_IfAnythingHappenedToWally, MSGBOX_DEFAULT
	goto VerdanturfTown_WandasHouse_EventScript_WallysAunt_1

VerdanturfTown_WandasHouse_EventScript_WallysAunt_4:
# 60 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendWasDigging, MSGBOX_DEFAULT
	goto VerdanturfTown_WandasHouse_EventScript_WallysAunt_1


VerdanturfTown_WandasHouse_Text_StrongerSpeech::
# 68 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "{SPEAKER NAME_WALLY}You beat me, {PLAYER}, but I've\n"
	.string "made my decision.\p"
	.string "I'm going to win.\n"
	.string "I'm going to be the best.\p"
	.string "Together with FAITH, I'm going\n"
	.string "to complete the GYM CHALLENGE and\l"
	.string "become the CHAMPION.\p"
	.string "Just you wait, {PLAYER}.\n"
	.string "I'm going to be stronger than you.\p"
	.string "And when that day comes, I'll\n"
	.string "challenge you again.\p"
	.string "And I will defeat you!$"

VerdanturfTown_WandasHouse_Text_StrongerSpeechShort::
# 88 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "{SPEAKER NAME_WALLY}Just you wait, {PLAYER}.\p"
	.string "I will be the best, \n"
	.string "and I will defeat you!$"

VerdanturfTown_WandasHouse_Text_BondSpeech::
# 95 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "{SPEAKER NAME_WALLY}{PLAYER}, even though I lost, \n"
	.string "I'm feeling much better than before.\p"
	.string "Because know I know that so long as \n"
	.string "I have FAITH and my other POKéMON,\l"
	.string "everything will be okay!\p"
	.string "I will attempt the GYM Challenge,\n"
	.string "and even if I fail, I'll still\l"
	.string "learn and have fun!\p"
	.string "Nothing can hurt me anymore.\p"
	.string "Thank you, {PLAYER}.\n"
	.string "You've really helped me.\p"
	.string "I know we'll see each other again, and\n"
	.string "when we do, maybe we could even have a\l"
	.string "friendly rematch.$"

VerdanturfTown_WandasHouse_Text_BondsSpeechShort::
# 117 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "{SPEAKER NAME_WALLY}Thank you, {PLAYER}.\n"
	.string "You've really helped me.\p"
	.string "I hope I'll see you again.$"

VerdanturfTown_WandasHouse_Text_WallysNextDoor::
# 124 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "{SPEAKER NAME_WADE}Oh! {PLAYER}{KUN}!\n"
	.string "WALLY's next door.\p"
	.string "But, boy, there's something I have to\n"
	.string "tell you.\p"
	.string "This natural environment is doing\n"
	.string "wonders for WALLY's health.\p"
	.string "Maybe it's not just the environment.\n"
	.string "It could be POKéMON that are giving\l"
	.string "the boy hope.$"

VerdanturfTown_WandasHouse_Text_WallySlippedOff::
# 139 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "WALLY's gone away…\n"
	.string "He slipped off on his own…$"

VerdanturfTown_WandasHouse_Text_WallyGoneThatFar::
# 144 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "{SPEAKER NAME_WADE}Is that right?\n"
	.string "WALLY's gone away that far all by\l"
	.string "himself…\p"
	.string "Well, I have to give him credit--he is\n"
	.string "my little brother's son.$"

VerdanturfTown_WandasHouse_Text_MeetWanda::
# 153 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "{SPEAKER NAME_WANDA}You are?\n"
	.string "Oh, right, I get it!\p"
	.string "You're the {PLAYER} who WALLY was\n"
	.string "telling me about.\p"
	.string "I'm WALLY's cousin.\n"
	.string "Glad to meet you!\p"
	.string "I think WALLY's become a lot more lively\n"
	.string "and healthy since he came here.$"

VerdanturfTown_WandasHouse_Text_DontWorryAboutWally::
# 167 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "{SPEAKER NAME_WANDA}Don't worry about WALLY.\n"
	.string "He'll be just fine.\p"
	.string "I know my little cousin, and he has\n"
	.string "POKéMON with him, too.$"

VerdanturfTown_WandasHouse_Text_CanSeeGirlfriendEveryDay::
# 175 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Thanks to you, I can see my girlfriend\n"
	.string "every day.\l"
	.string "Happy? You bet I am!$"

VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendDriven::
# 181 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "My daughter's boyfriend is a very\n"
	.string "driven and passionate sort of person.\p"
	.string "He's been digging a tunnel nonstop\n"
	.string "just so he can see my daughter.\p"
	.string "My daughter's a little concerned,\n"
	.string "so she goes out to the tunnel a lot.$"

VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendWasDigging::
# 192 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "It's amazing. My daughter's boyfriend\n"
	.string "was digging the tunnel by hand!\p"
	.string "It's so incredible!$"

VerdanturfTown_WandasHouse_Text_IfAnythingHappenedToWally::
# 199 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "If anything were to happen to WALLY,\n"
	.string "I would never be able to look his\l"
	.string "parents in PETALBURG in the eye…$"

VerdanturfTown_WandasHouse_Text_WallyWasInEverGrande::
# 205 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "WALLY was in EVER GRANDE?\p"
	.string "His parents in PETALBURG would be\n"
	.string "astonished to hear that!$"
