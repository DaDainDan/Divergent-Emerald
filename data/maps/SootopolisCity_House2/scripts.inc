SootopolisCity_House2_MapScripts::
	.byte 0


SootopolisCity_House2_EventScript_ExpertF::
# 4 "data/maps/SootopolisCity_House2/scripts.pory"
	lock_faceplayer
# 5 "data/maps/SootopolisCity_House2/scripts.pory"
	msgbox SootopolisCity_House2_Text_DidYouKnowAboutMtPyreOrbs, MSGBOX_YESNO
# 6 "data/maps/SootopolisCity_House2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SootopolisCity_House2_EventScript_ExpertF_2
# 9 "data/maps/SootopolisCity_House2/scripts.pory"
	msgbox SootopolisCity_House2_Text_OughtToVisitAndSee, MSGBOX_DEFAULT
SootopolisCity_House2_EventScript_ExpertF_1:
	release_end

SootopolisCity_House2_EventScript_ExpertF_2:
# 7 "data/maps/SootopolisCity_House2/scripts.pory"
	msgbox SootopolisCity_House2_Text_YesTwoOrbsSideBySide, MSGBOX_DEFAULT
	goto SootopolisCity_House2_EventScript_ExpertF_1


SootopolisCity_House2_Text_DidYouKnowAboutMtPyreOrbs::
# 14 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "MT. PYRE…\p"
	.string "At its peak are two orbs placed side\n"
	.string "by side. Did you know?$"

SootopolisCity_House2_Text_YesTwoOrbsSideBySide::
# 21 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "Yes, two orbs side by side…\p"
	.string "The sight of them together…\n"
	.string "It is somehow soothing…$"

SootopolisCity_House2_Text_OughtToVisitAndSee::
# 28 "data/maps/SootopolisCity_House2/scripts.pory"
	.string "Is that so?\n"
	.string "Perhaps you ought to visit and see…$"
