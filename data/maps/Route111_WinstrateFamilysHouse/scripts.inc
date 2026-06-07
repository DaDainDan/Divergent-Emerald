Route111_WinstrateFamilysHouse_MapScripts::
	.byte 0


Route111_WinstrateFamilysHouse_EventScript_Victor::
# 4 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	lock_faceplayer
# 5 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, LOCALID_WINSTRATE_HOUSE_VICTOR
# 6 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_MySonIsStrongerThanYou, MSGBOX_DEFAULT
# 7 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
	end


Route111_WinstrateFamilysHouse_EventScript_Victoria::
# 12 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	lock_faceplayer
# 13 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, LOCALID_WINSTRATE_HOUSE_VICTORIA
# 14 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_MACHO_BRACE, Route111_WinstrateFamilysHouse_EventScript_Victoria_2
# 17 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_LikeYouToHaveMachoBrace, MSGBOX_DEFAULT
	giveitem ITEM_MACHO_BRACE
# 0 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route111_WinstrateFamilysHouse_EventScript_Victoria_6
Route111_WinstrateFamilysHouse_EventScript_Victoria_5:
# 21 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setflag FLAG_RECEIVED_MACHO_BRACE
Route111_WinstrateFamilysHouse_EventScript_Victoria_1:
# 23 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
	end

Route111_WinstrateFamilysHouse_EventScript_Victoria_2:
# 15 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_PassionateAboutBattles, MSGBOX_DEFAULT
	goto Route111_WinstrateFamilysHouse_EventScript_Victoria_1

Route111_WinstrateFamilysHouse_EventScript_Victoria_6:
# 19 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto Route111_WinstrateFamilysHouse_EventScript_Victoria_5


Route111_WinstrateFamilysHouse_EventScript_Vivi::
# 28 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	lock_faceplayer
# 29 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, LOCALID_WINSTRATE_HOUSE_VIVI
# 30 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_StrongerFamilyMembers, MSGBOX_DEFAULT
# 31 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
	end


Route111_WinstrateFamilysHouse_EventScript_Vicky::
# 36 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	lock_faceplayer
# 37 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setvar VAR_0x8008, LOCALID_WINSTRATE_HOUSE_VICKY
# 38 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto_if_set FLAG_TEMP_4, Route111_WinstrateFamilysHouse_EventScript_Vicky_2
# 41 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_GrandsonStrong, MSGBOX_DEFAULT
# 42 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	setflag FLAG_TEMP_4
Route111_WinstrateFamilysHouse_EventScript_Vicky_1:
# 44 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
	end

Route111_WinstrateFamilysHouse_EventScript_Vicky_2:
# 39 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	msgbox Route111_WinstrateFamilysHouse_Text_GrandsonStrongShort, MSGBOX_DEFAULT
	goto Route111_WinstrateFamilysHouse_EventScript_Vicky_1


Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection::
# 49 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	closemessage
# 50 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	applymovement VAR_0x8008, Common_Movement_FaceOriginalDirection
# 51 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	waitmovement 0
	release_end


Route111_WinstrateFamilysHouse_Text_MySonIsStrongerThanYou::
# 55 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "You're the first TRAINER I've seen who\n"
	.string "deploys POKéMON so masterfully.\p"
	.string "But, I should tell you--my son is\n"
	.string "stronger than you.\p"
	.string "He even took the POKéMON LEAGUE\n"
	.string "challenge, I'll have you know.$"

Route111_WinstrateFamilysHouse_Text_LikeYouToHaveMachoBrace::
# 66 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "We use this MACHO BRACE to more\n"
	.string "effectively strengthen our POKéMON\l"
	.string "in training.\p"
	.string "Since you've beaten all of us here,\n"
	.string "I don't know if you need it, but we\l"
	.string "would like you to have our MACHO BRACE.$"

Route111_WinstrateFamilysHouse_Text_PassionateAboutBattles::
# 76 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "When it comes to POKéMON battles,\n"
	.string "we tend to be pretty passionate.$"

Route111_WinstrateFamilysHouse_Text_StrongerFamilyMembers::
# 81 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "Mommy is stronger than Daddy.\p"
	.string "I'm stronger than Mommy.\p"
	.string "And Grandma's stronger than me!\p"
	.string "But my big brother is even stronger\n"
	.string "than Grandma.$"

Route111_WinstrateFamilysHouse_Text_GrandsonStrong::
# 92 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "There's no question that you're strong.\p"
	.string "But if you were to battle my grandson,\n"
	.string "you'd end up crying in frustration.\p"
	.string "He's much stronger than any TRAINER\n"
	.string "our family knows.\p"
	.string "He must be challenging the POKéMON\n"
	.string "LEAGUE CHAMPION by now.\p"
	.string "Knowing my grandson, he could be the\n"
	.string "CHAMPION already!$"

Route111_WinstrateFamilysHouse_Text_GrandsonStrongShort::
# 108 "data/maps/Route111_WinstrateFamilysHouse/scripts.pory"
	.string "My grandson must be challenging the\n"
	.string "POKéMON LEAGUE CHAMPION by now.\p"
	.string "Knowing my grandson, he could be the\n"
	.string "CHAMPION already!$"
