RustboroCity_Flat2_2F_MapScripts::
	.byte 0


RustboroCity_Flat2_2F_EventScript_OldMan::
# 4 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	msgbox RustboroCity_Flat2_2F_Text_DevonWasTinyInOldDays, MSGBOX_NPC
	end


RustboroCity_Flat2_2F_EventScript_NinjaBoy::
# 9 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	lock_faceplayer
# 10 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	goto_if_set FLAG_RECEIVED_PREMIER_BALL_RUSTBORO, RustboroCity_Flat2_2F_EventScript_NinjaBoy_2
# 14 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	msgbox RustboroCity_Flat2_2F_Text_MyDaddyMadeThisYouCanHaveIt, MSGBOX_DEFAULT
	giveitem ITEM_PREMIER_BALL
# 0 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_Flat2_2F_EventScript_NinjaBoy_5
RustboroCity_Flat2_2F_EventScript_NinjaBoy_4:
# 18 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	setflag FLAG_RECEIVED_PREMIER_BALL_RUSTBORO
	release_end

RustboroCity_Flat2_2F_EventScript_NinjaBoy_2:
# 11 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	msgbox RustboroCity_Flat2_2F_Text_GoingToWorkAtDevonToo, MSGBOX_DEFAULT
	release_end

RustboroCity_Flat2_2F_EventScript_NinjaBoy_5:
# 16 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto RustboroCity_Flat2_2F_EventScript_NinjaBoy_4


RustboroCity_Flat2_2F_Text_DevonWasTinyInOldDays::
# 22 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	.string "Way back in the old days, DEVON was just\n"
	.string "a teeny, tiny company.$"

RustboroCity_Flat2_2F_Text_MyDaddyMadeThisYouCanHaveIt::
# 27 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	.string "My daddy's working at the CORPORATION.\p"
	.string "My daddy made this!\n"
	.string "But I can't use it, so you can have it.$"

RustboroCity_Flat2_2F_Text_GoingToWorkAtDevonToo::
# 34 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	.string "My daddy's working at the CORPORATION.\p"
	.string "When I grow up, I'm going to work for\n"
	.string "DEVON, too.$"
