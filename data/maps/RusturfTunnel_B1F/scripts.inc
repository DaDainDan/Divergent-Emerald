RusturfTunnel_B1F_MapScripts::
	.byte 0


RusturfTunnel_B1F_EventScript_Malachi::
# 4 "data/maps/RusturfTunnel_B1F/scripts.pory"
	trainerbattle_single TRAINER_MALACHI, RusturfTunnel_B1F_Text_MalachiIntro, RusturfTunnel_B1F_Text_MalachiDefeat, RusturfTunnel_B1F_EventScript_Malachi_GiveTwistedSpoon
# 5 "data/maps/RusturfTunnel_B1F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TWISTED_SPOON, RusturfTunnel_B1F_EventScript_Malachi_2
RusturfTunnel_B1F_EventScript_Malachi_1:
# 8 "data/maps/RusturfTunnel_B1F/scripts.pory"
	msgbox RusturfTunnel_B1F_Text_MalachiPostBattle, MSGBOX_AUTOCLOSE
	end

RusturfTunnel_B1F_EventScript_Malachi_2:
# 6 "data/maps/RusturfTunnel_B1F/scripts.pory"
	goto RusturfTunnel_B1F_EventScript_Malachi_GiveTwistedSpoon
	goto RusturfTunnel_B1F_EventScript_Malachi_1


RusturfTunnel_B1F_EventScript_Malachi_GiveTwistedSpoon::
# 13 "data/maps/RusturfTunnel_B1F/scripts.pory"
	msgbox RusturfTunnel_B1F_Text_DarkEnergy, MSGBOX_DEFAULT
	giveitem ITEM_TWISTED_SPOON
# 0 "data/maps/RusturfTunnel_B1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RusturfTunnel_B1F_EventScript_Malachi_GiveTwistedSpoon_2
RusturfTunnel_B1F_EventScript_Malachi_GiveTwistedSpoon_1:
# 17 "data/maps/RusturfTunnel_B1F/scripts.pory"
	setflag FLAG_RECEIVED_TWISTED_SPOON
	end

RusturfTunnel_B1F_EventScript_Malachi_GiveTwistedSpoon_2:
# 15 "data/maps/RusturfTunnel_B1F/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto RusturfTunnel_B1F_EventScript_Malachi_GiveTwistedSpoon_1


RusturfTunnel_B1F_Text_MalachiIntro::
# 21 "data/maps/RusturfTunnel_B1F/scripts.pory"
	.string "There are powers beyond our\n"
	.string "understanding in the world…$"

RusturfTunnel_B1F_Text_MalachiDefeat::
# 26 "data/maps/RusturfTunnel_B1F/scripts.pory"
	.string "I have lost…$"

RusturfTunnel_B1F_Text_MalachiPostBattle::
# 30 "data/maps/RusturfTunnel_B1F/scripts.pory"
	.string "MT. PYRE…\n"
	.string "There is a mysterious power\l"
	.string "at work there…$"

RusturfTunnel_B1F_Text_DarkEnergy::
# 36 "data/maps/RusturfTunnel_B1F/scripts.pory"
	.string "There is clearly a twinge of dark energy\n"
	.string "within your heart.\p"
	.string "Perhaps, I should give you this.$"
