NavelRock_Harbor_MapScripts::
	.byte 0


NavelRock_Harbor_EventScript_Sailor::
# 4 "data/maps/NavelRock_Harbor/scripts.pory"
	lock_faceplayer
# 5 "data/maps/NavelRock_Harbor/scripts.pory"
	msgbox NavelRock_Harbor_Text_SailorReturn, MSGBOX_YESNO
# 6 "data/maps/NavelRock_Harbor/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq NavelRock_Harbor_EventScript_Sailor_2
# 10 "data/maps/NavelRock_Harbor/scripts.pory"
	msgbox EventTicket_Text_SailHome, MSGBOX_DEFAULT
# 11 "data/maps/NavelRock_Harbor/scripts.pory"
	closemessage
# 12 "data/maps/NavelRock_Harbor/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_StepFasterDown
# 13 "data/maps/NavelRock_Harbor/scripts.pory"
	waitmovement 0
# 14 "data/maps/NavelRock_Harbor/scripts.pory"
	delay 30
# 15 "data/maps/NavelRock_Harbor/scripts.pory"
	hideobjectat LOCALID_NAVEL_ROCK_SAILOR, MAP_NAVEL_ROCK_HARBOR
# 16 "data/maps/NavelRock_Harbor/scripts.pory"
	setvar VAR_0x8004, LOCALID_NAVEL_ROCK_SS_TIDAL
# 17 "data/maps/NavelRock_Harbor/scripts.pory"
	call Common_EventScript_FerryDepartIsland
# 18 "data/maps/NavelRock_Harbor/scripts.pory"
	warp MAP_LILYCOVE_CITY_HARBOR, 8, 11
# 19 "data/maps/NavelRock_Harbor/scripts.pory"
	waitstate
	release_end

NavelRock_Harbor_EventScript_Sailor_2:
# 7 "data/maps/NavelRock_Harbor/scripts.pory"
	msgbox EventTicket_Text_AsYouLike, MSGBOX_DEFAULT
	release_end

