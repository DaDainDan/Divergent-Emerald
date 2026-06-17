Route15_WestEntrance_2F_Frlg_MapScripts::
	.byte 0


Route15_WestEntrance_2F_EventScript_LeftBinoculars::
# 6 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	lockall
# 7 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	msgbox Route15_WestEntrance_2F_Text_LargeShiningBird
# 8 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	showmonpic SPECIES_ARTICUNO, 10, 3
# 9 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	delay 20
# 10 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	waitbuttonpress
# 11 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	hidemonpic
# 12 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_ARTICUNO
# 13 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	special SetSeenMon
# 14 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	releaseall
	end


Route15_WestEntrance_2F_EventScript_RightBinoculars::
# 19 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	msgbox Route15_WestEntrance_2F_Text_SmallIslandOnHorizon, MSGBOX_SIGN
	end


Route15_WestEntrance_2F_EventScript_Aide::
# 24 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	lock_faceplayer
# 25 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	call Route15_WestEntrance_2F_EventScript_GetAideRequestInfo
# 26 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_EXP_SHARE_FROM_OAKS_AIDE, Route15_WestEntrance_2F_EventScript_Aide_2
Route15_WestEntrance_2F_EventScript_Aide_1:
# 45 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	msgbox Route15_WestEntrance_2F_Text_ExplainExpShare
	release_end

Route15_WestEntrance_2F_EventScript_Aide_2:
# 27 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	msgbox Route15_WestEntrance_2F_Text_GiveItemIfCaughtEnough, MSGBOX_YESNO
# 28 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route15_WestEntrance_2F_EventScript_Aide_5
Route15_WestEntrance_2F_EventScript_Aide_4:
# 31 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 32 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetFrlgPokedexCount
# 33 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 34 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	call Route15_WestEntrance_2F_EventScript_GetAideRequestInfo
# 35 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	compare VAR_0x8006, 50
	goto_if_lt Route15_WestEntrance_2F_EventScript_Aide_8
Route15_WestEntrance_2F_EventScript_Aide_7:
# 38 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	msgbox Route15_WestEntrance_2F_Text_GreatHereYouGo
	checkitemspace ITEM_EXP_SHARE
# 0 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route15_WestEntrance_2F_EventScript_Aide_11
Route15_WestEntrance_2F_EventScript_Aide_10:
# 42 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	giveitem_msg Route15_WestEntrance_2F_Text_ReceivedItemFromAide, ITEM_EXP_SHARE
# 43 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	setflag FLAG_GOT_EXP_SHARE_FROM_OAKS_AIDE
	goto Route15_WestEntrance_2F_EventScript_Aide_1

Route15_WestEntrance_2F_EventScript_Aide_5:
# 29 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	goto Aide_EventScript_DeclineCheckMons
	goto Route15_WestEntrance_2F_EventScript_Aide_4

Route15_WestEntrance_2F_EventScript_Aide_8:
# 36 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	goto Aide_EventScript_HaventCaughtEnough
	goto Route15_WestEntrance_2F_EventScript_Aide_7

Route15_WestEntrance_2F_EventScript_Aide_11:
# 40 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	goto Aide_EventScript_NoRoomForItem
	goto Route15_WestEntrance_2F_EventScript_Aide_10


Route15_WestEntrance_2F_EventScript_GetAideRequestInfo::
# 50 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	buffernumberstring STR_VAR_1, 50
# 51 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_EXP_SHARE
	return


Route15_WestEntrance_2F_Text_GiveItemIfCaughtEnough::
# 55 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "Hi! Remember me?\n"
	.string "I'm one of PROF. OAK's AIDES.\p"
	.string "If your POKéDEX has complete data\n"
	.string "on {STR_VAR_1} species, I'm supposed to\l"
	.string "give you a reward.\p"
	.string "PROF. OAK entrusted me with the\n"
	.string "{STR_VAR_2} for you.\p"
	.string "So, {PLAYER}, let me ask you.\p"
	.string "Have you gathered data on at least\n"
	.string "{STR_VAR_1} kinds of POKéMON?$"

Route15_WestEntrance_2F_Text_GreatHereYouGo::
# 72 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "Great! You have caught or owned\n"
	.string "{STR_VAR_3} kinds of POKéMON!\p"
	.string "Congratulations!\n"
	.string "Here you go!$"

Route15_WestEntrance_2F_Text_ReceivedItemFromAide::
# 80 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_2}\n"
	.string "from the AIDE.$"

Route15_WestEntrance_2F_Text_ExplainExpShare::
# 85 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "EXP. SHARE is an item to be held\n"
	.string "by a POKéMON.\p"
	.string "The POKéMON will receive a share\n"
	.string "of the EXP. Points without having\l"
	.string "to battle.$"

Route15_WestEntrance_2F_Text_LargeShiningBird::
# 94 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "Let's see what the binoculars have\n"
	.string "to show…\p"
	.string "A large, shining bird is flying\n"
	.string "toward the sea.$"

Route15_WestEntrance_2F_Text_SmallIslandOnHorizon::
# 102 "data/maps/Route15_WestEntrance_2F_Frlg/scripts.pory"
	.string "Let's see what the binoculars have\n"
	.string "to show…\p"
	.string "It looks like a small island on\n"
	.string "the horizon!$"
