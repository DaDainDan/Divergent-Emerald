SSAnne_1F_Room6_Frlg_MapScripts::
	.byte 0


SSAnne_1F_Room6_EventScript_Woman::
# 4 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	lock_faceplayer
# 5 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	msgbox SSAnne_1F_Room6_Text_TakeAShortRest, MSGBOX_YESNO
# 6 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SSAnne_1F_Room6_EventScript_Woman_2
	checkplayergender
# 0 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SSAnne_1F_Room6_EventScript_Woman_3
# 15 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	msgbox SSAnne_1F_Room6_Text_SorryYouLookLikeMySister
SSAnne_1F_Room6_EventScript_Woman_1:
	release_end

SSAnne_1F_Room6_EventScript_Woman_2:
# 7 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	closemessage
# 8 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 9 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	msgbox SSAnne_1F_Room6_Text_GladEveryoneIsRefreshed
	goto SSAnne_1F_Room6_EventScript_Woman_1

SSAnne_1F_Room6_EventScript_Woman_3:
# 12 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	msgbox SSAnne_1F_Room6_Text_SorryYouLookLikeMyBrother
	goto SSAnne_1F_Room6_EventScript_Woman_1


SSAnne_1F_Room6_Text_TakeAShortRest::
# 20 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	.string "You look tired. Would you like to\n"
	.string "take a short rest?$"

SSAnne_1F_Room6_Text_GladEveryoneIsRefreshed::
# 25 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	.string "I'm glad to see that everyone is\n"
	.string "looking refreshed and chipper.$"

SSAnne_1F_Room6_Text_SorryYouLookLikeMyBrother::
# 30 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	.string "Oh, I'm sorry for fussing over you.\n"
	.string "You look like my little brother…$"

SSAnne_1F_Room6_Text_SorryYouLookLikeMySister::
# 35 "data/maps/SSAnne_1F_Room6_Frlg/scripts.pory"
	.string "Oh, I'm sorry for fussing over you.\n"
	.string "You look like my little sister…$"
