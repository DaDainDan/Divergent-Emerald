PacifidlogTown_House4_MapScripts::
	.byte 0


PacifidlogTown_House4_EventScript_LittleGirl::
# 4 "data/maps/PacifidlogTown_House4/scripts.pory"
	msgbox PacifidlogTown_House4_Text_SkyPokemon, MSGBOX_NPC
	end


PacifidlogTown_House4_EventScript_Woman::
# 9 "data/maps/PacifidlogTown_House4/scripts.pory"
	msgbox PacifidlogTown_House4_Text_PeopleSawHighFlyingPokemon, MSGBOX_NPC
	end


PacifidlogTown_House4_EventScript_Boy::
# 14 "data/maps/PacifidlogTown_House4/scripts.pory"
	lock_faceplayer
# 15 "data/maps/PacifidlogTown_House4/scripts.pory"
	msgbox PacifidlogTown_House4_Text_WhereDidYouComeFrom, MSGBOX_YESNO
# 16 "data/maps/PacifidlogTown_House4/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PacifidlogTown_House4_EventScript_Boy_2
# 19 "data/maps/PacifidlogTown_House4/scripts.pory"
	msgbox PacifidlogTown_House4_Text_YouHaveToComeFromSomewhere, MSGBOX_DEFAULT
PacifidlogTown_House4_EventScript_Boy_1:
	release_end

PacifidlogTown_House4_EventScript_Boy_2:
# 17 "data/maps/PacifidlogTown_House4/scripts.pory"
	msgbox PacifidlogTown_House4_Text_YesTown, MSGBOX_DEFAULT
	goto PacifidlogTown_House4_EventScript_Boy_1


PacifidlogTown_House4_Text_PeopleSawHighFlyingPokemon::
# 24 "data/maps/PacifidlogTown_House4/scripts.pory"
	.string "People were saying they saw a POKéMON\n"
	.string "flying high above HOENN.\p"
	.string "Is it flying around all the time?\n"
	.string "Doesn't it need to rest somewhere?$"

PacifidlogTown_House4_Text_SkyPokemon::
# 32 "data/maps/PacifidlogTown_House4/scripts.pory"
	.string "A sky POKéMON!\n"
	.string "A sky POKéMON!$"

PacifidlogTown_House4_Text_WhereDidYouComeFrom::
# 37 "data/maps/PacifidlogTown_House4/scripts.pory"
	.string "Where did you come from?$"

PacifidlogTown_House4_Text_YesTown::
# 41 "data/maps/PacifidlogTown_House4/scripts.pory"
	.string "Yes?\n"
	.string "YES TOWN?\p"
	.string "I've never heard of a place like that.$"

PacifidlogTown_House4_Text_YouHaveToComeFromSomewhere::
# 48 "data/maps/PacifidlogTown_House4/scripts.pory"
	.string "No? That doesn't make any sense.\n"
	.string "You have to come from somewhere.\p"
	.string "Oh! Wait! You're not going to say you\n"
	.string "were born at the bottom of the sea?$"
