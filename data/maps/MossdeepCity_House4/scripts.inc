MossdeepCity_House4_MapScripts::
	.byte 0


MossdeepCity_House4_EventScript_Woman::
# 4 "data/maps/MossdeepCity_House4/scripts.pory"
	lock_faceplayer
# 5 "data/maps/MossdeepCity_House4/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_House4_EventScript_Woman_2
# 9 "data/maps/MossdeepCity_House4/scripts.pory"
	msgbox MossdeepCity_House4_Text_BrotherLikesToFindBases, MSGBOX_DEFAULT
	release_end

MossdeepCity_House4_EventScript_Woman_2:
# 6 "data/maps/MossdeepCity_House4/scripts.pory"
	msgbox MossdeepCity_House4_Text_BrotherLikesToVisitBasesAndBattle, MSGBOX_DEFAULT
	release_end


MossdeepCity_House4_EventScript_NinjaBoy::
# 14 "data/maps/MossdeepCity_House4/scripts.pory"
	lock_faceplayer
# 15 "data/maps/MossdeepCity_House4/scripts.pory"
	special CheckPlayerHasSecretBase
# 16 "data/maps/MossdeepCity_House4/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MossdeepCity_House4_EventScript_NinjaBoy_2
# 20 "data/maps/MossdeepCity_House4/scripts.pory"
	special GetSecretBaseNearbyMapName
# 21 "data/maps/MossdeepCity_House4/scripts.pory"
	msgbox MossdeepCity_House4_Text_YouMadeSecretBaseNearX, MSGBOX_DEFAULT
	release_end

MossdeepCity_House4_EventScript_NinjaBoy_2:
# 17 "data/maps/MossdeepCity_House4/scripts.pory"
	msgbox MossdeepCity_House4_Text_MakeSecretBase, MSGBOX_DEFAULT
	release_end


MossdeepCity_House4_EventScript_Skitty::
# 26 "data/maps/MossdeepCity_House4/scripts.pory"
	lock_faceplayer
# 27 "data/maps/MossdeepCity_House4/scripts.pory"
	waitse
# 28 "data/maps/MossdeepCity_House4/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 29 "data/maps/MossdeepCity_House4/scripts.pory"
	msgbox MossdeepCity_House4_Text_Skitty, MSGBOX_DEFAULT
# 30 "data/maps/MossdeepCity_House4/scripts.pory"
	waitmoncry
	release_end


MossdeepCity_House4_Text_BrotherLikesToFindBases::
# 34 "data/maps/MossdeepCity_House4/scripts.pory"
	.string "My little brother says he likes to go\n"
	.string "find people's SECRET BASES.$"

MossdeepCity_House4_Text_BrotherLikesToVisitBasesAndBattle::
# 39 "data/maps/MossdeepCity_House4/scripts.pory"
	.string "My little brother says he likes to\n"
	.string "visit people's SECRET BASES and have\l"
	.string "POKéMON battles.$"

MossdeepCity_House4_Text_YouMadeSecretBaseNearX::
# 45 "data/maps/MossdeepCity_House4/scripts.pory"
	.string "Was it you who made a SECRET BASE\n"
	.string "near {STR_VAR_1}?$"

MossdeepCity_House4_Text_MakeSecretBase::
# 50 "data/maps/MossdeepCity_House4/scripts.pory"
	.string "You should make a SECRET BASE\n"
	.string "somewhere. I'll go find it!$"

MossdeepCity_House4_Text_Skitty::
# 55 "data/maps/MossdeepCity_House4/scripts.pory"
	.string "SKITTY: Miyaan?$"
