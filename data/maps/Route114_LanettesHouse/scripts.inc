Route114_LanettesHouse_MapScripts::
# 2 "data/maps/Route114_LanettesHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_LanettesHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route114_LanettesHouse_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route114_LanettesHouse/scripts.pory"
	setflag FLAG_LANDMARK_LANETTES_HOUSE
	end


Route114_LanettesHouse_EventScript_Lanette::
# 9 "data/maps/Route114_LanettesHouse/scripts.pory"
	lock_faceplayer
# 10 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_DOLL_LANETTE, Route114_LanettesHouse_EventScript_Lanette_2
# 14 "data/maps/Route114_LanettesHouse/scripts.pory"
	setflag FLAG_SYS_PC_LANETTE
# 15 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_EverythingClutteredKeepThis, MSGBOX_DEFAULT
	givedecoration DECOR_LOTAD_DOLL
# 0 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route114_LanettesHouse_EventScript_Lanette_5
Route114_LanettesHouse_EventScript_Lanette_4:
# 19 "data/maps/Route114_LanettesHouse/scripts.pory"
	setflag FLAG_RECEIVED_DOLL_LANETTE
	release_end

Route114_LanettesHouse_EventScript_Lanette_2:
# 11 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_OrganizeYourBoxes, MSGBOX_DEFAULT
	release_end

Route114_LanettesHouse_EventScript_Lanette_5:
# 17 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto Common_EventScript_ShowNoRoomForDecor
	goto Route114_LanettesHouse_EventScript_Lanette_4


Route114_LanettesHouse_EventScript_Notebook::
# 24 "data/maps/Route114_LanettesHouse/scripts.pory"
	lockall
# 25 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_ResearchNotesPage1, MSGBOX_YESNO
# 26 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route114_LanettesHouse_EventScript_Notebook_2
# 32 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_ClosedTheNotebook, MSGBOX_DEFAULT
Route114_LanettesHouse_EventScript_Notebook_1:
# 34 "data/maps/Route114_LanettesHouse/scripts.pory"
	releaseall
	end

Route114_LanettesHouse_EventScript_Notebook_2:
# 27 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_ResearchNotesPage2, MSGBOX_YESNO
# 28 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route114_LanettesHouse_EventScript_Notebook_5
	goto Route114_LanettesHouse_EventScript_Notebook_1

Route114_LanettesHouse_EventScript_Notebook_5:
# 29 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_ResearchNotesPage3, MSGBOX_DEFAULT
	goto Route114_LanettesHouse_EventScript_Notebook_1


Route114_LanettesHouse_EventScript_PC::
# 39 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_EmailFromBill, MSGBOX_SIGN
	end


Route114_LanettesHouse_Text_EverythingClutteredKeepThis::
# 43 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "{SPEAKER NAME_LANETTE}Oh! {PLAYER}{KUN}!\p"
	.string "I'm sorry everything is so cluttered…\n"
	.string "When I get engrossed in research,\l"
	.string "things end up this way…\p"
	.string "This is embarrassing… Please keep\n"
	.string "this a secret in exchange for this.$"

Route114_LanettesHouse_Text_OrganizeYourBoxes::
# 54 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "May I offer advice about my POKéMON\n"
	.string "Storage System?\p"
	.string "You should organize your BOXES so you\n"
	.string "can tell which POKéMON are in them.$"

Route114_LanettesHouse_Text_ResearchNotesPage1::
# 62 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "It's LANETTE's research notes.\n"
	.string "There's information about BOXES.\p"
	.string "Design BOXES to hold 30 POKéMON each.\p"
	.string "Each TRAINER should be able to store\n"
	.string "420 POKéMON on the PC system.\p"
	.string "Keep reading?$"

Route114_LanettesHouse_Text_ResearchNotesPage2::
# 74 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "A marking system should be added to\n"
	.string "make POKéMON easier to organize.\p"
	.string "The name and wallpaper design of each\n"
	.string "BOX will be made changeable to please\l"
	.string "the stored POKéMON.\p"
	.string "Keep reading?$"

Route114_LanettesHouse_Text_ResearchNotesPage3::
# 85 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "When storing a POKéMON, it should be\n"
	.string "sent to the BOX inspected last.\p"
	.string "If that BOX is full, the received\n"
	.string "POKéMON is stored in the next BOX.\p"
	.string "In other words, when a BOX is examined,\n"
	.string "it is automatically selected as the BOX\l"
	.string "to which POKéMON are sent.$"

Route114_LanettesHouse_Text_ClosedTheNotebook::
# 97 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "{PLAYER} closed the notebook.$"

Route114_LanettesHouse_Text_EmailFromBill::
# 101 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "There's an e-mail from someone on\n"
	.string "the PC.\p"
	.string "“… … … … … … …\p"
	.string "“Your Storage System offers more\n"
	.string "convenience than mine.\p"
	.string "“It has a lot of user-friendly features\n"
	.string "that make it fun and useful, too.\p"
	.string "“It makes me proud that I played\n"
	.string "a part in its development.\p"
	.string "“Here's hoping that you'll continue\n"
	.string "research in Storage Systems.\p"
	.string "“From BILL\n"
	.string "… … … … … … … …”$"
