SootopolisCity_House1_MapScripts::
	.byte 0


SootopolisCity_House1_EventScript_BrickBreakBlackBelt::
# 4 "data/maps/SootopolisCity_House1/scripts.pory"
	lock_faceplayer
# 5 "data/maps/SootopolisCity_House1/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_BRICK_BREAK, SootopolisCity_House1_EventScript_BrickBreakBlackBelt_2
SootopolisCity_House1_EventScript_BrickBreakBlackBelt_1:
# 12 "data/maps/SootopolisCity_House1/scripts.pory"
	msgbox SootopolisCity_House1_Text_ExplainBrickBreak, MSGBOX_DEFAULT
	release_end

SootopolisCity_House1_EventScript_BrickBreakBlackBelt_2:
# 6 "data/maps/SootopolisCity_House1/scripts.pory"
	msgbox SootopolisCity_House1_Text_DevelopedThisTM, MSGBOX_DEFAULT
	giveitem ITEM_TM_BRICK_BREAK
# 0 "data/maps/SootopolisCity_House1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SootopolisCity_House1_EventScript_BrickBreakBlackBelt_5
SootopolisCity_House1_EventScript_BrickBreakBlackBelt_4:
# 10 "data/maps/SootopolisCity_House1/scripts.pory"
	setflag FLAG_RECEIVED_TM_BRICK_BREAK
	goto SootopolisCity_House1_EventScript_BrickBreakBlackBelt_1

SootopolisCity_House1_EventScript_BrickBreakBlackBelt_5:
# 8 "data/maps/SootopolisCity_House1/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto SootopolisCity_House1_EventScript_BrickBreakBlackBelt_4


SootopolisCity_House1_EventScript_Kecleon::
# 17 "data/maps/SootopolisCity_House1/scripts.pory"
	lock_faceplayer
# 18 "data/maps/SootopolisCity_House1/scripts.pory"
	waitse
# 19 "data/maps/SootopolisCity_House1/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_NORMAL
# 20 "data/maps/SootopolisCity_House1/scripts.pory"
	msgbox SootopolisCity_House1_Text_Kecleon, MSGBOX_DEFAULT
# 21 "data/maps/SootopolisCity_House1/scripts.pory"
	waitmoncry
	release_end


SootopolisCity_House1_Text_DevelopedThisTM::
# 25 "data/maps/SootopolisCity_House1/scripts.pory"
	.string "For thirty years I've remained in\n"
	.string "SOOTOPOLIS honing my skills.\p"
	.string "I developed a shattering TM.\n"
	.string "I bequeath it to you!$"

SootopolisCity_House1_Text_ExplainBrickBreak::
# 33 "data/maps/SootopolisCity_House1/scripts.pory"
	.string "TM31 contains BRICK BREAK! It's a move\n"
	.string "so horrible that I can't describe it.$"

SootopolisCity_House1_Text_Kecleon::
# 38 "data/maps/SootopolisCity_House1/scripts.pory"
	.string "Puu puhyaah.$"
